package npc

import chisel3._
import chisel3.util._

trait  CacheParm {
    val AddrWidth = parm.REGWIDTH // Cache接受的地址数据位宽
    val DataWidth  : Int =  8 //1 Bytes
    val BlockWidth : Int =  4 // 数据区大小，2^BlockWidth B
    val BlockNum   = scala.math.pow(BlockWidth,2).toInt
    val SizeWidth  : Int = 14 // Cache 大小   2^sizewidth Bytes(data is 1 Bytes)
    val AssoWidth  : Int =  2 // 组相连内部组数 2^cacheasso
    val AssoNum    = scala.math.pow(AssoWidth,2).toInt
    val GroupWidth = SizeWidth - AssoWidth - BlockWidth // 组数2^group
    val GroupNum   = scala.math.pow(GroupWidth,2).toInt
    val LineWidth  = SizeWidth - BlockWidth
    val NumEntries = scala.math.pow(LineWidth,2).toInt
    val TagWidth   = AddrWidth - GroupWidth
    
    //func
    def mask_with_len(x : Long):UInt = {
        return ((1.U<<(x.U))-1.U)
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
object CacheParm extends CacheParm{}

class CacheIO extends Bundle{
    val valid = Input(Bool()) // require is valid
    val op    = Input(Bool()) // 1:WRITE 0:READ
    val addr  = Input(UInt(parm.REGWIDTH.W))
    val wdata = Input(UInt(parm.REGWIDTH.W))
    val wstrb = Input(UInt(parm.BYTEWIDTH.W))

    val addrok = Output(Bool())//addr_ok  r:addr is received w:addr and data is received
    val dataok = Output(Bool())//data_ok  r:data back        w:data is finished writen 
    val rdata = Output(UInt(parm.REGWIDTH.W))
    
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
    val mem = Seq.fill(CacheParm.AssoNum)((SyncReadMem(CacheParm.GroupNum*CacheParm.BlockNum,UInt(DataWidth.W))))
    //tag 实例化Assonum块 深度为Groupnum 的宽度为
    val tag = Seq.fill(CacheParm.AssoNum)((SyncReadMem(CacheParm.GroupNum,UInt(TagWidth.W))))
    //val mem = Vec(GroupNum,Vec(AssoNum,SyncReadMem(BlockNum,UInt(DataWidth.W))))
    //容量小的用Reg实现
    val valid = RegInit(VecInit(Seq.fill(CacheParm.AssoNum*CacheParm.GroupNum)((false.B))))
    val dirty = RegInit(VecInit(Seq.fill(CacheParm.AssoNum*CacheParm.GroupNum)((false.B))))
    //Look Up| Hit Write | Replace | Refill//对Cache的4种操作
    //Request Buffer : 锁存 op addr wstrb wdata
    //Tag Compare
    //Data Select 
    //Miss Buffer : 记录缺失cache行准备要替换的路信息，以及从总线返回的数据
    //Lsfr :随即替换
    //Write Buffer : 用于hit write 存写入的way 和block index等信息
    //Main state machine
    //default out
    io.Cache.Cache.addrok:=0.U
    io.Cache.Cache.dataok:=0.U
    io.Cache.Cache.rdata :=0.U
    io.Sram.Axi.ar.valid := false.B
    io.Sram.Axi.ar.bits.addr := 0.U
    io.Sram.Axi.ar.bits.len  := 0.U
    io.Sram.Axi.ar.bits.size := "b010".U //4 bytes
    io.Sram.Axi.ar.bits.burst:= "b01".U //INCR
    io.Sram.Axi.r.ready := false.B
    io.Sram.Axi.aw.valid := false.B
    io.Sram.Axi.aw.bits.addr := 0.U
    io.Sram.Axi.aw.bits.len  := 0.U
    io.Sram.Axi.aw.bits.size := "b010".U
    io.Sram.Axi.aw.bits.burst:= "b01".U 
    io.Sram.Axi.w.valid := false.B
    io.Sram.Axi.w.bits.data := 0.U
    io.Sram.Axi.w.bits.strb := 0.U
    io.Sram.Axi.w.bits.last := false.B
    io.Sram.Axi.b.ready := false.B
    val Intag = get_tag(io.Cache.Cache.addr)
    val Ingroup = get_group(io.Cache.Cache.addr)
    val Inblock = get_block(io.Cache.Cache.addr)
    val RequestBuffer = RegInit(0.U.asTypeOf(new RequestBufferIO))
    val RequestBufferop    = RegInit(0.U(1.W))
    val RequestBuffertag   = RegInit(0.U(CacheParm.TagWidth.W))
    val RequestBuffergroup = RegInit(0.U(CacheParm.GroupWidth.W))
    val RequestBufferblock = RegInit(0.U(CacheParm.BlockWidth.W))
    val RequestBufferblockraw = RegInit(0.U(CacheParm.BlockWidth.W))
    val RequestBufferwdata = RegInit(0.U(parm.REGWIDTH.W))
    val RequestBufferwstrb = RegInit(0.U(parm.BYTEWIDTH.W))
    val hit = Wire(Vec(CacheParm.AssoNum,Bool()))
    for (i <- 0 until CacheParm.AssoNum){hit(i):= 0.U}
    val LoadRes = Wire(Vec(parm.REGWIDTH/CacheParm.DataWidth,UInt(CacheParm.DataWidth.W)))
    for (i <- 0 until parm.REGWIDTH/CacheParm.DataWidth){LoadRes(i) := 0.U}
    val hitway = Wire(0.U(AssoNum.W))
    for (i <- 0 until CacheParm.AssoNum){
        when(RequestBuffertag === tag(i).read(RequestBuffergroup)){
            hit(i) := true.B
            hitway := i
            for( j <- 0 until parm.REGWIDTH/CacheParm.DataWidth){
                LoadRes(parm.REGWIDTH/CacheParm.DataWidth-1-j) := mem(i).read(RequestBuffergroup*CacheParm.BlockNum+RequestBufferblock+j)
            }
        }
    }
    val cachehit = hit.asUInt.orR
    val blocknum = Wire(UInt((DataWidth-BlockWidth).W))
    val axivalid = Wire(Bool())
    val idle :: lookup :: miss :: replace :: refill :: Nil = Enum(5)
    val MainState = RegInit(idle)
    val RadomLine = LFSR(CacheParm.AssoWidth,1.U,Some(1)) // 取模，Assonum正好2的幂次，保留低位 
    val RadomChoose = RegInit(0.U(CacheParm.AssoWidth.W))
    switch(MainState){
        is(idle){
            //接收到读写请求
            //idle -> lookup
            when(io.Cache.Cache.valid ){
                //锁存
                RequestBufferop := io.Cache.Cache.op
                RequestBuffertag := Intag
                RequestBuffergroup := Ingroup
                RequestBufferblock := Inblock
                RequestBufferblockraw := Inblock
                RequestBufferwdata := io.Cache.Cache.wdata
                RequestBufferwstrb := io.Cache.Cache.wstrb
                io.Cache.Cache.addrok:= true.B
                MainState := lookup
            }.otherwise{
                MainState := idle
            }
        }
        is(lookup){
            //lookup->idle
            when(cachehit){
                
                when(!RequestBufferop){
                    io.Cache.Cache.rdata  := LoadRes
                    io.Cache.Cache.dataok := true.B
                }.otherwise{
                    for(i <- 0 until parm.REGWIDTH/CacheParm.DataWidth){
                        val writedata = RequestBufferwdata((parm.REGWIDTH/CacheParm.DataWidth-i)*CacheParm.DataWidth-1,(parm.REGWIDTH/CacheParm.DataWidth-1-i)*CacheParm.DataWidth)
                        when(RequestBufferwstrb(parm.REGWIDTH/CacheParm.DataWidth-1-i)){ mem(hitway).write(RequestBuffergroup*CacheParm.BlockNum+RequestBufferblock+i,writedata)}
                    }
                    valid(hitway*CacheParm.GroupNum+RequestBuffergroup):= true.B
                    dirty(hitway*CacheParm.GroupNum+RequestBuffergroup):= true.B
                    io.Cache.Cache.dataok := true.B
                }
                //io.Cache.Cache.rdata  := Mux(!RequestBufferop,LoadRes.asUInt,0.U) 
                //io.Cache.Cache.dataok := Mux(!RequestBufferop,1.U,0.U)
                when(io.Cache.Cache.valid){
                    RequestBufferop := io.Cache.Cache.op
                    RequestBuffertag := Intag
                    RequestBuffergroup := Ingroup
                    RequestBufferblock := Inblock
                    RequestBufferblockraw := Inblock
                    RequestBufferwdata := io.Cache.Cache.wdata
                    RequestBufferwstrb := io.Cache.Cache.wstrb
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
            blocknum := get_blocknum_cache(tag(RadomChoose).read(RequestBuffergroup),RequestBuffergroup)
            axivalid := valid(RadomChoose*CacheParm.GroupNum+RequestBuffergroup) & dirty(RadomChoose*CacheParm.GroupNum+RequestBuffergroup)
            //此时需要写回，向总线申请写
            when(axivalid){
                io.Sram.Axi.aw.valid := true.B
                when(io.Sram.Axi.aw.fire){
                    io.Sram.Axi.aw.bits.addr := (blocknum << CacheParm.BlockWidth) | RequestBufferblock
                    //突发写
                    //一次传的位宽为bits data的位宽 ，分多次把一行cache line的读出去
                    io.Sram.Axi.aw.bits.len := CacheParm.BlockNum/(CacheParm.AddrWidth/CacheParm.DataWidth)-1.U
                    io.Sram.Axi.aw.bits.size:= "b10".U
                    //写的时候要对齐
                    //RequestBufferblock := RequestBufferblock&(~"x3".U(BlockWidth.W))
                    MainState := replace
                }
            }.otherwise{
                //不需要写回
                //如果是读请求，则向总线申请fill 如果是写入，则直接写如
                when(!RequestBufferop){
                    io.Sram.Axi.ar.valid := true.B
                    when(io.Sram.Axi.ar.fire){
                        io.Sram.Axi.ar.bits.addr := ((RequestBuffertag<<(CacheParm.GroupWidth)|RequestBuffergroup)<<BlockWidth)|RequestBufferblock
                        io.Sram.Axi.ar.bits.len  := CacheParm.BlockNum/(CacheParm.AddrWidth/CacheParm.DataWidth)-1.U
                        io.Sram.Axi.aw.bits.size := "b10".U
                        MainState := refill
                    }.otherwise{
                        MainState := miss
                    }
                }.otherwise{
                    for(i <- 0 until parm.REGWIDTH/CacheParm.DataWidth){
                        val writedata = RequestBufferwdata((parm.REGWIDTH/CacheParm.DataWidth-i)*DataWidth-1,(parm.REGWIDTH/CacheParm.DataWidth-1-i)*CacheParm.DataWidth)
                        when(RequestBufferwstrb(parm.REGWIDTH/CacheParm.DataWidth-1-i)){ mem(RadomChoose).write(RequestBuffergroup*CacheParm.BlockNum+RequestBufferblock+i,writedata)}
                    }
                    valid(RadomChoose*CacheParm.GroupNum+RequestBuffergroup):= true.B
                    dirty(RadomChoose*CacheParm.GroupNum+RequestBuffergroup):= true.B
                    io.Cache.Cache.dataok := true.B
                    when(io.Cache.Cache.valid){
                        RequestBufferop := io.Cache.Cache.op
                        RequestBuffertag := Intag
                        RequestBuffergroup := Ingroup
                        RequestBufferblock := Inblock
                        RequestBufferblockraw := Inblock
                        RequestBufferwdata := io.Cache.Cache.wdata
                        RequestBufferwstrb := io.Cache.Cache.wstrb
                        MainState := lookup
                    }.otherwise{
                        MainState := idle
                    } 
                }
            }
        }
        is(replace){
            //向总线写回cacheline
            io.Sram.Axi.w.valid := true.B     
            when(io.Sram.Axi.w.fire){
                //写数据的data位宽也要该，改称cache line 一行的datawidth (datawith*blocknum)
                //一次写一个data 宽的
                io.Sram.Axi.w.bits.data  := LoadRes.asUInt    //a cacheline data ***
                //一次data
                
                io.Sram.Axi.w.bits.strb  := "xff".U //invalid
                //受到ram的last信号
                when(io.Sram.Axi.w.bits.last){
                    //写完成，向总线申请读//更新Dirty 和valid 返回Miss
                    valid(RadomChoose*CacheParm.GroupNum+RequestBuffergroup):= true.B
                    dirty(RadomChoose*CacheParm.GroupNum+RequestBuffergroup):= false.B
                    RequestBufferblock := RequestBufferblockraw
                    MainState := miss
                }.otherwise{
                    RequestBufferblock := RequestBufferblock + (parm.REGWIDTH/CacheParm.DataWidth).U
                    //requestblock 要复原
                    MainState := replace
                }
                //io.Sram.Axi.ar.valid := true.B
            }
        }
        is(refill){
            io.Sram.Axi.r.ready := true.B
            when(io.Sram.Axi.r.fire){
                //io.Sram.Axi.ar.bits.rtype := "b100".U
                //突发读，读入 // 暂时不支持非对齐的访问
                for(i <- 0 until parm.REGWIDTH/CacheParm.DataWidth){
                    val ramrdata = io.Sram.Axi.r.bits.data((parm.REGWIDTH/CacheParm.DataWidth-i)*CacheParm.DataWidth-1,(parm.REGWIDTH/CacheParm.DataWidth-1-i)*CacheParm.DataWidth)
                    mem(RadomChoose).write(RequestBuffergroup*CacheParm.BlockNum+RequestBufferblock+i,ramrdata)
                }              
                when (io.sram.Axi.r.bits.last){
                    MainState := idle
                    valid(RadomChoose*CacheParm.GroupNum+RequestBuffergroup):= true.B
                    dirty(RadomChoose*CacheParm.GroupNum+RequestBuffergroup):= false.B
                    RequestBufferblock := RequestBufferblockraw
                }.otherwise{
                    when(RequestBufferblock === RequestBufferblockraw && !RequestBufferop){
                        io.Cache.Cache.rdata  := LoadRes
                        io.Cache.Cache.dataok := true.B
                    }
                    RequestBufferblock := RequestBufferblock+parm.REGWIDTH/CacheParm.DataWidth.U
                    MainState := refill
                }
            }.otherwise{
                MainState:=refill
            }
        }
    }
}