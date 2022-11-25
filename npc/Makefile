#Makefile for Verilator
TOPNAME = example

all:
	@echo "Write this Makefile by your self."

sim:
	$(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
include ../Makefile


VERILATOR = verilator
# Generate C++ in executable form
VERILATOR_FLAGS += -cc --exe
# Generate makefile dependencies (not shown as complicates the Makefile)
#VERILATOR_FLAGS += -MMD
# Optimize
VERILATOR_FLAGS += -Os -x-assign 0
# Warn abount lint issues; may not want this on less solid designs
#VERILATOR_FLAGS += -Wno-fatal
# Make waveforms
VERILATOR_FLAGS += --trace
# Check SystemVerilog assertions
#VERILATOR_FLAGS += --assert
# Generate coverage analysis
VERILATOR_FLAGS += --coverage
# Run Verilator in debug mode
#VERILATOR_FLAGS += --debug
# Add this trace to get a backtrace in gdb
#VERILATOR_FLAGS += --gdbbt
#VERILATOR_FLAGS += --top-module
VERILATOR_FLAGS += -Wno-fatal
VERILATOR_FLAGS += --top-module $(TOPNAME)
# Input files for Verilator
#VERILATOR_INPUT = -f ./vsrc/*.v ./csrc/*.cpp ./csrc/*.h
VSRC = $(wildcard ./vsrc/*.v)
CSRC = $(wildcard ./csrc/*.cpp)
HSRC = $(wildcard ./csrc/*,h)
default: run

run:        
	@echo "---------------VERILATE------------------"
	$(VERILATOR) $(VSRC) $(CSRC) $(HSRC) $(VERILATOR_FLAGS)
	
	

	@echo "-----------------BUILD-------------------"

	$(MAKE) -j -C obj_dir -f V$(TOPNAME).mk V$(TOPNAME)
	# $(MAKE) -j -C obj_dir -f ../Makefile_obj

	@echo "-------------------RUN-------------------"
	./obj_dir/V$(TOPNAME)
	gtkwave wave.vcd

	
show-config:
	$(VERILATOR) -V
clean:
	-rm -rf obj_dir logs *.log *.dmp *.vpd *.vcd
