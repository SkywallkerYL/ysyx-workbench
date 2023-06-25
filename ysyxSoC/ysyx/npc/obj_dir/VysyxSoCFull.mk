# Verilated -*- Makefile -*-
# DESCRIPTION: Verilator output: Makefile for building Verilated archive or executable
#
# Execute this makefile from the object directory:
#    make -f VysyxSoCFull.mk

default: VysyxSoCFull

### Constants...
# Perl executable (from $PERL)
PERL = perl
# Path to Verilator kit (from $VERILATOR_ROOT)
VERILATOR_ROOT = /usr/local/share/verilator
# SystemC include directory with systemc.h (from $SYSTEMC_INCLUDE)
SYSTEMC_INCLUDE ?= 
# SystemC library directory with libsystemc.a (from $SYSTEMC_LIBDIR)
SYSTEMC_LIBDIR ?= 

### Switches...
# C++ code coverage  0/1 (from --prof-c)
VM_PROFC = 0
# SystemC output mode?  0/1 (from --sc)
VM_SC = 0
# Legacy or SystemC output mode?  0/1 (from --sc)
VM_SP_OR_SC = $(VM_SC)
# Deprecated
VM_PCLI = 1
# Deprecated: SystemC architecture to find link library path (from $SYSTEMC_ARCH)
VM_SC_TARGET_ARCH = linux

### Vars...
# Design prefix (from --prefix)
VM_PREFIX = VysyxSoCFull
# Module prefix (from --prefix)
VM_MODPREFIX = VysyxSoCFull
# User CFLAGS (from -CFLAGS on Verilator command line)
VM_USER_CFLAGS = \
	-w \
	-I/home/yangli/ysyx-workbench/ysyxSoC/ysyx/npc/csrc \
	-I/home/yangli/ysyx-workbench/ysyxSoC/ysyx/npc/../perip/spiFlash \
	-I/home/yangli/ysyx-workbench/ysyxSoC/ysyx/npc/../perip/spiFlash \
	-I/home/yangli/ysyx-workbench/ysyxSoC/ysyx/npc/../perip/kdb \
	-I/home/yangli/ysyx-workbench/ysyxSoC/ysyx/npc/../perip/screen \
	-DTOP_NAME="VysyxSoCFull" \
	-I/usr/lib/llvm-14/include \
	-std=c++14 \
	-fno-exceptions \
	-D_GNU_SOURCE \
	-D__STDC_CONSTANT_MACROS \
	-D__STDC_FORMAT_MACROS \
	-D__STDC_LIMIT_MACROS \
	-fPIE \
	-g \

# User LDLIBS (from -LDFLAGS on Verilator command line)
VM_USER_LDLIBS = \
	-lSDL2 \
	-lSDL2_image \
	-lLLVM-14 \
	-lreadline \

# User .cpp files (from .cpp's on Verilator command line)
VM_USER_CLASSES = \
	disasm \
	main \
	kdb \
	screen \
	spiFlash \

# User .cpp directories (from .cpp's on Verilator command line)
VM_USER_DIR = \
	/home/yangli/ysyx-workbench/ysyxSoC/ysyx/npc/csrc \
	/home/yangli/ysyx-workbench/ysyxSoC/ysyx/perip/kdb \
	/home/yangli/ysyx-workbench/ysyxSoC/ysyx/perip/screen \
	/home/yangli/ysyx-workbench/ysyxSoC/ysyx/perip/spiFlash \


### Default rules...
# Include list of all generated classes
include VysyxSoCFull_classes.mk
# Include global rules
include $(VERILATOR_ROOT)/include/verilated.mk

### Executable rules... (from --exe)
VPATH += $(VM_USER_DIR)

disasm.o: /home/yangli/ysyx-workbench/ysyxSoC/ysyx/npc/csrc/disasm.cc
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
main.o: /home/yangli/ysyx-workbench/ysyxSoC/ysyx/npc/csrc/main.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
kdb.o: /home/yangli/ysyx-workbench/ysyxSoC/ysyx/perip/kdb/kdb.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
screen.o: /home/yangli/ysyx-workbench/ysyxSoC/ysyx/perip/screen/screen.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<
spiFlash.o: /home/yangli/ysyx-workbench/ysyxSoC/ysyx/perip/spiFlash/spiFlash.cpp
	$(OBJCACHE) $(CXX) $(CXXFLAGS) $(CPPFLAGS) $(OPT_FAST) -c -o $@ $<

### Link rules... (from --exe)
VysyxSoCFull: $(VK_USER_OBJS) $(VK_GLOBAL_OBJS) $(VM_PREFIX)__ALL.a $(VM_HIER_LIBS)
	$(LINK) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) $(LIBS) $(SC_LIBS) -o $@


# Verilated -*- Makefile -*-
