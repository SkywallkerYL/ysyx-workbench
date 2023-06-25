// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VYSYXSOCFULL__DPI_H_
#define VERILATED_VYSYXSOCFULL__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/yangli/ysyx-workbench/ysyxSoC/ysyx/perip/spiFlash/spiFlash.v:87:30
    extern void flash_read(long long addr, long long* data);
    // DPI import at /home/yangli/ysyx-workbench/ysyxSoC/ysyx/perip/kdb/kdb.v:94:30
    extern void ps2_read(char* dat);
    // DPI import at /home/yangli/ysyx-workbench/ysyxSoC/ysyx/perip/screen/screen.v:12:30
    extern void set_gpr_ptr(const svOpenArrayHandle a);

#ifdef __cplusplus
}
#endif

#endif  // guard
