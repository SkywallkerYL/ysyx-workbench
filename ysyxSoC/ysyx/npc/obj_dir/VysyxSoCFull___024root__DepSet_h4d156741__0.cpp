// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024root.h"

extern "C" void set_gpr_ptr(const svOpenArrayHandle a);

VL_INLINE_OPT void VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__screen__DOT__set_gpr_ptr__Vdpioc2_TOP(const VlUnpacked<IData/*31:0*/, 120000> &a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root____Vdpiimwrap_ysyxSoCFull__DOT__screen__DOT__set_gpr_ptr__Vdpioc2_TOP\n"); );
    // Body
    static const int a__Vopenprops__ulims[2] = {119999, 0};
    static const VerilatedVarProps a__Vopenprops(VLVT_UINT32, VLVD_IN, VerilatedVarProps::Packed(), 31, 0, VerilatedVarProps::Unpacked(), 1, a__Vopenprops__ulims);
    VerilatedDpiOpenVar a__Vopenarray (&a__Vopenprops, &a);
    set_gpr_ptr(&a__Vopenarray);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__ico(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG

void VysyxSoCFull___024root___eval_triggers__ico(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_triggers__ico\n"); );
    // Body
    vlSelf->__VicoTriggered.set(0U, (0U == vlSelf->__VicoIterCount));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VysyxSoCFull___024root___dump_triggers__ico(vlSelf);
    }
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VysyxSoCFull___024root___dump_triggers__act(VysyxSoCFull___024root* vlSelf);
#endif  // VL_DEBUG

void VysyxSoCFull___024root___eval_triggers__act(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache_valid) 
                                     != (IData)(vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache_valid__0)));
    vlSelf->__VactTriggered.set(1U, ((IData)(vlSelf->clock) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock__0))));
    vlSelf->__VactTriggered.set(2U, (((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock__0))) 
                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg___0)))));
    vlSelf->__VactTriggered.set(3U, (((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock__0))) 
                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain_reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain_reset__0)))));
    vlSelf->__VactTriggered.set(4U, (((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock__0))) 
                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_rst_reg__DOT__reg_) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_rst_reg__DOT__reg___0)))));
    vlSelf->__VactTriggered.set(5U, (((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock__0))) 
                                     | ((IData)(vlSelf->reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__reset__0)))));
    vlSelf->__VactTriggered.set(6U, (((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock__0))) 
                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg___0)))));
    vlSelf->__VactTriggered.set(7U, (((IData)(vlSelf->clock) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__clock__0))) 
                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain_reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain_reset__0)))));
    vlSelf->__VactTriggered.set(8U, (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_spi_clk) 
                                      & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_spi_clk__0))) 
                                     | ((IData)(vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__reset) 
                                        & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__spiFlash__DOT__reset__0)))));
    vlSelf->__VactTriggered.set(9U, ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_spi_clk) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_spi_clk__0))));
    vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache_valid__0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache_valid;
    vlSelf->__Vtrigprevexpr___TOP__clock__0 = vlSelf->clock;
    vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg___0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_;
    vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain_reset__0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain_reset;
    vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_rst_reg__DOT__reg___0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__io_c2b_rst_reg__DOT__reg_;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
    vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg___0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_;
    vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain_reset__0 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__io_a_source__DOT__sink_extend__DOT__io_out_source_valid_0__DOT__output_chain_reset;
    vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_spi_clk__0 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lspi__DOT__mspi_spi_clk;
    vlSelf->__Vtrigprevexpr___TOP__ysyxSoCFull__DOT__spiFlash__DOT__reset__0 
        = vlSelf->ysyxSoCFull__DOT__spiFlash__DOT__reset;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(0U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VysyxSoCFull___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VysyxSoCFull___024root___nba_sequent__TOP__0(VysyxSoCFull___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VysyxSoCFull__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VysyxSoCFull___024root___nba_sequent__TOP__0\n"); );
    // Init
    VlWide<4>/*127:0*/ __Vtemp_h34d61e36__0;
    VlWide<4>/*127:0*/ __Vtemp_h34d61e36__1;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__0;
    VlWide<4>/*127:0*/ __Vtemp_h2f112992__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__1;
    VlWide<4>/*127:0*/ __Vtemp_hf3df8455__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__2;
    VlWide<4>/*127:0*/ __Vtemp_h9c9709b8__0;
    VlWide<4>/*127:0*/ __Vtemp_hd2b6c582__3;
    VlWide<4>/*127:0*/ __Vtemp_h9d20285d__0;
    // Body
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lps2__DOT__mps2__DOT__ps2_clk_sync 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lps2__DOT__mps2__DOT__ps2_clk_sync;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__ram_strb__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__deq__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__deq__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__deq__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_burst__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_param__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_param__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__deq__DOT__ram_strb__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__ram_burst__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__ram_burst__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__deq__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__deq__DOT__ram_strb__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceD__DOT__cam__DOT__data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_sink__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_sink__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__deq__DOT__ram_strb__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__ram_addr__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__ram_addr__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ram_echo_real_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_echo_real_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ram_addr__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_addr__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_burst__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_mask__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_mask__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_denied__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_param__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_denied__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_param__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__ram_len__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__ram_len__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_param__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_param__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq_1__DOT__ram_echo_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__deq__DOT__ram_echo_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__ram_strb__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceC__DOT__cam__DOT__data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_len__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4frag__DOT__in_wdeq__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_28__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq_1__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_28__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi42tl__DOT__q_bdeq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__ram_echo_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_opcode__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_opcode__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_len__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sinkD__DOT__d__DOT__ram_source__v0 = 0U;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__lfsr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__DCache__DOT__lfsr;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__lfsr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__ICache__DOT__lfsr;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v1 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v2 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v3 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v4 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v5 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v6 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__ram__v7 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_addr__v0 = 0U;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lps2__DOT__mps2__DOT__w_ptr 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lps2__DOT__mps2__DOT__w_ptr;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__lps2__DOT__mps2__DOT__count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__lps2__DOT__mps2__DOT__count;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__lps2__DOT__mps2__DOT__fifo__v0 = 0U;
    vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__value 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__value;
    vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeat_count_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeat_count_1;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_count_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_count_1;
    vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeat_count 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__repeat_count;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__repeat_count;
    vlSelf->__Vdly__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__value 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__value;
    vlSelf->__Vdly__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__value_1 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__value_1;
    vlSelf->__Vdly__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__value 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__value;
    vlSelf->__Vdly__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__value_1 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__value_1;
    vlSelf->__Vdly__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__value 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__value;
    vlSelf->__Vdly__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__value_1 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__value_1;
    vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_count 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeat_count;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeat_count;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeat_count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__repeat_count;
    vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__value 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__value;
    vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__value 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__value;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_strb__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeat_count 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__repeat_count;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__ram_tl_state_source__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq_io_enq_valid)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__full))) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at RX.scala:56 assert (!hq.io.enq.valid || hq.io.enq.ready) // overrun impossible\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq_io_enq_valid)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__full))) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:29061: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.rx\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 29061, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq_io_enq_valid)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__full))) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at RX.scala:56 assert (!hq.io.enq.valid || hq.io.enq.ready) // overrun impossible\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq_io_enq_valid)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__full))) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:29085: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.rx\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 29085, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq_io_enq_valid)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__full))) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at RX.scala:56 assert (!hq.io.enq.valid || hq.io.enq.ready) // overrun impossible\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq_io_enq_valid)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__full))) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:29109: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.rx\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 29109, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq_io_enq_valid)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__full))) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at RX.scala:56 assert (!hq.io.enq.valid || hq.io.enq.ready) // overrun impossible\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq_io_enq_valid)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__full))) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:29133: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.rx\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 29133, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq_io_enq_valid)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__full))) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at RX.scala:56 assert (!hq.io.enq.valid || hq.io.enq.ready) // overrun impossible\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq_io_enq_valid)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__full))) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:29157: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.rx\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 29157, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq_io_enq_valid)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__full))) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at RX.scala:56 assert (!hq.io.enq.valid || hq.io.enq.ready) // overrun impossible\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq_io_enq_valid)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__full))) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:29061: Assertion failed in %NysyxSoCFull.fpga.chiplink.rx\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 29061, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq_io_enq_valid)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__full))) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at RX.scala:56 assert (!hq.io.enq.valid || hq.io.enq.ready) // overrun impossible\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq_io_enq_valid)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__full))) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:29085: Assertion failed in %NysyxSoCFull.fpga.chiplink.rx\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 29085, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq_io_enq_valid)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__full))) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at RX.scala:56 assert (!hq.io.enq.valid || hq.io.enq.ready) // overrun impossible\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq_io_enq_valid)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__full))) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:29109: Assertion failed in %NysyxSoCFull.fpga.chiplink.rx\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 29109, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq_io_enq_valid)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__full))) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at RX.scala:56 assert (!hq.io.enq.valid || hq.io.enq.ready) // overrun impossible\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq_io_enq_valid)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__full))) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:29133: Assertion failed in %NysyxSoCFull.fpga.chiplink.rx\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 29133, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq_io_enq_valid)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__full))) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at RX.scala:56 assert (!hq.io.enq.valid || hq.io.enq.ready) // overrun impossible\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq_io_enq_valid)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__full))) 
                              | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx_reset_reg__DOT__reg_)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:29157: Assertion failed in %NysyxSoCFull.fpga.chiplink.rx\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 29157, "");
    }
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_ardeq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_awdeq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__count_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__count_1;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__count_1 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__count_1;
    vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__widget__DOT__count 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget__DOT__count;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_strb__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__ram_echo_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__ram_echo_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__ram_echo_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__ram_echo_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__ram_echo_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__ram_echo_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__ram_echo_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__ram_echo_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__ram_echo_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__ram_echo_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__ram_echo_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_echo_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_echo_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_echo_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_echo_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_echo_extra_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__ram_echo_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__ram_echo_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__ram_echo_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__ram_echo_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__ram_echo_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__ram_echo_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__ram_echo_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__ram_echo_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__ram_echo_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__ram_echo_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__ram_echo_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_echo_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_echo_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_echo_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_echo_tl_state_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_echo_tl_state_size__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_data_MPORT_en)) 
                               | (0U != ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter))
                                          ? ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_valid)
                                              ? 1U : 0U)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter)))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:169 assert (!out.w.fire() || w_todo =/= UInt(0)) // underflow impossible\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleOut_0_wdeq__DOT__ram_data_MPORT_en)) 
                               | (0U != ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter))
                                          ? ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_valid)
                                              ? 1U : 0U)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter)))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:146687: Assertion failed in %NysyxSoCFull.mem.axi4frag\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 146687, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_io_deq_valid) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___bundleOut_0_wvalid_T_1))) 
                                | (~ ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full)
                                       ? vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__ram_last
                                      [0U] : (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__ram_last_MPORT_data)))) 
                               | (1U == ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter))
                                          ? ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_valid)
                                              ? 1U : 0U)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter)))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Fragmenter.scala:178 assert (!out.w.valid || !in_w.bits.last || w_last)\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq_io_deq_valid) 
                                    & (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT___bundleOut_0_wvalid_T_1))) 
                                | (~ ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__maybe_full)
                                       ? vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__ram_last
                                      [0U] : (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__in_wdeq__DOT__ram_last_MPORT_data)))) 
                               | (1U == ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter))
                                          ? ((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__wbeats_valid)
                                              ? 1U : 0U)
                                          : (IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4frag__DOT__w_counter)))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:146710: Assertion failed in %NysyxSoCFull.mem.axi4frag\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 146710, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__first)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0)
                                 : (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___send_T))) 
                               == (0U != ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__grant) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__requests)))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TX.scala:101 assert (send === ((grant & requests) =/= UInt(0)))\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__first)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0)
                                 : (0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT___send_T))) 
                               == (0U != ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__grant) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__tx__DOT__requests)))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:31025: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.tx\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 31025, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__first)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0)
                                 : (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___send_T))) 
                               == (0U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__grant) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__requests)))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at TX.scala:101 assert (send === ((grant & requests) =/= UInt(0)))\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__first)
                                 ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__rxQ__DOT__valid_0)
                                 : (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT___send_T))) 
                               == (0U != ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__grant) 
                                          & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__tx__DOT__requests)))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:31025: Assertion failed in %NysyxSoCFull.fpga.chiplink.tx\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 31025, "");
    }
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_28__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__err__DOT__c__DOT__ram_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__err__DOT__a__DOT__ram_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__a__DOT__ram_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_size__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid)) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__earlyWinner_1)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__monitor_io_in_d_valid)) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__earlyWinner_1)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:4517: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 4517, "");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:4541: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 4541, "");
    }
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_wen__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_opcode__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__ram_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_echo_tl_state_source__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__earlyWinner_0)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:105 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__earlyWinner_0)) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:7429: Assertion failed in %NysyxSoCFull.fpga.xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 7429, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_valid) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor_io_in_d_valid))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__earlyWinner_0) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_valid) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor_io_in_d_valid))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__earlyWinner_0) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar_1__DOT__earlyWinner_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:7453: Assertion failed in %NysyxSoCFull.fpga.xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 7453, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_valid) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor_io_in_d_valid))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_valid) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor_io_in_d_valid))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_valid) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor_io_in_d_valid))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__bar__DOT__monitor_io_in_d_valid) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__monitor_io_in_d_valid))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:7477: Assertion failed in %NysyxSoCFull.fpga.xbar_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 7477, "");
    }
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq__DOT__ram_id__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_2__DOT__count;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT__ram_wen__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_wen__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sinkA__DOT__inject_io_i_q__DOT__ram_address__v0 = 0U;
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16139: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16139, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16163: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16163, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16187: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16187, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16211: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16211, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16235: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16235, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16259: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16259, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16283: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16283, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16307: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16307, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16331: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16331, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16355: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16355, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16379: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16379, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16403: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16403, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16427: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16427, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16451: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16451, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16475: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16475, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16499: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16499, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16523: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16523, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16547: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16547, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16571: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16571, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16595: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16595, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16619: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16619, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16643: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16643, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16667: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16667, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16691: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16691, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16715: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16715, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16739: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16739, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16763: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16763, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16787: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16787, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid)) 
                     & (~ (((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid)) 
                     & (~ (((1U & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16811: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16811, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16835: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16835, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1233) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1233) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16859: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16859, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1233) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                               >> 1U)))
                                  ? 4U : ((6U == (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                 >> 1U)))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                               >> 1U)))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1233) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                               >> 1U)))
                                  ? 4U : ((6U == (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                 >> 1U)))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                               >> 1U)))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16883: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16883, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1233) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size) 
                            == (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__inflight_sizes) 
                                       >> (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                 << 2U))) 
                                      >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1233) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size) 
                            == (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__inflight_sizes) 
                                       >> (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                 << 2U))) 
                                      >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16907: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16907, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1321) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1321) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16931: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16931, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1321) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size) 
                            == (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__inflight_sizes_1) 
                                       >> (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                 << 2U))) 
                                      >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1321) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size) 
                            == (7U & (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__inflight_sizes_1) 
                                       >> (4U & ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                                 << 2U))) 
                                      >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16955: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16955, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_3)) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1376))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_3)) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1376))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:16979: Assertion failed in %NysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 16979, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:92790: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 92790, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:92814: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 92814, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:92838: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 92838, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:92862: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 92862, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:92886: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 92886, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:92910: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 92910, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:92934: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 92934, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:92958: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 92958, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:92982: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 92982, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:93006: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 93006, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:93030: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 93030, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid source ID (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:93054: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 93054, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData smaller than a beat (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U <= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:93078: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 93078, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries invalid cap param (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:93102: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 93102, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData carries toN param (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:93126: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 93126, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel GrantData is denied but not corrupt (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:93150: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 93150, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid source ID (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:93174: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 93174, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck carries invalid param (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:93198: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 93198, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAck is corrupt (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:93222: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 93222, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid source ID (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:93246: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 93246, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData carries invalid param (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:93270: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 93270, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel AccessAckData is denied but not corrupt (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_denied)) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:93294: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 93294, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid source ID (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:93318: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 93318, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck carries invalid param (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:93342: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 93342, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel HintAck is corrupt (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__full)
                                ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_1__DOT__repeated_repeater__DOT__saved_corrupt)
                                : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__atomics__DOT__monitor_io_in_d_bits_corrupt))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:93366: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 93366, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel opcode changed within multibeat operation (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__opcode_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:93390: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 93390, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel param changed within multibeat operation (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__param_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:93414: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 93414, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel size changed within multibeat operation (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__size_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:93438: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 93438, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid)) 
                     & (~ (((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel source changed within multibeat operation (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid)) 
                     & (~ (((1U & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source)) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__source_1)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:93462: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 93462, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel denied changed with multibeat operation (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__denied) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:93486: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 93486, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1374) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1374) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:93510: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 93510, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1374) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                               >> 1U)))
                                  ? 4U : ((6U == (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                 >> 1U)))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                               >> 1U)))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper opcode response (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1374) 
                     & (~ ((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode) 
                             == ((7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                               >> 1U)))
                                  ? 4U : ((6U == (7U 
                                                  & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                     >> 1U)))
                                           ? 4U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___GEN_58)))) 
                            | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_opcode) 
                               == ((7U == (7U & ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                                 >> 1U)))
                                    ? 4U : ((6U == 
                                             (7U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___a_opcode_lookup_T_1) 
                                               >> 1U)))
                                             ? 5U : (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___GEN_58))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:93534: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 93534, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1374) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size) 
                            == (0x7fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__inflight_sizes) 
                                          >> (8U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                               << 3U))) 
                                         >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1374) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size) 
                            == (0x7fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__inflight_sizes) 
                                          >> (8U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                               << 3U))) 
                                         >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:93558: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 93558, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1462) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel acknowledged for nothing inflight (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1462) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:93582: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 93582, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1462) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size) 
                            == (0x7fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__inflight_sizes_1) 
                                          >> (8U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                               << 3U))) 
                                         >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel contains improper response size (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1462) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_bits_size) 
                            == (0x7fU & (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__inflight_sizes_1) 
                                          >> (8U & 
                                              ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_1_io_in_d_bits_source) 
                                               << 3U))) 
                                         >> 1U))) | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:93606: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 93606, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_3)) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1517))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel re-used a sink ID (connected at ChipLink.scala:70:16)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor_io_in_d_valid) 
                      & ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__d_first_counter_3)) 
                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT___T_1517))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__mbypass__DOT__monitor__DOT__inflight_2)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:93630: Assertion failed in %NysyxSoCFull.fpga.chiplink.mbypass.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 93630, "");
    }
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__a__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__a__DOT__ram_opcode__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_0_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:104927: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 104927, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0))) 
                               | (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0))) 
                               | (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:104949: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 104949, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_1_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:104971: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 104971, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x7fffU & ((((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                               >> 1U) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                               | (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x7fffU & ((((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                               >> 1U) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                               | (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:104993: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 104993, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_2))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_2_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_2))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:105015: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 105015, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x3fffU & ((((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                               | (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_2))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x3fffU & ((((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                               >> 2U) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                               | (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_2))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:105037: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 105037, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_3))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_3_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_3))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:105059: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 105059, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x1fffU & ((((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                               >> 3U) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                               | (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_3))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x1fffU & ((((IData)(1U) 
                                                << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                               >> 3U) 
                                              & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                               | (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_3))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:105081: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 105081, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_4))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_4_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_4))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:105103: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 105103, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xfffU & ((((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                              >> 4U) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                               | (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_4))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xfffU & ((((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                              >> 4U) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                               | (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_4))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:105125: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 105125, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_5))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_5_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_5))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:105147: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 105147, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x7ffU & ((((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                              >> 5U) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                               | (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_5))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x7ffU & ((((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                              >> 5U) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                               | (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_5))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:105169: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 105169, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_6))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_6_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_6))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:105191: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 105191, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x3ffU & ((((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                              >> 6U) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                               | (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_6))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x3ffU & ((((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                              >> 6U) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                               | (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_6))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:105213: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 105213, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_7))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_7_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_7))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:105235: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 105235, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x1ffU & ((((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                              >> 7U) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                               | (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_7))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x1ffU & ((((IData)(1U) 
                                               << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                              >> 7U) 
                                             & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                               | (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_7))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:105257: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 105257, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_8))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_8_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_8))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:105279: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 105279, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xffU & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                             >> 8U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                               | (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_8))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xffU & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                             >> 8U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                               | (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_8))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:105301: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 105301, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_9))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_9_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_9))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:105323: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 105323, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x7fU & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                             >> 9U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                               | (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_9))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x7fU & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                             >> 9U) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                               | (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_9))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:105345: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 105345, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_10))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_10_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_10))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:105367: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 105367, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x3fU & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                             >> 0xaU) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                               | (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_10))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x3fU & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                             >> 0xaU) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                               | (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_10))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:105389: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 105389, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_11))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_11_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_11))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:105411: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 105411, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x1fU & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                             >> 0xbU) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                               | (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_11))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0x1fU & ((((IData)(1U) 
                                              << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                             >> 0xbU) 
                                            & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                               | (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_11))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:105433: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 105433, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_12))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_12_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_12))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:105455: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 105455, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xfU & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                            >> 0xcU) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                               | (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_12))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (0xfU & ((((IData)(1U) 
                                             << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                            >> 0xcU) 
                                           & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                               | (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_12))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:105477: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 105477, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_13))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_13_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_13))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:105499: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 105499, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (7U & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                          >> 0xdU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                               | (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_13))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (7U & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                          >> 0xdU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                               | (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_13))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:105521: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 105521, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_14))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_14_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_14))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:105543: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 105543, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (3U & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                          >> 0xeU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                               | (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_14))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (3U & ((((IData)(1U) 
                                           << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                          >> 0xeU) 
                                         & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0)))) 
                               | (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_14))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:105565: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 105565, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_15))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:99 assert (!dec || count =/= 0.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__qs_queue_15_io_deq_ready) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__bundleIn_0_rlast))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_15))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:105587: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 105587, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                      >> 0xfU))) | 
                               (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_15))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Deinterleaver.scala:100 assert (!inc || count =/= beats.U)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT____VdfgTmp_h9d6996c9__0) 
                                   & (((IData)(1U) 
                                       << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data)) 
                                      >> 0xfU))) | 
                               (8U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4deint__DOT__pending_count_15))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:105609: Assertion failed in %NysyxSoCFull.fpga.axi4deint\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 105609, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_valid)) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_id)
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1_io_deq_valid)
                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_io_deq_valid))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at UserYanker.scala:63 assert (!out.r.valid || r_valid) // Q must be ready faster than the response\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_valid)) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__deq_io_deq_bits_id)
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_1_io_deq_valid)
                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_io_deq_valid))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:39963: Assertion failed in %NysyxSoCFull.asic.chipMaster.axi4yank\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 39963, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__bundleIn_0_bvalid)) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3_io_deq_valid)
                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2_io_deq_valid))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at UserYanker.scala:84 assert (!out.b.valid || b_valid) // Q must be ready faster than the response\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__bundleIn_0_bvalid)) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi42tl__DOT__q_bdeq_io_deq_bits_id)
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_3_io_deq_valid)
                                   : (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__axi4yank__DOT__QueueCompatibility_2_io_deq_valid))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:39987: Assertion failed in %NysyxSoCFull.asic.chipMaster.axi4yank\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 39987, "");
    }
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__idle) 
                               | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__counter))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Error.scala:49 assert (idle || da_first) // we only send Grant, never GrantData => simplified flow control below\n");
    }
    if (VL_UNLIKELY((1U & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__idle) 
                               | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__counter))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:10182: Assertion failed in %NysyxSoCFull.fpga.ferr\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 10182, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__da_valid)) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__earlyWinner_1)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__da_valid)) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__ferr__DOT__earlyWinner_1)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:10206: Assertion failed in %NysyxSoCFull.fpga.ferr\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 10206, "");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:10230: Assertion failed in %NysyxSoCFull.fpga.ferr\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 10230, "");
    }
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_resp__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_echo_real_last__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_data__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__idle) 
                               | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__counter))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Error.scala:49 assert (idle || da_first) // we only send Grant, never GrantData => simplified flow control below\n");
    }
    if (VL_UNLIKELY((1U & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__idle) 
                               | (0U == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__counter))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:15555: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 15555, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_valid)) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__earlyWinner_1)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__da_valid)) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sbypass__DOT__error__DOT__earlyWinner_1)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:15579: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 15579, "");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:15603: Assertion failed in %NysyxSoCFull.fpga.chiplink.sbypass.error\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 15603, "");
    }
    vlSelf->__Vdly__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:265 assert (!anyValid || winner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:145060: Assertion failed in %NysyxSoCFull.mem.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 145060, "");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:265 assert (!anyValid || winner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:145082: Assertion failed in %NysyxSoCFull.mem.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 145082, "");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:265 assert (!anyValid || winner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:145104: Assertion failed in %NysyxSoCFull.mem.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 145104, "");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Xbar.scala:265 assert (!anyValid || winner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (1U | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:145126: Assertion failed in %NysyxSoCFull.mem.axi4xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 145126, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)) 
                               | ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15__DOT__maybe_full)
                                   : ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14__DOT__maybe_full)
                                       : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13__DOT__maybe_full)
                                           : ((0xcU 
                                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__maybe_full)
                                               : ((0xbU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__maybe_full)
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__maybe_full)
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__maybe_full)
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__maybe_full)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__maybe_full)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? 
                                                       (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__empty))
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? 
                                                        (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__empty))
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                          ? 
                                                         (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__empty))
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                           ? 
                                                          (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__empty))
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                            ? 
                                                           (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__empty))
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                             ? 
                                                            (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__empty))
                                                             : 
                                                            (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__empty)))))))))))))))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at UserYanker.scala:63 assert (!out.r.valid || r_valid) // Q must be ready faster than the response\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value_1)) 
                               | ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_15__DOT__maybe_full)
                                   : ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_14__DOT__maybe_full)
                                       : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_13__DOT__maybe_full)
                                           : ((0xcU 
                                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_12__DOT__maybe_full)
                                               : ((0xbU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_11__DOT__maybe_full)
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_10__DOT__maybe_full)
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_9__DOT__maybe_full)
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_8__DOT__maybe_full)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_7__DOT__maybe_full)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? 
                                                       (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_6__DOT__empty))
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? 
                                                        (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_5__DOT__empty))
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                          ? 
                                                         (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_4__DOT__empty))
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                           ? 
                                                          (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_3__DOT__empty))
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                            ? 
                                                           (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_2__DOT__empty))
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                             ? 
                                                            (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_1__DOT__empty))
                                                             : 
                                                            (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility__DOT__empty)))))))))))))))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:103153: Assertion failed in %NysyxSoCFull.fpga.axi4yank_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 103153, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1)) 
                               | ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__maybe_full)
                                   : ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__maybe_full)
                                       : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__maybe_full)
                                           : ((0xcU 
                                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__maybe_full)
                                               : ((0xbU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__maybe_full)
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__maybe_full)
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__maybe_full)
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__maybe_full)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__maybe_full)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? 
                                                       (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__empty))
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? 
                                                        (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__empty))
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                          ? 
                                                         (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__empty))
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                           ? 
                                                          (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__empty))
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                            ? 
                                                           (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__empty))
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                             ? 
                                                            (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__empty))
                                                             : 
                                                            (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__empty)))))))))))))))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at UserYanker.scala:84 assert (!out.b.valid || b_valid) // Q must be ready faster than the response\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1)) 
                               | ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_31__DOT__maybe_full)
                                   : ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_30__DOT__maybe_full)
                                       : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_29__DOT__maybe_full)
                                           : ((0xcU 
                                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_28__DOT__maybe_full)
                                               : ((0xbU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_27__DOT__maybe_full)
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_26__DOT__maybe_full)
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_25__DOT__maybe_full)
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_24__DOT__maybe_full)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_23__DOT__maybe_full)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                        ? 
                                                       (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_22__DOT__empty))
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                         ? 
                                                        (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_21__DOT__empty))
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                          ? 
                                                         (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_20__DOT__empty))
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                           ? 
                                                          (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_19__DOT__empty))
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                            ? 
                                                           (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_18__DOT__empty))
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_id_io_deq_bits_MPORT_data))
                                                             ? 
                                                            (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_17__DOT__empty))
                                                             : 
                                                            (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_1__DOT__QueueCompatibility_16__DOT__empty)))))))))))))))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:103177: Assertion failed in %NysyxSoCFull.fpga.axi4yank_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 103177, "");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__earlyWinner_0)) 
                                | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__earlyWinner_1))) 
                               & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__earlyWinner_0) 
                                      | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__earlyWinner_1))) 
                                  | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__earlyWinner_2)))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:105 assert((prefixOR zip earlyWinner) map { case (p,w) => !p || !w } reduce {_ && _})\n");
    }
    if (VL_UNLIKELY((1U & (~ ((((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__earlyWinner_0)) 
                                | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__earlyWinner_1))) 
                               & ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__earlyWinner_0) 
                                      | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__earlyWinner_1))) 
                                  | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__earlyWinner_2)))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:92438: Assertion failed in %NysyxSoCFull.fpga.xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 92438, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid)) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid))) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__earlyWinner_0) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__earlyWinner_1)) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__earlyWinner_2))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:107 assert (!earlyValids.reduce(_||_) || earlyWinner.reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                                    | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid)) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid))) 
                               | (((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__earlyWinner_0) 
                                   | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__earlyWinner_1)) 
                                  | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__xbar__DOT__earlyWinner_2))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:92462: Assertion failed in %NysyxSoCFull.fpga.xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 92462, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                                      | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid)))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                                     | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid)))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at Arbiter.scala:108 assert (!validQuals .reduce(_||_) || validQuals .reduce(_||_))\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                                   | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                                      | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid)))) 
                               | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__monitor_io_in_d_valid) 
                                  | ((IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__monitor_io_in_d_valid) 
                                     | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__monitor_io_in_d_valid)))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:92486: Assertion failed in %NysyxSoCFull.fpga.xbar\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 92486, "");
    }
    vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1;
    vlSelf->__Vdly__ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__count 
        = vlSelf->ysyxSoCFull__DOT__fpga__DOT__widget_2__DOT__count;
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:43565: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 43565, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_253) 
                            & (0U == (0x80000000U & 
                                      (0x80000000U 
                                       ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_253) 
                            & (0U == (0x80000000U & 
                                      (0x80000000U 
                                       ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:43589: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 43589, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:43613: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 43613, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:43637: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 43637, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:43661: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 43661, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:43685: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 43685, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:43709: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 43709, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:43733: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 43733, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:43757: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 43757, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_253) 
                            & (0U == (0x80000000U & 
                                      (0x80000000U 
                                       ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_253) 
                            & (0U == (0x80000000U & 
                                      (0x80000000U 
                                       ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:43781: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 43781, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:43805: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 43805, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:43829: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 43829, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:43853: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 43853, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:43877: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 43877, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:43901: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 43901, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:43925: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 43925, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:43949: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 43949, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:43973: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 43973, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                            & (0U == (0x80000000U & 
                                      (0x80000000U 
                                       ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                            & (0U == (0x80000000U & 
                                      (0x80000000U 
                                       ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:43997: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 43997, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44021: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44021, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44045: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44045, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44069: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44069, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44093: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44093, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44117: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44117, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                               & (0U == (0x80000000U 
                                         & (0x80000000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                               & (0U == (0x80000000U 
                                         & (0x80000000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44141: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44141, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44165: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44165, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44189: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44189, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44213: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44213, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44237: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44237, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                               & (0U == (0x80000000U 
                                         & (0x80000000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                               & (0U == (0x80000000U 
                                         & (0x80000000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44261: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44261, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44285: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44285, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44309: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44309, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44333: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44333, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44357: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44357, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44381: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44381, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44405: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44405, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44429: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44429, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44453: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44453, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44477: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44477, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44501: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44501, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44525: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44525, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44549: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44549, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44573: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44573, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44597: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44597, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (IData)(vlSelf->reset))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44621: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44621, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44645: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44645, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44669: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44669, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44693: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44693, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44717: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44717, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:44741: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 44741, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel opcode changed within multibeat operation (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:45221: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 45221, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel param changed within multibeat operation (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:45245: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 45245, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel size changed within multibeat operation (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:45269: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 45269, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel source changed within multibeat operation (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid)) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__source)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:45293: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 45293, "");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid)) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__address 
                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel address changed with multibeat operation (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__a_first_counter)) 
                      & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor_io_in_a_valid)) 
                     & (~ ((vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__address 
                            == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:45317: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 45317, "");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h34d61e36__0, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source));
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___T_1219) 
                     & (~ ((~ __Vtemp_h34d61e36__0[0U]) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel re-used a source ID (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    VL_SHIFTR_WWI(128,128,7, __Vtemp_h34d61e36__1, vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source));
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___T_1219) 
                     & (~ ((~ __Vtemp_h34d61e36__1[0U]) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:45437: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 45437, "");
    }
    __Vtemp_hd2b6c582__0[0U] = 1U;
    __Vtemp_hd2b6c582__0[1U] = 0U;
    __Vtemp_hd2b6c582__0[2U] = 0U;
    __Vtemp_hd2b6c582__0[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h2f112992__0, __Vtemp_hd2b6c582__0, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source));
    __Vtemp_hd2b6c582__1[0U] = 1U;
    __Vtemp_hd2b6c582__1[1U] = 0U;
    __Vtemp_hd2b6c582__1[2U] = 0U;
    __Vtemp_hd2b6c582__1[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_hf3df8455__0, __Vtemp_hd2b6c582__1, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source));
    if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___T_1216) 
                                  & ((0U != (((__Vtemp_h2f112992__0[0U] 
                                               | __Vtemp_h2f112992__0[1U]) 
                                              | __Vtemp_h2f112992__0[2U]) 
                                             | __Vtemp_h2f112992__0[3U])) 
                                     & (0U == (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___T_1216)
                                                   ? 
                                                  __Vtemp_hf3df8455__0[0U]
                                                   : 0U) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___T_1216)
                                                     ? 
                                                    __Vtemp_hf3df8455__0[1U]
                                                     : 0U)) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___T_1216)
                                                    ? 
                                                   __Vtemp_hf3df8455__0[2U]
                                                    : 0U)) 
                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___T_1216)
                                                   ? 
                                                  __Vtemp_hf3df8455__0[3U]
                                                   : 0U)))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' and 'D' concurrent, despite minlatency 1 (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    __Vtemp_hd2b6c582__2[0U] = 1U;
    __Vtemp_hd2b6c582__2[1U] = 0U;
    __Vtemp_hd2b6c582__2[2U] = 0U;
    __Vtemp_hd2b6c582__2[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9c9709b8__0, __Vtemp_hd2b6c582__2, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source));
    __Vtemp_hd2b6c582__3[0U] = 1U;
    __Vtemp_hd2b6c582__3[1U] = 0U;
    __Vtemp_hd2b6c582__3[2U] = 0U;
    __Vtemp_hd2b6c582__3[3U] = 0U;
    VL_SHIFTL_WWI(128,128,7, __Vtemp_h9d20285d__0, __Vtemp_hd2b6c582__3, (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_source));
    if (VL_UNLIKELY((1U & (~ ((~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___T_1216) 
                                  & ((0U != (((__Vtemp_h9c9709b8__0[0U] 
                                               | __Vtemp_h9c9709b8__0[1U]) 
                                              | __Vtemp_h9c9709b8__0[2U]) 
                                             | __Vtemp_h9c9709b8__0[3U])) 
                                     & (0U == (((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___T_1216)
                                                   ? 
                                                  __Vtemp_h9d20285d__0[0U]
                                                   : 0U) 
                                                 | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___T_1216)
                                                     ? 
                                                    __Vtemp_h9d20285d__0[1U]
                                                     : 0U)) 
                                                | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___T_1216)
                                                    ? 
                                                   __Vtemp_h9d20285d__0[2U]
                                                    : 0U)) 
                                               | ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT___T_1216)
                                                   ? 
                                                  __Vtemp_h9d20285d__0[3U]
                                                   : 0U)))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:45603: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 45603, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != ((
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight[0U] 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight[1U]) 
                                                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight[2U]) 
                                                  | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight[3U])))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__watchdog 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != ((
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight[0U] 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight[1U]) 
                                                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight[2U]) 
                                                  | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight[3U])))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__watchdog 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:45627: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 45627, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != ((
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[0U] 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[1U]) 
                                                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[2U]) 
                                                  | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[3U])))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__watchdog_1 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: TileLink timeout expired (connected at ChipLinkBridge.scala:79:80)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)((0U != ((
                                                   (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[0U] 
                                                    | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[1U]) 
                                                   | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[2U]) 
                                                  | vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__inflight_1[3U])))) 
                               | ((0U == vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus) 
                                  | (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__watchdog_1 
                                     < vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__monitor__DOT__plusarg_reader_1__DOT__myplus))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:45699: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 45699, "");
    }
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__fq__DOT__ram__DOT__ram_ext__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqe__DOT__io_deq_q__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqd__DOT__io_deq_q__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqc__DOT__io_deq_q__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqb__DOT__io_deq_q__DOT__ram__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__chiplink__DOT__rx__DOT__hqa__DOT__io_deq_q__DOT__ram__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__inc)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__inc)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47051: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47051, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__inc_1)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_2))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__inc_1)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_2))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47097: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47097, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__inc_2)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_3))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__inc_2)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_3))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47143: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47143, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__inc_3)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_4))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__inc_3)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_4))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47189: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47189, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__inc_4)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_5))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__inc_4)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_5))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47235: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47235, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__inc_5)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_6))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__inc_5)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_6))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47281: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47281, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__inc_6)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_7))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__inc_6)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_7))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47327: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47327, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_8))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_8))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47373: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47373, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_9))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_9))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47419: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47419, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_10))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_10))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47465: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47465, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_11))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_11))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47511: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47511, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_12))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_12))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47557: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47557, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_13))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_13))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47603: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47603, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_14))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_14))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47649: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47649, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_15))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_15))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47695: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47695, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_16))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_16))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47741: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47741, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x10U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_17))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x10U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_17))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47787: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47787, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x11U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_18))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x11U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_18))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47833: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47833, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x12U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_19))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x12U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_19))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47879: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47879, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x13U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_20))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x13U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_20))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47925: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47925, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x14U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_21))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x14U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_21))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47971: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47971, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x15U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_22))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x15U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_22))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:48017: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 48017, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x16U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_23))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x16U) & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__tl2axi4__DOT__count_23))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:48063: Assertion failed in %NysyxSoCFull.asic.chipMaster.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 48063, "");
    }
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__ram_echo_real_last__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT___T_14) 
                               | ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__maybe_full)
                                   : ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__maybe_full)
                                       : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__maybe_full)
                                           : ((0xcU 
                                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__maybe_full)
                                               : ((0xbU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__maybe_full)
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__maybe_full)
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__maybe_full)
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__maybe_full)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__maybe_full)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                                        ? 
                                                       (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__empty))
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                                         ? 
                                                        (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__empty))
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                                          ? 
                                                         (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__empty))
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                                           ? 
                                                          (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__empty))
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                                            ? 
                                                           (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__empty))
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                                             ? 
                                                            (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__empty))
                                                             : 
                                                            (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT__empty)))))))))))))))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at UserYanker.scala:63 assert (!out.r.valid || r_valid) // Q must be ready faster than the response\n");
    }
    if (VL_UNLIKELY((1U & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4xbar__DOT___T_14) 
                               | ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_15__DOT__maybe_full)
                                   : ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_14__DOT__maybe_full)
                                       : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_13__DOT__maybe_full)
                                           : ((0xcU 
                                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_12__DOT__maybe_full)
                                               : ((0xbU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_11__DOT__maybe_full)
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_10__DOT__maybe_full)
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_9__DOT__maybe_full)
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_8__DOT__maybe_full)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_7__DOT__maybe_full)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                                        ? 
                                                       (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_6__DOT__empty))
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                                         ? 
                                                        (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_5__DOT__empty))
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                                          ? 
                                                         (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_4__DOT__empty))
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                                           ? 
                                                          (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_3__DOT__empty))
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                                            ? 
                                                           (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_2__DOT__empty))
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_rid))
                                                             ? 
                                                            (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_1__DOT__empty))
                                                             : 
                                                            (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility__DOT__empty)))))))))))))))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:42953: Assertion failed in %NysyxSoCFull.fpga.axi4yank\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 42953, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bvalid)) 
                               | ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__maybe_full)
                                   : ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__maybe_full)
                                       : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__maybe_full)
                                           : ((0xcU 
                                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_28__DOT__maybe_full)
                                               : ((0xbU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__maybe_full)
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__maybe_full)
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__maybe_full)
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__maybe_full)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__maybe_full)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                        ? 
                                                       (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__empty))
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                         ? 
                                                        (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__empty))
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                          ? 
                                                         (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__empty))
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                           ? 
                                                          (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__empty))
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                            ? 
                                                           (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__empty))
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                             ? 
                                                            (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__empty))
                                                             : 
                                                            (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__empty)))))))))))))))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at UserYanker.scala:84 assert (!out.b.valid || b_valid) // Q must be ready faster than the response\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bvalid)) 
                               | ((0xfU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_31__DOT__maybe_full)
                                   : ((0xeU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_30__DOT__maybe_full)
                                       : ((0xdU == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                           ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_29__DOT__maybe_full)
                                           : ((0xcU 
                                               == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                               ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_28__DOT__maybe_full)
                                               : ((0xbU 
                                                   == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                   ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_27__DOT__maybe_full)
                                                   : 
                                                  ((0xaU 
                                                    == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                    ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_26__DOT__maybe_full)
                                                    : 
                                                   ((9U 
                                                     == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                     ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_25__DOT__maybe_full)
                                                     : 
                                                    ((8U 
                                                      == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                      ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_24__DOT__maybe_full)
                                                      : 
                                                     ((7U 
                                                       == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                       ? (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_23__DOT__maybe_full)
                                                       : 
                                                      ((6U 
                                                        == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                        ? 
                                                       (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_22__DOT__empty))
                                                        : 
                                                       ((5U 
                                                         == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                         ? 
                                                        (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_21__DOT__empty))
                                                         : 
                                                        ((4U 
                                                          == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                          ? 
                                                         (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_20__DOT__empty))
                                                          : 
                                                         ((3U 
                                                           == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                           ? 
                                                          (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_19__DOT__empty))
                                                           : 
                                                          ((2U 
                                                            == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                            ? 
                                                           (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_18__DOT__empty))
                                                            : 
                                                           ((1U 
                                                             == (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank_auto_in_bid))
                                                             ? 
                                                            (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_17__DOT__empty))
                                                             : 
                                                            (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__axi4yank__DOT__QueueCompatibility_16__DOT__empty)))))))))))))))))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:42977: Assertion failed in %NysyxSoCFull.fpga.axi4yank\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 42977, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:109596: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 109596, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:109619: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 109619, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_2))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_2))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:109642: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 109642, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_1)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_2))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_1)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_2))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:109665: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 109665, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_3))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_3))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:109688: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 109688, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_2)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_3))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_2)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_3))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:109711: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 109711, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_4))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_4))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:109734: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 109734, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_3)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_4))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_3)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_4))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:109757: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 109757, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_5))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_5))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:109780: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 109780, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_4)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_5))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_4)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_5))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:109803: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 109803, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_6))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_6))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:109826: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 109826, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_5)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_6))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_5)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_6))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:109849: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 109849, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_7))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_7))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:109872: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 109872, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_6)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_7))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__inc_6)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_7))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:109895: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 109895, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_8)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_8)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:109918: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 109918, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_8))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_8))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:109941: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 109941, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_9)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_9)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:109964: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 109964, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_9))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_9))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:109987: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 109987, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_10)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_10)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:110010: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 110010, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_10))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_10))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:110033: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 110033, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_11)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_11)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:110056: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 110056, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_11))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_11))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:110079: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 110079, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_12)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_12)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:110102: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 110102, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_12))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_12))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:110125: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 110125, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_13)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_13)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:110148: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 110148, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_13))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_13))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:110171: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 110171, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_14)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_14)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:110194: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 110194, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_14))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_14))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:110217: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 110217, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_15)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_15)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:110240: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 110240, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_15))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_15))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:110263: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 110263, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_16)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_16)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:110286: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 110286, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_16))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_16))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:110309: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 110309, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 0x10U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_17)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 0x10U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_17)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:110332: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 110332, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x10U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_17))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x10U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_17))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:110355: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 110355, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 0x11U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_18)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 0x11U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_18)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:110378: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 110378, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x11U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_18))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x11U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_18))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:110401: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 110401, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 0x12U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_19)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 0x12U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_19)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:110424: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 110424, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x12U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_19))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x12U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_19))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:110447: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 110447, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 0x13U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_20)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 0x13U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_20)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:110470: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 110470, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x13U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_20))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x13U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_20))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:110493: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 110493, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 0x14U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_21)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 0x14U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_21)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:110516: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 110516, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x14U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_21))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x14U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_21))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:110539: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 110539, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 0x15U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_22)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 0x15U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_22)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:110562: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 110562, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x15U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_22))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x15U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_22))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:110585: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 110585, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 0x16U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_23)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__d_sel_shiftAmount)) 
                                    >> 0x16U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_23)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:110608: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 110608, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x16U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_23))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x16U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4_1__DOT__count_23))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:110631: Assertion failed in %NysyxSoCFull.fpga.tl2axi4_1\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 110631, "");
    }
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_7__DOT__data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_6__DOT__data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_5__DOT__data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_4__DOT__data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_3__DOT__data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_2__DOT__data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_1__DOT__data__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__fpga__DOT__chiplink__DOT__sourceA__DOT__cams_0__DOT__data__v0 = 0U;
    if (VL_UNLIKELY((1U & (~ (((~ (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47028: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47028, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_1))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47051: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47051, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_2))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 1U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_2))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47074: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47074, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_1)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_2))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_1)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_2))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47097: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47097, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_3))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 2U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_3))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47120: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47120, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_2)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_3))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_2)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_3))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47143: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47143, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_4))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 3U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_4))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47166: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47166, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_3)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_4))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_3)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_4))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47189: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47189, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_5))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 4U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_5))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47212: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47212, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_4)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_5))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_4)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_5))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47235: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47235, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_6))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 5U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_6))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47258: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47258, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_5)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_6))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_5)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_6))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47281: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47281, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_7))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 6U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (0U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_7))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47304: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47304, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_6)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_7))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__inc_6)) 
                               | (0x10U != (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_7))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47327: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47327, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_8)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_8)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47350: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47350, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_8))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 7U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_8))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47373: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47373, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_9)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_9)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47396: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47396, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_9))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 8U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_9))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47419: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47419, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_10)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_10)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47442: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47442, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_10))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 9U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_10))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47465: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47465, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_11)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_11)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47488: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47488, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_11))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xaU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_11))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47511: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47511, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_12)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_12)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47534: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47534, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_12))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xbU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_12))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47557: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47557, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_13)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_13)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47580: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47580, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_13))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xcU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_13))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47603: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47603, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_14)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_14)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47626: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47626, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_14))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xdU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_14))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47649: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47649, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_15)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_15)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47672: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47672, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_15))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xeU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_15))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47695: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47695, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_16)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_16)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47718: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47718, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_16))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0xfU) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_16))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47741: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47741, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0x10U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_17)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0x10U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_17)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47764: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47764, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x10U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_17))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x10U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_17))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47787: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47787, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0x11U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_18)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0x11U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_18)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47810: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47810, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x11U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_18))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x11U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_18))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47833: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47833, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0x12U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_19)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0x12U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_19)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47856: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47856, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x12U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_19))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x12U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_19))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47879: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47879, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0x13U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_20)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0x13U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_20)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47902: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47902, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x13U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_20))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x13U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_20))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47925: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47925, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0x14U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_21)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0x14U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_21)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47948: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47948, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x14U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_21))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x14U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_21))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47971: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47971, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0x15U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_22)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0x15U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_22)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:47994: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 47994, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x15U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_22))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x15U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_22))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:48017: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 48017, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0x16U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_23)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:262 assert (!dec || count =/= UInt(0))        // underflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__d_sel_shiftAmount)) 
                                    >> 0x16U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT____VdfgTmp_hc0989b25__0))) 
                               | (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_23)) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:48040: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 48040, "");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x16U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_23))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed\n    at ToAXI4.scala:263 assert (!inc || count =/= UInt(maxCount)) // overflow\n");
    }
    if (VL_UNLIKELY((1U & (~ (((~ ((((IData)(1U) << (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_id_MPORT_data)) 
                                    >> 0x16U) & (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__queue_arw_deq__DOT___do_enq_T))) 
                               | (~ (IData)(vlSelf->ysyxSoCFull__DOT__fpga__DOT__tl2axi4__DOT__count_23))) 
                              | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:48063: Assertion failed in %NysyxSoCFull.fpga.tl2axi4\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 48063, "");
    }
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_opcode__v0 = 0U;
    vlSelf->__Vdly__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__count 
        = vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__widget__DOT__count;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__c__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_size__v0 = 0U;
    vlSelf->__Vdly__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_rdeq__DOT__value;
    vlSelf->__Vdly__ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1 
        = vlSelf->ysyxSoCFull__DOT__mem__DOT__axi4buf__DOT__bundleIn_0_bdeq__DOT__value_1;
    vlSelf->__Vdlyvset__ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__err__DOT__a__DOT__ram_opcode__v0 = 0U;
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:660: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 660, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_253) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_282)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquireBlock from a client which does not support Probe (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_253) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_282)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:684: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 684, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid source ID (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:708: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 708, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock smaller than a beat (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:732: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 732, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock address not aligned to size (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:756: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 756, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock carries invalid grow param (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:780: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 780, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock contains invalid mask (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:804: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 804, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquireBlock is corrupt (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:828: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 828, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:852: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 852, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_253) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_282)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries AcquirePerm from a client which does not support Probe (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_253) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_282)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:876: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 876, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid source ID (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:900: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 900, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm smaller than a beat (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:924: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 924, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm address not aligned to size (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:948: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 948, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm carries invalid grow param (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:972: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 972, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm requests NtoB (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:996: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 996, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm contains invalid mask (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0xffU & (~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask)))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1020: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1020, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel AcquirePerm is corrupt (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (7U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1044: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1044, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which master claims it can't emit (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1068: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1068, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_282)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Get type which slave claims it can't support (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                            & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_282)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1092: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1092, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid source ID (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1116: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1116, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get address not aligned to size (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1140: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1140, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get carries invalid param (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1164: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1164, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get contains invalid mask (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1188: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1188, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Get is corrupt (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1212: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1212, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutFull type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1236: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1236, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid source ID (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1260: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1260, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull address not aligned to size (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1284: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1284, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull carries invalid param (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1308: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1308, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutFull contains invalid mask (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1332: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1332, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries PutPartial type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                               & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT___T_282))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1356: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1356, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid source ID (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1380: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1380, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial address not aligned to size (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1404: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1404, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial carries invalid param (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1428: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1428, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel PutPartial contains invalid mask (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (1U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask)) 
                                   & (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1452: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1452, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Arithmetic type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1476: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1476, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid source ID (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1500: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1500, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic address not aligned to size (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1524: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1524, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic carries invalid opcode param (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((4U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1548: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1548, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Arithmetic contains invalid mask (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (2U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1572: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1572, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Logical type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1596: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1596, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid source ID (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1620: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1620, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical address not aligned to size (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1644: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1644, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical carries invalid opcode param (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((3U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1668: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1668, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Logical contains invalid mask (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (3U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1692: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1692, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel carries Hint type which is unexpected using diplomatic parameters (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                            & ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)) 
                               & (0U == (0xfffff000U 
                                         & (0x1000U 
                                            ^ vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1716: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1716, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid source ID (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__source_ok) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1740: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1740, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint address not aligned to size (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((0U == (0x3fU & (vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_address 
                                            & (~ ((IData)(0x3fU) 
                                                  << (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_size)))))) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1764: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1764, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint carries invalid opcode param (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((1U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1788: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1788, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint contains invalid mask (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ (((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_mask) 
                            == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor__DOT__mask)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1812: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1812, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'A' channel Hint is corrupt (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:42 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_valid) 
                      & (5U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_a_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1836: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1836, "");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel has invalid opcode (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY(((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_valid) 
                     & (~ ((6U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1860: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1860, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck carries invalid source ID (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1884: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1884, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck smaller than a beat (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1908: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1908, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseeAck carries invalid param (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((0U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1932: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1932, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is corrupt (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1956: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1956, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel ReleaseAck is denied (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (6U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_denied)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:1980: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 1980, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
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
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid source ID (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
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
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:2004: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 2004, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant smaller than a beat (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((3U <= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_size)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:2028: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 2028, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries invalid cap param (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U >= (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:2052: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 2052, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant carries toN param (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((2U != (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_param)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:2076: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 2076, "");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_FWRITEF(0x80000002U,"Assertion failed: 'D' channel Grant is corrupt (connected at ChipLinkBridge.scala:153:8)\n    at Monitor.scala:49 assert(cond, message)\n");
    }
    if (VL_UNLIKELY((((IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_valid) 
                      & (4U == (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_opcode))) 
                     & (~ ((~ (IData)(vlSelf->ysyxSoCFull__DOT__asic__DOT__chipMaster__DOT__xbar__DOT__monitor_io_in_d_bits_corrupt)) 
                           | (IData)(vlSelf->reset)))))) {
        VL_WRITEF("[%0t] %%Fatal: ysyxSoCFull.v:2100: Assertion failed in %NysyxSoCFull.asic.chipMaster.xbar.monitor\n",
                  64,VL_TIME_UNITED_Q(1000),-9,vlSymsp->name());
        VL_STOP_MT("/home/yangli/ysyx-workbench/ysyxSoC/ysyx/soc/ysyxSoCFull.v", 2100, "");
    }
}
