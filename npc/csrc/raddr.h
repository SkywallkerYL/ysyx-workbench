#include "common.h"
#include <assert.h>
#include "npcsdb.h"
#include "trace.h"
#include "timer.h"

static void out_of_bound(paddr_t addr) {
#ifdef CONFIG_ITRACE
    instr_tracelog(1);
#endif
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, cpu_gpr[32]);
}

extern "C" void pmem_read(long long raddr, long long *rdata){
    if ((uint64_t)raddr == 0){
        *rdata = 0;
        return;
#ifdef CONFIG_MTRACE
        mtrace(0,raddr,8,*rdata);
#endif
    }
    else if (raddr ==RTC_ADDR ){//rtc addr
        *rdata = get_time();//(uint32_t)(get_time()) &0xff;
        //printf("time%d\n",get_time());
    }
    else if (raddr == VGACTL_ADDR){ //vga H W
        *rdata = ((uint64_t)vgactl_port_base[1]<<32) | vgactl_port_base[0];
    }
    else if (raddr >= FB_ADDR && raddr < (FB_ADDR+0x00100000)){//vga addr
        *rdata = *(uint64_t *)((uint8_t *)vmem + raddr - FB_ADDR);
    }
    //else if (raddr == (RTC_ADDR+0x4)){
      //  *rdata = ((uint32_t)(get_time()>>32))&0xff;
    //}
    else if ((uint64_t)raddr>=(uint64_t)PMEM_LEFT&&(uint64_t)raddr<=PMEM_RIGHT){
        uint64_t init = (raddr-CONFIG_MBASE);
        *rdata = *(uint64_t *)(&p_mem[init]);
        //printf("0x%llx\n",*rdata);
#ifdef CONFIG_MTRACE
        mtrace(0,raddr,8,*rdata);
#endif
        //printf("addr:0x%016x \t rdata: 0x%016x\n",raddr,*rdata );
    }
    else {
        //printf("pc 0x%08x r\n",cpu_gpr[32]);
        out_of_bound(raddr);
    }       
}


extern "C" void pmem_write(long long waddr, long long wdata,char wmask){
    //printf("addr:0x%016x data:0x%016x mask:0b%02b \n",waddr,wdata,wmask);
    char c = wdata&0xff;
    if ((uint64_t)waddr == 0){
        
        return;
        //*rdata = 0;
    }
    else if ((uint64_t)waddr == VGACTL_ADDR){
        //assert(wmask&0xff == 0x0f || wmask&0xff == 0xf0);
        //if (wmask&0xff == 0xf0){
           // vgactl_port_base[1] = wdata;
        //}
        //else if(wmask&0xff == 0x0f){
            vgactl_port_base[0] = wdata;
        //}
        //else {
            //panic("wmask = " "0x%08x" " is not valid while write W and H at pc = " FMT_WORD,wmask, cpu_gpr[32]);
        //}
    }
    else if ((uint64_t)waddr == VGACTL_ADDR + 0x4){
        vgactl_port_base[1] = wdata;
    }
    else if (waddr >= FB_ADDR && waddr < (FB_ADDR+0x00100000)){
        uint64_t write_data = wdata;
        //if ()
        for (char i = 0; i < 8; i++)
        {
            //判断mask的i位是否为1,从地到高。
            if (wmask & (0x1<<i))
            {
                //默认对齐低位
               *(uint8_t *)((uint8_t *)vmem + waddr - FB_ADDR+i)= write_data&0xffull;
#ifdef CONFIG_MTRACE
               mtrace(1,waddr+i,1,write_data&0xffull);
#endif
            } 
            //进入下一位。
            write_data  = write_data>> 8;
        }
        /*
        if (wmask&0xff == 0xf0){
            *(uint32_t *)((uint8_t *)vmem + waddr - FB_ADDR+0x4)= wdata;
        }
        else if(wmask&0xff == 0x0f){
            *(uint32_t *)((uint8_t *)vmem + waddr - FB_ADDR)= wdata;
        }
        else {
            panic("wmask = " "0x%08x" " is not valid while write screen at pc = " FMT_WORD,wmask, cpu_gpr[32]);
        }
        */
    }
    else if ((uint64_t)waddr>=(uint64_t)PMEM_LEFT&&(uint64_t)waddr<=PMEM_RIGHT){
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
#ifdef CONFIG_MTRACE
               mtrace(1,waddr+i,1,p_mem[pmem_addr+i]);
#endif
            } 
            //进入下一位。
            write_data  = write_data>> 8;
        }
    }
    else if(waddr == 0xa00003f8){ // serial port
        //printf("pc:0x%08x\n",Pc_Fetch());
        printf("%c",c);
    }
    else {
        //printf("pc 0x%08x w\n",cpu_gpr[32]);
       out_of_bound(waddr);
    }  
}