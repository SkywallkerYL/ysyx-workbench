BUILD_DIR = ./build

export PATH := $(PATH):$(abspath ./utils)


TOPNAME?=ysyxSoCFull
TOPNAMETEST?=ysyxSoCFull
#FSM_m #keyboard_top #top
NXDC_FILES=constr/top.nxdc
INC_PATH?=

#include ../../include

#add ccache speed up
VERILATOR = verilator 
# Generate C++ in executable form
#for nvboard
VERILATOR_FLAGS += -MMD --build -cc
VERILATOR_FLAGS += -Os --x-assign fast
VERILATOR_FLAGS += --x-initial fast --noassert
VERILATOR_FLAGS += -Wno-fatal
#for testbench
VERILATOR_CFLAGS += -cc --exe --noassert
#-Os -x-assign 0 --trace --coverage
VERILATOR_CFLAGS +=	--x-assign fast --x-initial fast 
VERILATOR_CFLAGS +=  --trace 
#-fst
#--trace  --coverage 
#VERILATOR_CFLAGS +=  --debug --gdbbt 
VERILATOR_CFLAGS +=  --build 
VERILATOR_CFLAGS += -Wno-fatal -O3 
VERILATOR_CFLAGS += -DVL_DEBUG
VERILATOR_CFLAGS += -j 8
VERILATOR_CFLAGS += --timescale "1ns/1ns"
#VERILATOR_CFLAGS += -I /home/yangli/ysyx-workbench/ysyxSoC/ysyx/perip/spiFlash
VERILATOR_CFLAGS += --top-module $(TOPNAMETEST)
#VERILATOR_CFLAGS += --x-initial fast --noassert
#VERILATOR_CFLAGS += --timing



CSRCT = $(shell find $(abspath ./csrc) -name "*.c" -or -name "main.cpp" -or -name "*.cc" ) 
#addertop.cpp alu_tb.cpp main.cpp

#BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAMETEST)

#HSRC = $($(NVBOARD_HOME)/include/    -name "*.h")
 
default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

#XDC
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@
	
VSRC = $(shell find $(abspath ../soc) -name "*.v")
CSRC = $(shell find $(abspath ./csrc) -name "*.c" -or -name "main.cpp" -or -name "*.cc" )
#CSRC += $(SRC_AUTO_BIND)
#VSRC += $(shell find $(abspath ./generated) -name "*.v")
#VSRC += $(shell find $(abspath ../templete/Mux) -name "*.v")
#VSRC += $(shell find $(abspath ../templete/bcd7seg) -name "*.v")
VSRC += $(shell find $(abspath ../perip/kdb) 		-name "*.v")
VSRC += $(shell find $(abspath ../perip/ps2) 		-name "*.v")
VSRC += $(shell find $(abspath ../perip/screen) 		-name "*.v")
VSRC += $(shell find $(abspath ../perip/sdram/rtl) 		-name "*.v")
VSRC += $(shell find $(abspath ../perip/spi/rtl) 		-name "*.v")
VSRC += $(shell find $(abspath ../perip/spiFlash) 	-name "*.v")
VSRC += $(shell find $(abspath ../perip/uart16550/rtl) 	-name "*.v")
VSRC += $(shell find $(abspath ../perip/vga) 		-name "*.v")
CSRC += $(shell find $(abspath ../perip/kdb) 		-name "*.cpp")
CSRC += $(shell find $(abspath ../perip/ps2) 		-name "*.c")
CSRC += $(shell find $(abspath ../perip/screen) 		-name "*.cpp")
CSRC += $(shell find $(abspath ../perip/sdram) 		-name "*.c")
CSRC += $(shell find $(abspath ../perip/spi) 		-name "*.c")
CSRC += $(shell find $(abspath ../perip/spiFlash) 	-name "*.cpp")
CSRC += $(shell find $(abspath ../perip/uart16550) 	-name "*.c")
CSRC += $(shell find $(abspath ../perip/vga) 		-name "*.c")

SIM_PATH          := $(shell pwd)
ROOT_PATH         := $(SIM_PATH)/..
BUILD_DIR         := $(SIM_PATH)/build
SOC_CSRC_HOME     += $(SIM_PATH)/csrc
SOC_CSRC_LIB_HOME += $(ROOT_PATH)/perip/spiFlash
SOC_CSRC_LIB_HOME += $(ROOT_PATH)/perip/kdb
SOC_CSRC_LIB_HOME += $(ROOT_PATH)/perip/screen
SOC_CXXFILES      += $(shell find $(SOC_CSRC_HOME) -name "*.cpp")
SOC_CXXFILES      += $(shell find $(SOC_CSRC_LIB_HOME) -name "*.cpp")

SOC_VSRC_HOME     += $(ROOT_PATH)/soc
SOC_COMPILE_HOME  := $(BUILD_DIR)/emu-compile
SOC_VSRC_TOP      := ysyxSoCFull
SOC_VSRC_LIB_HOME += $(ROOT_PATH)/perip/
SOC_VSRC_LIB_HOME += $(ROOT_PATH)/ram/
SOC_VXXFILES      += $(shell find $(SOC_VSRC_HOME) -name "*.v")
SOC_VXXFILES      += $(shell find $(SOC_VSRC_LIB_HOME) -name "*.v")

SOC_VSRC_INCLPATH += -I$(SOC_VSRC_HOME)
SOC_VSRC_INCLPATH += -I$(ROOT_PATH)/perip/uart16550/rtl
SOC_VSRC_INCLPATH += -I$(ROOT_PATH)/perip/spi/rtl
SOC_VSRC_INCLPATH += -I$(ROOT_PATH)/perip/sdram/rtl
SOC_VSRC_INCLPATH += -I$(ROOT_PATH)/perip/sdram/tb
SOC_CSRC_INCLPATH += -I$(SOC_CSRC_HOME)
SOC_CSRC_INCLPATH += -I$(ROOT_PATH)/perip/spiFlash
SOC_VSRC_INCLPATH += -I$(ROOT_PATH)/ram
SOC_VSRC_INCLPATH += -I$(ROOT_PATH)/perip/spiFlash
#CSRC += $(foreach val, $(SOC_CSRC_LIB_HOME), $(shell find $(val) -name "*.cpp"))
SOC_CSRC_INCLPATH += $(foreach val, $(SOC_CSRC_LIB_HOME), -I$(val))
SOC_CXXFLAGS += -std=c++11 -static -Wall $(SOC_CSRC_INCLPATH) -DDUMP_WAVE_$(WAVE_FORMAT)
SOC_LDFLAGS  += -lSDL2 -lSDL2_image -ldl
SOC_FLAGS    += --cc --exe --top-module $(SOC_VSRC_TOP)
SOC_FLAGS    += --x-assign unique -O3 -CFLAGS "$(SOC_CXXFLAGS)" -LDFLAGS "$(SOC_LDFLAGS)"
SOC_FLAGS    += $(TRACE_FORMAT) --assert --stats-vars --output-split 30000 --output-split-cfuncs 30000 
SOC_FLAGS    += --timescale "1ns/1ns" -Wno-fatal
SOC_FLAGS    += -o $(BUILD_DIR)/emu
SOC_FLAGS    += -Mdir $(BUILD_DIR)/emu-compile
SOC_FLAGS    += $(SOC_VSRC_INCLPATH) $(SOC_CXXFILES) $(SOC_VXXFILES)



#rules for nvboard
#include $(NVBOARD_HOME)/scripts/nvboard.mk
#rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
#INCFLAGS += $(addprefix -I, /home/yangli/ysyx-workbench/ysyxSoC/ysyx/perip/spiFlash) 
CFLAGS += -w
CFLAGS += $(INCFLAGS) $(SOC_CSRC_INCLPATH) -DTOP_NAME="\"V$(TOPNAME)\""
VCFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""
#CFLAGS += -I/usr/lib/llvm-14/include -std=c++14   
#CFLAGS += -fno-exceptions -D_GNU_SOURCE -D__STDC_CONSTANT_MACROS 
#CFLAGS += -D__STDC_LIMIT_MACROS
#CFLAGS += -fPIE -g

CFLAGS += $(shell llvm-config --cxxflags) -fPIE -g 
LDFLAGS += -lSDL2 -lSDL2_image 
LDFLAGS += $(shell llvm-config --libs)
LDFLAGS += -lreadline
CFLAGS_BUILD ?=
#CFLAGS_BUILD += $(if $(CONFIG_CC_DEBUG),-Og -ggdb3		,)
#CFLAGS_BUILD += $(if $(CONFIG_CC_ASAN) ,-fsanitize=address,)
CFLAGS_BUILD += -Og -ggdb3			
CFLAGS_BUILD += -fsanitize=address	
#CFLAGS += $(CFLAGS_BUILD)
#LDFLAGS+= $(CFLAGS_BUILD)
IMG?=

	
$(BIN) : $(VSRC) $(CSRCT) 
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS))\
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

all: default




NPCMODE ?=
BATCHMODE ?= 
#DIFFTESTNEMUFILE=/home/yangli/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so
#DIFFTESTNEMUFILE=$(NEMU_HOME)/build/riscv64-nemu-interpreter-so
#NPCMODE+=$(DIFFTESTNEMUFILE)
runnvboard: $(BIN)
	#for nvboard
	@$^ $(BATCHMODE) $(NPCMODE) $(IMG)
run: 
	#for testbench        
	@echo "---------------VERILATE------------------"
#发现了一个问题hhh -cflags只有在编译cpp的时候才需要
#不要向原来一样把vsrc和csrc放在一起编译，不然会有redefine的问题，而且编译极其缓慢
#还是不幸
#$(VERILATOR) $(VERILATOR_CFLAGS) $(VSRC) 
#$(VERILATOR) $(VERILATOR_CFLAGS) $(CSRCT) $(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS))
	$(VERILATOR) $(VERILATOR_CFLAGS) $(CSRC) $(VSRC) $(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) $(SOC_CSRC_INCLPATH) $(SOC_VSRC_INCLPATH)
#$(VERILATOR) $(VERILATOR_CFLAGS) $(VSRC) $(addprefix -CFLAGS , $(VCFLAGS))
#$(VERILATOR) $(VERILATOR_CFLAGS) $(CSRCT) $(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS))
	

	@echo "-----------------BUILD-------------------"

	$(MAKE) -j -C obj_dir OPT_FAST="-Os -march=native" -f V$(TOPNAMETEST).mk V$(TOPNAMETEST) 
# $(MAKE) -j -C obj_dir -f ../Makefile_obj

	@echo "-------------------RUN-------------------"
	@echo $(IMG)
	@echo $(NPCMODE)
	./obj_dir/V$(TOPNAMETEST) $(BATCHMODE) $(NPCMODE) $(IMG)

#gtkwave wave.vcd
wave:
	gtkwave wave.vcd
catVerilog:
	cat $(VSRC) > ~/ysyx-workbench/ysyxSoC/ysyx/soc/ysyx_22050550.v
perfrun:
	perf record -e cpu-clock -g ./obj_dir/V$(TOPNAMETEST) $(BATCHMODE) $(NPCMODE) $(IMG)
report:
	perf report -n 
perfflame:
	perf script | ~/FlameGraph/stackcollapse-perf.pl | ~/FlameGraph/flamegraph.pl > perf.svg
	firefox perf.svg
perfdiff:
	perf diff perf.data perf.data.old
#perf script -i perf.data &> perf.unfold
#sudo ~/FlameGraph/stackcollapse-perf.pl perf.unfold &> perf.folded
#sudo ~/FlameGraph/flamegraph.pl perf.folded > perf.svg
#
show-config:
	$(VERILATOR) -V
clean:
	-rm -rf obj_dir logs *.log *.dmp *.vpd *.vcd $(BUILD_DIR)  perf.data perf.data.old perf.unfold perf.folded perf.svg
#git clean -fd
.PHONY: default all clean run
