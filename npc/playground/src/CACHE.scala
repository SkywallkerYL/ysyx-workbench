package npc

import chisel3._
import chisel3.util._

object CacheParm {
    val AddrWidth = parm.REGWIDTH // Cache接受的地址数据位宽
    val DataWidth  : Int =  8 //1 Bytes
    val BlockWidth : Int =  4 // 数据区大小，2^BlockWidth B
    val BlockNum   = scala.math.pow(BlockWidth,2)
    val SizeWidth  : Int = 14 // Cache 大小   2^sizewidth Bytes(data is 1 Bytes)
    val AssoWidth  : Int =  2 // 组相连内部组数 2^cacheasso
    val AssoNum    = scala.math.pow(AssoWidth,2)
    val GroupWidth = SizeWidth - AssoWidth - BlockWidth // 组数2^group
    val GroupNum   = scala.math.pow(GroupWidth,2)
    val LineWidth  = SizeWidth - BlockWidth
    val NumEntries = scala.math.pow(LineWidth,2)
    val TagWidth   = AddrWidth - GroupWidth
    
    //func
    def mask_with_len(x : UInt):UInt = {
        return ((1<<(x))-1)
    }
    val extagmask = mask_with_len(GroupWidth+BlockWidth)
    //tagmask = ~extagmask(REGWIDTH.W)
    val blockmask = mask_with_len(BlockWidth)
    val groupmask = mask_with_len(GroupWidth) << BlockWidth
    def get_tag(addr : UInt) : UInt = {
        return (addr & (~(extagmask.U(AddrWidth.W))))>>(GroupWidth+BlockWidth)
    }
    def get_group(addr : UInt) :UInt = {
        return (addr & (groupmask.U(AddrWidth.W)))
    }
    def get_block(addr : UInt) : UInt = {
        return (addr & (blockmask.U(AddrWidth.W)))
    } 
    //获取在主存中的块号
    def get_blocknum(addr : UInt): UInt = {
        return (addr & (~(blockmask.U(AddrWidth.W))))>>BlockWidth
    }
    //根据tag 获取在主存中的块号
    def get_blocknum_cache(tag : UInt,group:UInt) : UInt = {
        return (tag<<GroupWidth)|group
    }

}

class CacheIO extends Bundle{
    val valid = Input(Bool()) // require is valid
    val op    = Input(Bool()) // 1:WRITE 0:READ
    val addr = Input(UInt(parm.REGWIDTH.W))
    val wdata = Input(UInt(parm.REGWIDTH.W))
    val wstrb = Input(UInt(parm.BYTEWIDTH.W))

    val addrok = Output(Bool())//addr_ok  r:addr is received w:addr and data is received
    val dataok = Output(Bool())//data_ok  r:data back        w:data is finished writen 
    val rdata = Output(UInt(parm.REGWIDTH.W))
    
}
//AXI-
class CacheReadFromIO extends Bundle{
    val ar = Flipped(Decoupled(new Axi4LiteRA)) // AR
    val r  = (Decoupled(new Axi4LiteRD)) // R
}
class CacheWriteBackIO extends Bundle{
    val aw = Flipped(Decoupled(new Axi4LiteWA)) // AW
    val w  = Flipped(Decoupled(new Axi4LiteWD)) // W
    val b  = (Decoupled(new Axi4LiteWR)) // B
}
//From Cache
class ReadCacheIO extends Bundle{
    val raddr = Input(UInt(parm.REGWIDTH.W))
    val ren   = Input(Bool())
    val valid = Input(Vec(Seq.fill(AssoNum)(Seq.fill(GroupNum)(Bool()))))
    val dirty = Input(Vec(Seq.fill(AssoNum)(Seq.fill(GroupNum)(Bool()))))
    val tag   = Input(Vec(Seq.fill(AssoNum)(Seq.fill(GroupNum)(UInt(TagWidth.W)))))
    val rdata = Output(UInt(parm.REGWIDTH.W))
    
}
class WriteCacheIO extends Bundle{
    val waddr = Input(UInt(parm.REGWIDTH.W))
    val wdata = Input(UInt(parm.REGWIDTH.W))
    val wen   = Input(Bool())
}
class RequestBufferIO extends Bundle with CacheParm{
    val op    = Output(Bool()) // 1:WRITE 0:READ
    val tag   = Output(UInt(TagWidth.W))
    val group = Output(UInt(GroupWidth.W))
    val block = Output(UInt(BlockWidth.W))
    val wdata = Output(UInt(parm.REGWIDTH.W))
    val wstrb = Output(UInt(parm.BYTEWIDTH.W)) 
}
//Read Cache Module 
class ReadCacheModule extends Module with CacheParm{
    val io = IO(new Bundle{
        val Read = new ReadCacheIO 
        val ReadMem = Flipped(new CacheReadFromIO)
    })
    val group = get_group(io.Read.raddr)
    val tag   = get_tag(io.Read.raddr)
    val hit = Wire(Bool())
    for (i <- 0 until AssoNum){
        when(tag === io.Read.tag(group)(i) && io.Read.valid(group)(i)){

        }
    }
}
class CpuCache extends Module with CacheParm{
    val io = IO(new Bundle{
        val Cache = Flipped(new Cpu2Cache) 
        val Sram  = new Cache2Sram
    })
    //Cache Initial
    //容量大的采用mem实现
    //val mem = Seq.fill(AssoNum)(Seq.fill(GroupNum)(SyncReadMem(BlockNum,UInt(DataWidth.W))))
    //mem 实例化Assonum*BlockNum块 深度为GroupNum 的宽度为datawidth的Ram
    val mem = Seq.fill(AssoNum)((SyncReadMem(GroupNum*BlockNum,UInt(DataWidth.W))))
    //tag 实例化Assonum块 深度为Groupnum 的宽度为
    val tag = Seq.fill(AssoNum)((SyncReadMem(GroupNum,UInt(TagWidth.W))))
    //val mem = Vec(GroupNum,Vec(AssoNum,SyncReadMem(BlockNum,UInt(DataWidth.W))))
    //容量小的用Reg实现
    val valid = RegInit(VecInit(Seq.fill(AssoNum*GroupNum)((false.B))))
    val dirty = RegInit(VecInit(Seq.fill(AssoNum*GroupNum)((false.B))))
    //Look Up| Hit Write | Replace | Refill//对Cache的4种操作
    //Request Buffer : 锁存 op addr wstrb wdata
    //Tag Compare
    //Data Select 
    //Miss Buffer : 记录缺失cache行准备要替换的路信息，以及从总线返回的数据
    //Lsfr :随即替换
    //Write Buffer : 用于hit write 存写入的way 和block index等信息
    //Main state machine
    io.Cache.Cache.addrok:=0.U
    io.Cache.Cache.dataok:=0.U
    io.Cache.Cache.rdata :=0.U
    val Intag = get_tag(io.Cache.Cache.addr)
    val Ingroup = get_group(io.Cache.Cache.addr)
    val Inblock = get_block(io.Cache.Cache.addr)
    val RequestBuffer = RegInit(0.U.asTypeOf(new RequestBufferIO))
    val hit = Wire(Vec(AssoNum,Bool()))
    for (i <- 0 until AssoNum){hit(i):= 0.U}
    val LoadRes = Wire(Vec(parm.REGWIDTH/DataWidth,UInt(DataWidth.W)))
    for (i <- 0 until parm.REGWIDTH/DataWidth){LoadRes(i) := 0.U}
    for (i <- 0 until AssoNum){
        when(RequestBuffer.tag === tag(i).read(RequestBuffer.group)){
            hit(i) := true.B
            for( j <- 0 until parm.REGWIDTH/DataWidth){
                LoadRes(parm.REGWIDTH/DataWidth-1-j) := mem(i).read(RequestBuffer.group*BlockNum+RequestBuffer.block+j)
            }
        }
    }
    val cachehit = hit.asUInt.orR
    val HitWrite = Wire(Bool())
    val blocknum = Wire(UInt((DataWidth-BlockWidth).W))
    val axivalid = Wire(Bool())
    val idle :: lookup :: miss :: replace :: refill :: Nil = Enum(5)
    val MainState = RegInit(idle)
    val RadomLine = LFSR.io.rand(AssoWidth,0) // 取模，Assonum正好2的幂次，保留低位 
    val RadomChoose = RegInit(0.U(AssoWidth.W))
    switch(MainState){
        is(idle){
            //接收到读写请求
            //idle -> lookup
            when(io.Cache.Cache.valid & !HitWrite){
                //锁存
                RequestBuffer.op := io.Cache.Cache.op
                RequestBuffer.tag := Intag
                RequestBuffer.group := Ingroup
                RequestBuffer.block := Inblock
                RequestBuffer.wdata := io.Cache.Cache.wdata
                RequestBuffer.wstrb := io.Cache.Cache.wstrb
                MainState := lookup
            }
        }
        is(lookup){
            //lookup->idle
            when(cachehit){
                //read Implement only now
                io.Cache.Cache.rdata := Mux(!RequestBuffer.op,LoadRes,0.U) 
                when(io.Cache.Cache.valid&!HitWrite){
                    RequestBuffer.op := io.Cache.Cache.op
                    RequestBuffer.tag := Intag
                    RequestBuffer.group := Ingroup
                    RequestBuffer.block := Inblock
                    RequestBuffer.wdata := io.Cache.Cache.wdata
                    RequestBuffer.wstrb := io.Cache.Cache.wstrb
                    MainState := lookup
                }.otherwise{
                    MainState := idle
                }   
            }.otherwise{
                MainState := miss
                RadomChoose := RadomLine
            }
        }
        is(miss){
            //cache 缺失，有效且脏的情况下向AXI总线申请写入
            //此时的group是当前cache对应的group，不是读入的group
            //由此得到addr在主存中的块号
            blocknum := get_blocknum_cache(tag(RadomChoose).read(RequestBuffer.group),RequestBuffer.group)
            axivalid := valid(RadomChoose*GroupNum+RequestBuffer.group) & dirty(RadomChoose*GroupNum+RequestBuffer.group)
            //此时需要写如，向总线申请写
            when(axivalid){
                io.Sram.Axi.aw.valid := true.B
                when(io.Sram.Axi.aw.fire){
                    io.Sram.Axi.aw.bits.addr := (blocknum << BlockWidth) | RequestBuffer.block
                    MainState := replace
                }
            }.otherwise{
                //不需要写, 向总线申请读请求,然后跳转到refill
                io.Sram.Axi.ar.valid := true.B
                when(io.Sram.Axi.ar.fire){
                    io.Sram.Axi.ar.bits.addr := ((RequestBuffer.tag<<(GroupWidth)|RequestBuffer.group)<<BlockWidth)|RequestBuffer.block
                    MainState := refill
                }
            }
        }
        is(replace){
            //向总线写如cacheline
            io.Sram.Axi.w.valid := true.B     
            when(io.Sram.Axi.w.fire){
                //写请求类型 3'b000:bytes 3'b001:half 3'b010:word 3'b100:cache line
                //目前总线那边还没有这个接口 2023.2.14
                io.Sram.Axi.w.bits.wtype := "b100".U
                //写数据的data位宽也要该，改称cache line 一行的datawidth (datawith*blocknum)
                io.Sram.Axi.w.bits.data  := 0.U //a cacheline data ***
                io.Sram.Axi.w.bits.strb  := 0.U //invalid
                io.Sram.Axi.ar.valid := true.B
            }
            //写完成，向总线申请读
            when(io.Sram.Axi.b.bits.resp){
                when(io.Sram.Axi.ar.fire){
                    io.Sram.Axi.ar.bits.addr := ((RequestBuffer.tag<<(GroupWidth)|RequestBuffer.group)<<BlockWidth)|RequestBuffer.block
                    MainState := refill
                }
            }
        }
        is(refill){
            io.Sram.Axi.r.ready := true.B
            when(io.Sram.Axi.r.fire){
                io.Sram.Axi.ar.bits.rtype := "b100".U
                mem(RadomChoose)// 替换Mem *****
                when (io.sram.Axi.r.bits.retlast &io.sram.Axi.r.bits.retvalid){
                    MainState := idle
                }
            }
        }
    }
}