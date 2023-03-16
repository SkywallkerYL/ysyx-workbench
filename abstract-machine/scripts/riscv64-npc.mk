include $(AM_HOME)/scripts/isa/riscv64.mk

AM_SRCS :=  riscv/npc/trm.c \
            riscv/npc/ioe.c \
            riscv/npc/timer.c \
            riscv/npc/input.c \
            riscv/npc/gpu.c \
            platform/nemu/mpe.c 
#platform/nemu/trm.c \
#platform/nemu/ioe/ioe.c \
#platform/nemu/ioe/timer.c \
#platform/nemu/ioe/input.c \
#platform/nemu/ioe/gpu.c \
#platform/nemu/ioe/audio.c \
#platform/nemu/ioe/disk.c \
#platform/nemu/mpe.c 
#riscv/npc/trm.c \
#riscv/npc/ioe.c \
#riscv/npc/timer.c \
#riscv/npc/input.c \
#riscv/npc/gpu.c \
#platform/nemu/mpe.c 
           
CFLAGS    += -fdata-sections -ffunction-sections
LDFLAGS   += -T $(AM_HOME)/scripts/linker.ld --defsym=_pmem_start=0x80000000 --defsym=_entry_offset=0x0
LDFLAGS   += --gc-sections -e _start
CFLAGS += -DMAINARGS=\"$(mainargs)\"
.PHONY: $(AM_HOME)/am/src/riscv/npc/trm.c

NEMUFLAGS = -l 
NEMUFLAGS += $(shell dirname $(IMAGE).elf)/npclog.txt


#DIFFTESTNEMUFILE=/home/yangli/ysyx-workbench/nemu/build/riscv64-nemu-interpreter-so
DIFFTESTNEMUFILE=$(NEMU_HOME)/build/riscv64-nemu-interpreter-so
NPCMODE+=$(DIFFTESTNEMUFILE)
ELFFILE = $(IMAGE).elf
ELFLOGFILE = $(shell dirname $(IMAGE).elf)/npcftrace.txt

FILENAME = $(shell dirname $(IMAGE).elf)/npclog.txt
image: $(IMAGE).elf
	@$(OBJDUMP) -d $(IMAGE).elf > $(IMAGE).txt
	@echo + OBJCOPY "->" $(IMAGE_REL).bin
	@$(OBJCOPY) -S --set-section-flags .bss=alloc,contents -O binary $(IMAGE).elf $(IMAGE).bin

#如果要用性能工具Perf 把这里的run 改称perfrun  即下面的那个npchome 里的run
run: image
	echo "$(IMAGE)" "$(NEMUFLAGS )" "$(NEMUFLAG)"
	$(MAKE) -C $(NPC_HOME) run NPCMODE+=-l NPCMODE+=$(FILENAME) NPCMODE+=-f NPCMODE+=$(ELFFILE) NPCMODE+=-v NPCMODE+=$(ELFLOGFILE) NPCMODE+=-d NPCMODE+=$(DIFFTESTNEMUFILE)  IMG=$(IMAGE).bin



CFLAGS  += -DISA_H=\"riscv/riscv.h\"

AM_SRCS += riscv/npc/start.S \
           riscv/npc/cte.c \
           riscv/npc/trap.S \
           riscv/npc/vme.c    