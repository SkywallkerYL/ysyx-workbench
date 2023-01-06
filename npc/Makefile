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


TOPNAME?=RiscvCpu
TOPNAMETEST?=RiscvCpu
#FSM_m #keyboard_top #top
NXDC_FILES=constr/top.nxdc
INC_PATH?=

#include ../../include


VERILATOR = verilator
# Generate C++ in executable form
#for nvboard
VERILATOR_FLAGS += -MMD --build -cc
VERILATOR_FLAGS += -O3 --x-assign fast
VERILATOR_FLAGS += --x-initial fast --noassert
VERILATOR_FLAGS += -Wno-fatal
#for testbench
VERILATOR_CFLAGS += -cc --exe -Os -x-assign 0
VERILATOR_CFLAGS += --trace --coverage 
VERILATOR_CFLAGS += -Wno-fatal

VERILATOR_CFLAGS += --top-module $(TOPNAMETEST)
#VERILATOR_CFLAGS += --x-initial fast --noassert
#VERILATOR_CFLAGS += --timing



CSRCT = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "main.cpp") 
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
CSRC = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "main.cpp")
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

IMG?=

	
$(BIN) : $(VSRC) $(CSRCT) 
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_CFLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS))\
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

all: default


runnvboard: $(BIN)
	#for nvboard
	@$^

NPCMODE=

run: 
	#for testbench        
	@echo "---------------VERILATE------------------"
	$(VERILATOR) $(VERILATOR_CFLAGS) $(CSRCT) $(VSRC) $(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS))\
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))
	

	@echo "-----------------BUILD-------------------"

	$(MAKE) -j -C obj_dir -f V$(TOPNAMETEST).mk V$(TOPNAMETEST) 
# $(MAKE) -j -C obj_dir -f ../Makefile_obj

	@echo "-------------------RUN-------------------"
	@echo $(IMG)
	./obj_dir/V$(TOPNAMETEST) $(NPCMODE) $(IMG)

#gtkwave wave.vcd
wave:
	gtkwave wave.vcd
show-config:
	$(VERILATOR) -V
clean:
	-rm -rf obj_dir logs *.log *.dmp *.vpd *.vcd $(BUILD_DIR) vsrc .bloop/ project/.bloop/npc-build/ target/bg-jobs/ target/task-temp-directory/
#git clean -fd
.PHONY: default all clean run