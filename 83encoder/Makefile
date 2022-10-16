#Makefile for Verilator


TOPNAME = top
NXDC_FILES = constr/top.nxdc
INC_PATH ?=

#include ../../include


VERILATOR = verilator
# Generate C++ in executable form
#for nvboard
VERILATOR_FLAGS += -MMD --build -cc
VERILATOR_FLAGS += -O3 --x-assign fast
VERILATOR_FLAGS += --x-initial fast --noassert

#for testbench
VERILATOR_CFLAGS += -cc --exe -Os -x-assign 0
VERILATOR_CFLAGS += --trace --coverage 
VERILATOR_CFLAGS += -Wno-fatal
VERILATOR_CFLAGS += --top-module $(TOPNAME)
#VERILATOR_CFLAGS += --x-initial fast --noassert




CSRCT = $(shell find $(abspath ./csrc) -name "*.c" -or -name "*.cc" -or -name "top_tb.cpp") 


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
VSRC += $(shell find $(abspath ../templete/Mux) -name "*.v")
VSRC += $(shell find $(abspath ../templete/bcd7seg) -name "*.v")

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
test: 
	#for testbench        
	@echo "---------------VERILATE------------------"
	$(VERILATOR) $(VERILATOR_CFLAGS) $(CSRCT) $(VSRC)
	
	

	@echo "-----------------BUILD-------------------"

	$(MAKE) -j -C obj_dir -f V$(TOPNAME).mk V$(TOPNAME)
	# $(MAKE) -j -C obj_dir -f ../Makefile_obj

	@echo "-------------------RUN-------------------"
	./obj_dir/V$(TOPNAME)
	gtkwave wave.vcd


show-config:
	$(VERILATOR) -V
clean:
	-rm -rf obj_dir logs *.log *.dmp *.vpd *.vcd $(BUILD_DIR)
.PHONY: default all clean run
