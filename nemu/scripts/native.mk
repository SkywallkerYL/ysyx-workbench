#***************************************************************************************
# Copyright (c) 2014-2022 Zihao Yu, Nanjing University
#
# NEMU is licensed under Mulan PSL v2.
# You can use this software according to the terms and conditions of the Mulan PSL v2.
# You may obtain a copy of Mulan PSL v2 at:
#          http://license.coscl.org.cn/MulanPSL2
#
# THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
# EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
# MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
#
# See the Mulan PSL v2 for more details.
#**************************************************************************************/

-include $(NEMU_HOME)/../Makefile
include $(NEMU_HOME)/scripts/build.mk

include $(NEMU_HOME)/tools/difftest.mk

compile_git:
	$(call git_commit, "compile NEMU")
$(BINARY): compile_git

# Some convenient rules

override ARGS ?= --log=$(BUILD_DIR)/nemu-log.txt
override ARGS += $(ARGS_DIFF)

# Command to execute NEMU
IMG ?=
#BINARY+=-b
MODEPARM ?=
FILENAME ?=
#ELF1 = $(IMG)
#字符串替换，获取elf
ELF = $(IMG:.bin=.elf) 
#$(pathsubst %.bin,%.elf,$(ELF1))
MODEF = -f
FIFFIND = $(findstring $(MODEF),$(MODEPARM))
ifeq ($(MODEF),$(FIFFIND))
	FILENAME=$(ELF) 
endif
NEMU_EXEC := $(BINARY) $(MODEPARM) $(FILENAME) $(ARGS) $(IMG)


run-env: $(BINARY) $(DIFF_REF_SO)
# if you want to run the nemu in batch mode , add -b at the end of $(BINARY)
# $(BINARY) is the nemu program   the shell shoul be added after it like -b -f $(IMG).elf 
# or you can set the MODEPARM by shell like
#make ARCH=riscv64-nemu ALL=recursion MODEPARM=-b MODEPARM+=-f MODEPARM+=IMG.elf run
run: run-env
	$(call git_commit, "run NEMU")
	echo "in nemu" $(MODEF) $(findstring $(MODEF),$(MODEPARM)) $(FIFFIND) $(FILENAME)
	$(NEMU_EXEC) 
gdb: run-env
	$(call git_commit, "gdb NEMU")
	gdb -s $(BINARY) --args $(NEMU_EXEC)

clean-tools = $(dir $(shell find ./tools -maxdepth 2 -mindepth 2 -name "Makefile"))
$(clean-tools):
	-@$(MAKE) -s -C $@ clean
clean-tools: $(clean-tools)
clean-all: clean distclean clean-tools

.PHONY: run gdb run-env clean-tools clean-all $(clean-tools)
