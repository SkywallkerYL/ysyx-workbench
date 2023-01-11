#include "common.h"
#include <assert.h>
#include "npcsdb.h"

static void out_of_bound(paddr_t addr) {
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, cpu_gpr[32]);
}

extern "C" void pmem_read(long long raddr, long long *rdata){
    if ((uint64_t)raddr == 0){
        *rdata = 0;
    }
    else if ((uint64_t)raddr>=(uint64_t)0x80000000){
        uint64_t init = (raddr-CONFIG_MBASE);
        *rdata = *(uint64_t *)(&p_mem[init]);
        //printf("addr:0x%016x \t rdata: 0x%016x\n",raddr,*rdata );
    }
    else {
        out_of_bound(raddr);
    }       
}


extern "C" void pmem_write(long long waddr, long long wdata,char wmask){
    if ((uint64_t)waddr == 0){
        //*rdata = 0;
    }
    else if ((uint64_t)waddr>=(uint64_t)0x80000000){
        uint64_t pmem_addr = (waddr-CONFIG_MBASE);
        //mask为1的写入，为0的保持原来的内存
        //mask = 0x3 表示只写入最低两个字节，其他的保持不变
        //*wdata = *(uint64_t *)(&instr_mem[pmem_addr]);
        uint64_t write_data = wdata;
        for (char i = 0; i < 8; i++)
        {
            //判断mask的i位是否为1,从地到高。
            if (wmask & (0x1<<i))
            {
                //默认对齐低位
               p_mem[pmem_addr+i]= write_data&0xffull;
            } 
            //进入下一位。
            write_data >> 8;
        }
    }
    else {
        out_of_bound(waddr);
    }  
}