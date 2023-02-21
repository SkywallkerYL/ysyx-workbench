BUILD_DIR = ./build

export PATH := $(PATH):$(abspath ./utils)

milltest:
	mill -i __.test

verilog:
	$(call git_commit, "generate verilog")
	mkdir -p $(BUILD_DIR)
	mill -i __.test.runMain npc.Elaborate -td $(BUILD_DIR)

help:
	mill -i __.test.runMain Elaborate --help

compile:
	mill -i __.compile

bsp:
	mill -i mill.bsp.BSP/install

reformat:
	mill -i __.reformat

checkformat:
	mill -i __.checkFormat


.PHONY: test verilog help compile bsp reformat checkformat clean

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by yourself."

include ../Makefile
# Generate Verilog code sbt
doit:
	sbt run
#Makefile for Verilator


TOPNAME?=Multi
TOPNAMETEST?=Multi
#FSM_m #keyboard_top #top
NXDC_FILES=constr/top.nxdc
INC_PATH?=

#include ../../include

#add ccache speed up
VERILATOR = verilator 
# Generate C++ in executable form
#for nvboard
VERILATOR_FLAGS += -MMD --build -cc
VERILATOR_FLAGS += -O3 --x-assign fast
VERILATOR_FLAGS += --x-initial fast --noassert
VERILATOR_FLAGS += -Wno-fatal
#for testbench
VERILATOR_CFLAGS += -cc --exe 
#-Os -x-assign 0
VERILATOR_CFLAGS +=	--x-assign fast --x-initial fast
VERILATOR_CFLAGS += --trace --coverage --build
VERILATOR_CFLAGS += -Wno-fatal -O3

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
	
VSRC = $(shell find $(abspath ./build) -name "*.v")
CSRC = $(shell find $(abspath ./csrc) -name "*.c" -or -name "main.cpp" -or -name "*.cc" )
CSRC += $(SRC_AUTO_BIND)
#VSRC += $(shell find $(abspath ./generated) -name "*.v")
#VSRC += $(shell find $(abspath ../templete/Mux) -name "*.v")
#VSRC += $(shell find $(abspath ../templete/bcd7seg) -name "*.v")

#rules for nvboard
include $(NVBOARD_HOME)/scripts/nvboard.mk
#rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""
CFLAGS += $(shell llvm-config --cxxflags) -fPIE 
LDFLAGS += -lSDL2 -lSDL2_image 
LDFLAGS += $(shell llvm-config --libs)
LDFLAGS += -lreadline

IMG?=

	
$(BIN) : $(VSRC) $(CSRCT) 
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS))\
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

all: default


runnvboard: $(BIN)
	#for nvboard
	@$^

NPCMODE=-d
BATCHMODE ?= 
DIFFTESTNEMUFILE=/home/yangli/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so
NPCMODE+=$(DIFFTESTNEMUFILE)
run: 
	#for testbench        
	@echo "---------------VERILATE------------------"
	$(VERILATOR) $(VERILATOR_CFLAGS) $(CSRCT) $(VSRC) $(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS))
	

	@echo "-----------------BUILD-------------------"

	$(MAKE) -j -C obj_dir -f V$(TOPNAMETEST).mk V$(TOPNAMETEST) 
# $(MAKE) -j -C obj_dir -f ../Makefile_obj

	@echo "-------------------RUN-------------------"
	@echo $(IMG)
	@echo $(NPCMODE)
	./obj_dir/V$(TOPNAMETEST) $(BATCHMODE) $(NPCMODE) $(IMG)

#gtkwave wave.vcd
wave:
	gtkwave wave.vcd
show-config:
	$(VERILATOR) -V
clean:
	-rm -rf obj_dir logs *.log *.dmp *.vpd *.vcd $(BUILD_DIR) vsrc .bloop/ project/.bloop/npc-build/ target/bg-jobs/ target/task-temp-directory/
#git clean -fd
.PHONY: default all clean run
