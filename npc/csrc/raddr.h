#include "common.h"
#include <assert.h>
#include "npcsdb.h"
#include "trace.h"
#include "timer.h"
#include "keyboard.h"


static void out_of_bound(paddr_t addr) {
    Log("Out of bound for npc at about :%08lx inst:%08x  npc:%08lx",localpc,localinst,localnpc);
    statistic();
    //sim_exit();
#ifdef CONFIG_ITRACE
    instr_tracelog(1);
#endif
  panic("address = " FMT_PADDR " is out of bound of pmem [" FMT_PADDR ", " FMT_PADDR "] at pc = " FMT_WORD,
      addr, PMEM_LEFT, PMEM_RIGHT, localnpc);
}

extern "C" void pmem_read(long long raddr, long long *rdata){
    //Log("Out of bound for npc at about :%08lx inst:%08x  npc:%08lx",localpc,localinst,localnpc);
    if ((uint64_t)raddr == 0){
        out_of_bound(raddr);
        *rdata = 0;
        return;
#ifdef CONFIG_MTRACE
        mtrace(0,raddr,8,*rdata);
#endif
    }
    else if (raddr ==RTC_ADDR ){//rtc addr
        //*rdata = get_time();//(uint32_t)(get_time()) &0xff;
        *rdata = (uint32_t)get_time();
        //printf("time%d\n",get_time());
    }
    else if (raddr ==RTC_ADDR+0x4 ){//rtc addr
        *rdata = ((uint64_t)get_time()&0xffffffff00000000)>>32;//(uint32_t)(get_time()) &0xff;
        //printf("time%d\n",get_time());
    }
    else if (raddr == KBD_ADDR) {
        //printf("hhhhhh\n");
        i8042_data_io_handler(0,0,0);
        //printf("hhhhhh1\n");
        //printf("hhhhhh\n");
        *rdata = (uint64_t)i8042_data_port_base[0];
    }
    else if (raddr == VGACTL_ADDR){ //vga H W
        *rdata = (uint32_t)vgactl_port_base[0];
    }
    else if(raddr <= 0x10000fff && raddr >= 0x10000000) {
        *rdata = 0;

    }
    else if (raddr == VGACTL_ADDR+2){ //vga H W
        *rdata = (uint32_t)vgactl_port_base[0] >> 16;
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
    else if ((uint64_t)raddr>=(uint64_t)PMEM_LEFT1&&(uint64_t)raddr<=PMEM_RIGHT1){
        uint64_t init = (raddr-CONFIG_MBASE1);
        *rdata = *(uint64_t *)(&pmem[init]);
        //printf("0x%llx\n",*rdata);
#ifdef CONFIG_MTRACE
        mtrace(0,raddr,8,*rdata);
#endif
        //printf("addr:0x%016x \t rdata: 0x%016x\n",raddr,*rdata );
    }
    else {

        printf("read out raddr = %llx!!!\n",raddr);
        *rdata = 0;
        out_of_bound(raddr);
    }       
}


extern "C" void pmem_write(long long waddr, long long wdata,char wmask){
    //printf("addr:0x%016x data:0x%016x mask:0b%02b \n",waddr,wdata,wmask);
    char c = wdata&0xff;
    if ((uint64_t)waddr == 0){
        
        out_of_bound(waddr);
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
        //printf("hjhhhhh\n");
        /*
        uint64_t write_mask =   ((wmask&0x1<<7)?(uint64_t)(0xffull<<56):(uint64_t)(0x00ull<<56)) | \
                                ((wmask&0x1<<6)?(uint64_t)(0xffull<<48):(uint64_t)(0x00ull<<48)) | \
                                ((wmask&0x1<<5)?(uint64_t)(0xffull<<40):(uint64_t)(0x00ull<<40)) | \
                                ((wmask&0x1<<4)?(uint64_t)(0xffull<<32):(uint64_t)(0x00ull<<32)) | \
                                ((wmask&0x1<<3)?(uint64_t)(0xffull<<24):(uint64_t)(0x00ull<<24)) | \
                                ((wmask&0x1<<2)?(uint64_t)(0xffull<<16):(uint64_t)(0x00ull<<16)) | \
                                ((wmask&0x1<<1)?(uint64_t)(0xffull<<8 ):(uint64_t)(0x00ull<<8 )) | \
                                ((wmask&0x1<<0)?(uint64_t)(0xffull<<0 ):(uint64_t)(0x00ull<<0 ));
        //printf("mask %x datapartmask %lx\n",wmask,(wmask&0x1<<7)?(0xfful<<56):(0x00ul<<56));
        //printf("mask %x datapartmask %lx\n",wmask,(wmask&0x1<<6)?(0xfful<<48):(0x00ul<<48));
        //printf("mask %x datapartmask %lx\n",wmask,(wmask&0x1<<5)?(0xfful<<40):(0x00ul<<40));
        //printf("mask %x datapartmask %lx\n",wmask,(wmask&0x1<<4)?(0xfful<<32):(0x00ul<<32));
        //printf("mask %x datapartmask %lx\n",wmask,(wmask&0x1<<3)?(0xfful<<24):(0x00ul<<24));
        //printf("mask %x datapartmask %lx\n",wmask,(wmask&0x1<<2)?(0xfful<<16):(0x00ul<<16));
        //printf("mask %x datapartmask %lx\n",wmask,(wmask&0x1<<1)?(0xfful<<8 ):(0x00ul<<8 ));
        //printf("mask %x datapartmask %lx\n",wmask,(wmask&0x1<<0)?(0xfful<<0 ):(0x00ul<<0 ));
        //printf("mask %x datamask %lx\n",wmask,write_mask);
        //printf("hjhhhhh1\n");                       
        uint64_t origindata = *(uint64_t *)((uint8_t *)vmem + waddr - FB_ADDR);
        //printf("hjhhhhh2\n");
        uint64_t writedata =  (write_data&write_mask)|(origindata&~write_mask);
        *(uint64_t *)((uint8_t *)vmem + waddr - FB_ADDR)= writedata;
        */
        //if(writedata ==0 ) printf("may be wrong!\n");
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
        uint64_t write_data = wdata;
        //mask为1的写入，为0的保持原来的内存
        //mask = 0x3 表示只写入最低两个字节，其他的保持不变
        //*wdata = *(uint64_t *)(&instr_mem[pmem_addr]);
        /*
        
        uint64_t write_mask =   ((wmask&0x1<<7)?(uint64_t)(0xffull<<56):(uint64_t)(0x00ull<<56)) | \
                                ((wmask&0x1<<6)?(uint64_t)(0xffull<<48):(uint64_t)(0x00ull<<48)) | \
                                ((wmask&0x1<<5)?(uint64_t)(0xffull<<40):(uint64_t)(0x00ull<<40)) | \
                                ((wmask&0x1<<4)?(uint64_t)(0xffull<<32):(uint64_t)(0x00ull<<32)) | \
                                ((wmask&0x1<<3)?(uint64_t)(0xffull<<24):(uint64_t)(0x00ull<<24)) | \
                                ((wmask&0x1<<2)?(uint64_t)(0xffull<<16):(uint64_t)(0x00ull<<16)) | \
                                ((wmask&0x1<<1)?(uint64_t)(0xffull<<8 ):(uint64_t)(0x00ull<<8 )) | \
                                ((wmask&0x1<<0)?(uint64_t)(0xffull<<0 ):(uint64_t)(0x00ull<<0 ));
        uint64_t origindata = *(uint64_t *)((uint8_t *)p_mem + pmem_addr);
        uint64_t writedata =  (write_data&write_mask)|(origindata&~write_mask);
        *(uint64_t *)((uint8_t *)p_mem + pmem_addr)= writedata;
#ifdef CONFIG_MTRACE
        mtrace(1,waddr,8,p_mem[pmem_addr]);
#endif
        */
        
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
    else if(waddr >= 0x10000000 && waddr<=0x10000fff){ // serial port
        //printf("pc:0x%08x\n",Pc_Fetch());
        printf("%c",c);
    }
    //else if (waddr == KBD_ADDR) {
        //i8042_data_io_handler(0,0,0);
        //i8042_data_port_base[0] = (uint32_t)wdata;
        //printf("hhhhhh\n");
        //*rdata = (uint64_t)i8042_data_port_base[0];
    //}
    else {
        //printf("pc 0x%08x w\n",cpu_gpr[32]);
       out_of_bound(waddr);
    }  
}