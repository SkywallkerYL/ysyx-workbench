// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VysyxSoCFull__Syms.h"
#include "VysyxSoCFull.h"
#include "VysyxSoCFull___024root.h"
#include "VysyxSoCFull___024unit.h"

// FUNCTIONS
VysyxSoCFull__Syms::~VysyxSoCFull__Syms()
{
}

VysyxSoCFull__Syms::VysyxSoCFull__Syms(VerilatedContext* contextp, const char* namep, VysyxSoCFull* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP____024unit{this, Verilated::catName(namep, "$unit")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.__PVT____024unit = &TOP____024unit;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP____024unit.__Vconfigure(true);
    // Setup scopes
    __Vscope_ysyxSoCFull__asic__axi42apb.configure(this, name(), "ysyxSoCFull.asic.axi42apb", "axi42apb", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__axi4xbar.configure(this, name(), "ysyxSoCFull.asic.axi4xbar", "axi4xbar", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__atomics.configure(this, name(), "ysyxSoCFull.asic.chipMaster.atomics", "atomics", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__atomics__monitor.configure(this, name(), "ysyxSoCFull.asic.chipMaster.atomics.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__axi42tl.configure(this, name(), "ysyxSoCFull.asic.chipMaster.axi42tl", "axi42tl", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__axi4frag.configure(this, name(), "ysyxSoCFull.asic.chipMaster.axi4frag", "axi4frag", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__axi4yank.configure(this, name(), "ysyxSoCFull.asic.chipMaster.axi4yank", "axi4yank", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__mbypass__monitor.configure(this, name(), "ysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__mbypass__monitor_1.configure(this, name(), "ysyxSoCFull.asic.chipMaster.chiplink.mbypass.monitor_1", "monitor_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__monitor.configure(this, name(), "ysyxSoCFull.asic.chipMaster.chiplink.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__rx.configure(this, name(), "ysyxSoCFull.asic.chipMaster.chiplink.rx", "rx", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__sbypass__bar__monitor.configure(this, name(), "ysyxSoCFull.asic.chipMaster.chiplink.sbypass.bar.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__sbypass__error.configure(this, name(), "ysyxSoCFull.asic.chipMaster.chiplink.sbypass.error", "error", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__sbypass__error__monitor.configure(this, name(), "ysyxSoCFull.asic.chipMaster.chiplink.sbypass.error.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__chiplink__tx.configure(this, name(), "ysyxSoCFull.asic.chipMaster.chiplink.tx", "tx", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__err.configure(this, name(), "ysyxSoCFull.asic.chipMaster.err", "err", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__err__monitor.configure(this, name(), "ysyxSoCFull.asic.chipMaster.err.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__ferr.configure(this, name(), "ysyxSoCFull.asic.chipMaster.ferr", "ferr", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__ferr__monitor.configure(this, name(), "ysyxSoCFull.asic.chipMaster.ferr.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__fixer_1__monitor.configure(this, name(), "ysyxSoCFull.asic.chipMaster.fixer_1.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__fixer__monitor.configure(this, name(), "ysyxSoCFull.asic.chipMaster.fixer.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__hints__monitor.configure(this, name(), "ysyxSoCFull.asic.chipMaster.hints.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__tl2axi4.configure(this, name(), "ysyxSoCFull.asic.chipMaster.tl2axi4", "tl2axi4", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__tl2axi4__monitor.configure(this, name(), "ysyxSoCFull.asic.chipMaster.tl2axi4.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__widget_1__monitor.configure(this, name(), "ysyxSoCFull.asic.chipMaster.widget_1.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__widget_2__monitor.configure(this, name(), "ysyxSoCFull.asic.chipMaster.widget_2.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__widget__monitor.configure(this, name(), "ysyxSoCFull.asic.chipMaster.widget.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__xbar.configure(this, name(), "ysyxSoCFull.asic.chipMaster.xbar", "xbar", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__xbar_1.configure(this, name(), "ysyxSoCFull.asic.chipMaster.xbar_1", "xbar_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__xbar_1__monitor.configure(this, name(), "ysyxSoCFull.asic.chipMaster.xbar_1.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__chipMaster__xbar__monitor.configure(this, name(), "ysyxSoCFull.asic.chipMaster.xbar.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__asic__lspi__mspi.configure(this, name(), "ysyxSoCFull.asic.lspi.mspi", "mspi", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__atomics.configure(this, name(), "ysyxSoCFull.fpga.atomics", "atomics", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__atomics__monitor.configure(this, name(), "ysyxSoCFull.fpga.atomics.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__axi42tl.configure(this, name(), "ysyxSoCFull.fpga.axi42tl", "axi42tl", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__axi4deint.configure(this, name(), "ysyxSoCFull.fpga.axi4deint", "axi4deint", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__axi4frag.configure(this, name(), "ysyxSoCFull.fpga.axi4frag", "axi4frag", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__axi4yank.configure(this, name(), "ysyxSoCFull.fpga.axi4yank", "axi4yank", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__axi4yank_1.configure(this, name(), "ysyxSoCFull.fpga.axi4yank_1", "axi4yank_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__axi4yank_2.configure(this, name(), "ysyxSoCFull.fpga.axi4yank_2", "axi4yank_2", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__chiplink__mbypass__monitor.configure(this, name(), "ysyxSoCFull.fpga.chiplink.mbypass.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__chiplink__mbypass__monitor_1.configure(this, name(), "ysyxSoCFull.fpga.chiplink.mbypass.monitor_1", "monitor_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__chiplink__monitor.configure(this, name(), "ysyxSoCFull.fpga.chiplink.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__chiplink__rx.configure(this, name(), "ysyxSoCFull.fpga.chiplink.rx", "rx", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__chiplink__sbypass__bar__monitor.configure(this, name(), "ysyxSoCFull.fpga.chiplink.sbypass.bar.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__chiplink__sbypass__error.configure(this, name(), "ysyxSoCFull.fpga.chiplink.sbypass.error", "error", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__chiplink__sbypass__error__monitor.configure(this, name(), "ysyxSoCFull.fpga.chiplink.sbypass.error.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__chiplink__tx.configure(this, name(), "ysyxSoCFull.fpga.chiplink.tx", "tx", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__err.configure(this, name(), "ysyxSoCFull.fpga.err", "err", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__err__monitor.configure(this, name(), "ysyxSoCFull.fpga.err.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__ferr.configure(this, name(), "ysyxSoCFull.fpga.ferr", "ferr", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__ferr__monitor.configure(this, name(), "ysyxSoCFull.fpga.ferr.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__fixer_1__monitor.configure(this, name(), "ysyxSoCFull.fpga.fixer_1.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__fixer__monitor.configure(this, name(), "ysyxSoCFull.fpga.fixer.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__hints__monitor.configure(this, name(), "ysyxSoCFull.fpga.hints.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__tl2axi4.configure(this, name(), "ysyxSoCFull.fpga.tl2axi4", "tl2axi4", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__tl2axi4_1.configure(this, name(), "ysyxSoCFull.fpga.tl2axi4_1", "tl2axi4_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__tl2axi4_1__monitor.configure(this, name(), "ysyxSoCFull.fpga.tl2axi4_1.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__tl2axi4__monitor.configure(this, name(), "ysyxSoCFull.fpga.tl2axi4.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__widget_1__monitor.configure(this, name(), "ysyxSoCFull.fpga.widget_1.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__widget_2__monitor.configure(this, name(), "ysyxSoCFull.fpga.widget_2.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__widget__monitor.configure(this, name(), "ysyxSoCFull.fpga.widget.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__xbar.configure(this, name(), "ysyxSoCFull.fpga.xbar", "xbar", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__xbar_1.configure(this, name(), "ysyxSoCFull.fpga.xbar_1", "xbar_1", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__xbar_1__monitor.configure(this, name(), "ysyxSoCFull.fpga.xbar_1.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__fpga__xbar__monitor.configure(this, name(), "ysyxSoCFull.fpga.xbar.monitor", "monitor", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__mem__axi4frag.configure(this, name(), "ysyxSoCFull.mem.axi4frag", "axi4frag", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__mem__axi4xbar.configure(this, name(), "ysyxSoCFull.mem.axi4xbar", "axi4xbar", -9, VerilatedScope::SCOPE_OTHER);
    __Vscope_ysyxSoCFull__spiFlash.configure(this, name(), "ysyxSoCFull.spiFlash", "spiFlash", -9, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
    }
}
