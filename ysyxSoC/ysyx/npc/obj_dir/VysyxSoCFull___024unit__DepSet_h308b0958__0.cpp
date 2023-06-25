// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VysyxSoCFull.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull___024unit.h"

extern "C" void ps2_read(char* dat);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_ps2_read_TOP____024unit(CData/*7:0*/ &dat) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_ps2_read_TOP____024unit\n"); );
    // Body
    char dat__Vcvt;
    ps2_read(&dat__Vcvt);
    dat = (0xffU & dat__Vcvt);
}

extern "C" void flash_read(long long addr, long long* data);

VL_INLINE_OPT void VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit(QData/*63:0*/ addr, QData/*63:0*/ &data) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        VysyxSoCFull___024unit____Vdpiimwrap_flash_read_TOP____024unit\n"); );
    // Body
    long long addr__Vcvt;
    for (size_t addr__Vidx = 0; addr__Vidx < 1; ++addr__Vidx) addr__Vcvt = addr;
    long long data__Vcvt;
    flash_read(addr__Vcvt, &data__Vcvt);
    data = data__Vcvt;
}
