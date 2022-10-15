#Makefile for Verilator


TOPNAME = top
NXDC_FILES = constr/top.nxdc
INC_PATH ?=

#include ../../include


VERILATOR = verilator
# Generate C++ in executable form
VERILATOR_FLAGS += -MMD --build -cc

#for nvboard
#VERILATOR_FLAGS += -cc --exe
#for test bench
# Generate makefile dependencies (not shown as complicates the Makefile)
#VERILATOR_FLAGS += -MMD
# Optimize
VERILATOR_FLAGS += -O3 --x-assign fast
VERILATOR_FLAGS += --x-initial fast --noassert
# Warn abount lint issues; may not want this on less solid designs
#VERILATOR_FLAGS += -Wno-fatal
# Make waveforms
#VERILATOR_FLAGS += --trace
# Check SystemVerilog assertions
#VERILATOR_FLAGS += --assert
# Generate coverage analysis
#VERILATOR_FLAGS += --coverage
# Run Verilator in debug mode
#VERILATOR_FLAGS += --debug
# Add this trace to get a backtrace in gdb
#VERILATOR_FLAGS += --gdbbt
#VERILATOR_FLAGS += --top-module
#VERILATOR_FLAGS += -Wno-fatal
# Input files for Verilator
#VERILATOR_INPUT = -f ./vsrc/*.v ./csrc/*.cpp ./csrc/*.h

BUILD_DIR = ./build
OBJ_DIR = $(BUILD_DIR)/obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

#HSRC = $($(NVBOARD_HOME)/include/    -name "*.h")
 
default: $(BIN)

$(shell mkdir -p $(BUILD_DIR))

#XDC
SRC_AUTO_BIND = $(abspath $(BUILD_DIR)/auto_bind.cpp)
$(SRC_AUTO_BIND): $(NXDC_FILES)
	python3 $(NVBOARD_HOME)/scripts/auto_pin_bind.py $^ $@
	
VSRC = $(shell find $(abspath ./vsrc) -name "*.v")
CSRC = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "main.cpp")
CSRC += $(SRC_AUTO_BIND)


#rules for nvboard
include $(NVBOARD_HOME)/scripts/nvboard.mk
#rules for verilator
INCFLAGS = $(addprefix -I, $(INC_PATH))
CFLAGS += $(INCFLAGS) -DTOP_NAME="\"V$(TOPNAME)\""
LDFLAGS += -lSDL2 -lSDL2_image

	
$(BIN) : $(VSRC) $(CSRC) $(NVBOARD_ARCHIVE)
	@rm -rf $(OBJ_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) \
		--top-module $(TOPNAME) $^ \
		$(addprefix -CFLAGS , $(CFLAGS)) $(addprefix -LDFLAGS , $(LDFLAGS))\
		--Mdir $(OBJ_DIR) --exe -o $(abspath $(BIN))

all: default

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."

include ../Makefile
run: $(BIN)
	#for nvboard
	@$^

	#for testbench        
	#@echo "---------------VERILATE------------------"
	#$(VERILATOR) $(VSRC) $(CSRC) $(HSRC) $(VERILATOR_FLAGS)
	
	

	#@echo "-----------------BUILD-------------------"

	#$(MAKE) -j -C obj_dir -f Vexample.mk Vexample
	# $(MAKE) -j -C obj_dir -f ../Makefile_obj

	#@echo "-------------------RUN-------------------"
	#./obj_dir/Vexample
	#gtkwave wave.vcd


show-config:
	$(VERILATOR) -V
clean:
	-rm -rf obj_dir logs *.log *.dmp *.vpd *.vcd $(BUILD_DIR)
.PHONY: default all clean run
