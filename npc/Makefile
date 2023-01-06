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


TOPNAME = RiscvCpu
#NXDC_FILES = constr/top.nxdc
INC_PATH ?=

VERILATOR = verilator
VERILATOR_CFLAGS += -MMD -cc  --exe  --trace --build \
				-O3 --x-assign fast --x-initial fast --noassert \

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))


# project source
VSRCS = $(shell find $(abspath ./build) -name "*.v")
CSRCS = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "*.cpp")
CSRCS += $(SRC_AUTO_BIND)

# rules for NVBoard
#include $(NVBOARD_HOME)/scripts/nvboard.mk

# rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""
CFLAGS += $(shell llvm-config-11 --cxxflags)#3steps makefile,diasm.cc,defs.h
LDFLAGS += $(shell llvm-config-11 --libs) 
LDFLAGS += -lSDL2  -lreadline -ldl #-lSDL2_image


$(BIN): $(VSRCS) $(CSRCS)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		-top $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS)) \
		--Mdir $(OBJ_DIR) --exe -o  $(abspath $(BIN))

run: $(BIN) 
	@rm -rf logs
	@mkdir -p logs
#./build/V$(TOPNAME) $(ARGS)
#./build/obj_dir/V$(TOPNAMETEST) $(NPCMODE) $(IMG)

#gtkwave wave.vcd
wave:
	gtkwave wave.vcd
show-config:
	$(VERILATOR) -V
clean:
	-rm -rf obj_dir logs *.log *.dmp *.vpd *.vcd $(BUILD_DIR) vsrc .bloop/ project/.bloop/npc-build/ target/bg-jobs/ target/task-temp-directory/
#git clean -fd
.PHONY: default all clean run