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
    val extagmask  = Wire(UInt(AddrWidth.W))
    extagmask := mask_with_len(GroupWidth+BlockWidth)
    //tagmask = ~extagmask(REGWIDTH.W)
    val blockmask = Wire(UInt(AddrWidth.W))
    blockmask := mask_with_len(BlockWidth)
    val groupmask = Wire(UInt(AddrWidth.W))
    groupmask := mask_with_len(GroupWidth) << BlockWidth
    def get_tag(addr : UInt) : UInt = {
        val local = addr
        return (local & (~(extagmask)))>>(GroupWidth+BlockWidth).U
    }
    def get_group(addr : UInt) :UInt = {
        return (addr & (groupmask))
    }
    def get_block(addr : UInt) : UInt = {
        return (addr & (blockmask))
    } 
    //获取在主存中的块号
    def get_blocknum(addr : UInt): UInt = {
        return (addr & (~(blockmask)))>>BlockWidth
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
class myLFSR(increment : Bool = true.B) extends Module{
    val io = IO(new Bundle{
        val out = Output(UInt(16.W))
    })
    val width = 16
    val lfsr = RegInit(1.U(width.W))
    when(increment){
        lfsr := Cat(lfsr(0)^lfsr(2)^lfsr(3)^lfsr(5),lfsr(width-1,1))
    }
    io.out := lfsr
}
class CpuCache extends Module with CacheParm{
    val io = IO(new Bundle{
        val Cache = Flipped(new Cpu2Cache) 
        val Sram  = new Cache2Sram
    })
    //Cache Initial
    //容量大的采用mem实现
    //mem 实例化Assonum*BlockNum块 深度为GroupNum 的宽度为datawidth的Ram
    //SyncReadMem 是同步读写  会被综合成Mem，设置读地址的下一个周期才能拿到数据
    //Mem 是同步写，异步读，会被综合成触发器，
    //不同的block例化到同一个mem里是不合理的，因为会在一个周期内收集好几个Block的数据，这样的话，在同一个
    //会导致在同一个周期内，对不同的地址进行读写，这样子就不符实际，因此代码也会出现难以理解的行为
    val mem = (Seq.fill(AssoNum*BlockNum)(SyncReadMem(GroupNum,UInt(DataWidth.W))))
    //tag 实例化Assonum块 深度为Groupnum 的宽度为
    val tag = Seq.fill(AssoNum)(SyncReadMem(GroupNum,UInt(TagWidth.W)))
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
    //default out
    io.Cache.Cache.addrok:=0.U
    io.Cache.Cache.dataok:=0.U
    io.Cache.Cache.rdata :=0.U
    io.Sram.Axi.ar.valid := false.B
    io.Sram.Axi.ar.bits.addr := 0.U
    io.Sram.Axi.ar.bits.len  := 0.U
    io.Sram.Axi.ar.bits.size := "b011".U //8 bytes  regwidth
    io.Sram.Axi.ar.bits.burst:= "b01".U //INCR
    io.Sram.Axi.r.ready := false.B
    io.Sram.Axi.aw.valid := false.B
    io.Sram.Axi.aw.bits.addr := 0.U
    io.Sram.Axi.aw.bits.len  := 0.U
    io.Sram.Axi.aw.bits.size := "b011".U
    io.Sram.Axi.aw.bits.burst:= "b01".U 
    io.Sram.Axi.w.valid := false.B
    io.Sram.Axi.w.bits.data := 0.U
    io.Sram.Axi.w.bits.strb := 0.U
    io.Sram.Axi.w.bits.last := false.B
    io.Sram.Axi.b.ready := false.B
    val Intag = get_tag(io.Cache.Cache.addr)
    val Ingroup = get_group(io.Cache.Cache.addr)
    val Inblock = get_block(io.Cache.Cache.addr)
    val RegDataOk = RegInit(0.U(1.W))
    val RequestBufferop    = RegInit(0.U(1.W))
    val RequestBuffertag   = RegInit(0.U(TagWidth.W))
    val RequestBuffergroup = RegInit(0.U(GroupWidth.W))
    val RequestBufferblock = RegInit(0.U(BlockWidth.W))
    val RequestBufferblockraw = RegInit(0.U(BlockWidth.W))
    val RequestBufferwdata = RegInit(0.U(parm.REGWIDTH.W))
    val RequestBufferwstrb = RegInit(0.U(parm.BYTEWIDTH.W))
    val hit = Wire(Vec(AssoNum,Bool()))
    for (i <- 0 until AssoNum){hit(i):= 0.U}
    //val LoadRes = Seq.fill(AssoNum)(Wire(Vec(parm.REGWIDTH/DataWidth,UInt(DataWidth.W))))
    //for (j <- 0 until AssoNum)
      //  for (i <- 0 until parm.REGWIDTH/DataWidth){LoadRes(j)(i) := 0.U}
    val hitway = Wire(UInt(AssoWidth.W))
    hitway := 0.U
    //val mask   = Wire(Vec())
    //val datavalid = RegInit(0.U(1.W))
    val useblock = Wire(UInt(BlockWidth.W))
    useblock := 0.U
    val usegroup = Wire(UInt(BlockWidth.W))
    usegroup := 0.U
    for (i <- 0 until AssoNum){
        when(RequestBuffertag === tag(i).read(usegroup)&&valid((i*GroupNum).U+RequestBuffergroup)){
            hit(i) := true.B
            hitway := i.U
        }
    }
    val BlockChoose = Wire(Vec(BlockNum,Bool()))
    for (i <- 0 until BlockNum) {
        BlockChoose(i) := (i.U>=useblock) & (i.U<useblock+(parm.REGWIDTH/DataWidth).U)
    }
    val rdData  = Seq.fill(AssoNum)(Wire(Vec(BlockNum,UInt(DataWidth.W))))
    for(i <- 0 until AssoNum){
        for(j <- 0 until BlockNum){
            rdData(i)(BlockNum-1-j) := mem(i*AssoNum+j).read(usegroup)
        }
    }
    //以选中的起始地址开始的64位数据
    val RadomChoose = RegInit(0.U(AssoWidth.W))
    val ChooseAsso = Wire(Vec(AssoNum,Bool()))
    for(i <- 0 until AssoNum){
        ChooseAsso(i) := RadomChoose === i.U
    }
    val blocknum = Wire(UInt((DataWidth-BlockWidth).W))
    blocknum := 0.U
    for (i <- 0 until AssoNum){
        when(ChooseAsso(i)){
            blocknum := get_blocknum_cache(tag(i).read(usegroup),RequestBuffergroup)
        }   
    }
    val cachehit = hit.asUInt.orR

    val axivalid = Wire(Bool())
    axivalid := false.B
    val idle :: lookup :: miss :: replace :: refill :: Nil = Enum(5)
    val MainState = RegInit(idle)
    val lfsr = Module(new myLFSR)
    val RadomLine = lfsr.io.out(AssoWidth-1,0) // 取模，Assonum正好2的幂次，保留低位 
    val ramrdata = Wire(UInt((BlockNum*DataWidth).W))
    ramrdata := io.Sram.Axi.r.bits.data << (useblock*DataWidth.U)
    //val ramrdata = io.Sram.Axi.r.bits.data
    val lineData = Wire(UInt((BlockNum*DataWidth).W))
    lineData := RequestBufferwdata << (useblock*DataWidth.U)
    val linemask = Wire(UInt((BlockNum).W))
    linemask := RequestBufferwstrb << useblock
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
                useblock := Inblock//这个周期就发送读请求，下个周期能拿到mem中的数据
                usegroup := Ingroup
                MainState := lookup
            }.otherwise{
                MainState := idle
            }
        }
        is(lookup){
            //lookup->idle
            when(cachehit){
                when(!RequestBufferop){
                    io.Cache.Cache.dataok := true.B
                    for(i <- 0 until AssoNum ){
                        when(hit(i)){
                            io.Cache.Cache.rdata  := ((rdData(i).asUInt)>>(useblock*DataWidth.U))(parm.REGWIDTH-1,0)//LoadRes(i).asUInt
                            //io.Cache.Cache.dataok := RegNext(true.B)
                        }
                    }
                }.otherwise{
                    useblock := RequestBufferblock
                    for (j <- 0 until AssoNum){
                        when(hit(j)) {
                            for (i <- 0 until BlockNum){
                                when(BlockChoose(i)){
                                    when(linemask(i)){
                                        mem(j*AssoNum+i).write(RequestBuffergroup,(lineData>>(i*DataWidth))(DataWidth-1,0))
                                    }
                                }
                            }
                        }
                    }
                    valid(hitway*GroupNum.U+RequestBuffergroup):= true.B
                    dirty(hitway*GroupNum.U+RequestBuffergroup):= true.B
                    io.Cache.Cache.dataok := true.B
                }
                //io.Cache.Cache.rdata  := Mux(!RequestBufferop,LoadRes.asUInt,0.U) 
                //io.Cache.Cache.dataok := Mux(!RequestBufferop,1.U,0.U)
                //不能连续取，因为发送ok信号后，才会更新地址，因此直接条会lookup的话，拿到的还是旧地址
                MainState := idle
            }.otherwise{
                useblock := RequestBufferblock
                usegroup := RequestBuffergroup
                MainState := miss
                RadomChoose := RadomLine
            }
        }
        is(miss){
            //cache 缺失，有效且脏的情况下向AXI总线申请写入
            //此时的group是当前cache对应的group，不是读入的group
            //由此得到addr在主存中的块号
            useblock := RequestBufferblock
            usegroup := RequestBuffergroup
            axivalid := valid(RadomChoose*CacheParm.GroupNum.U+RequestBuffergroup) & dirty(RadomChoose*CacheParm.GroupNum.U+RequestBuffergroup)
            //此时需要写回，向总线申请写
            when(axivalid){
                io.Sram.Axi.aw.valid := true.B
                when(io.Sram.Axi.aw.fire){
                    io.Sram.Axi.aw.bits.addr := (blocknum <<BlockWidth) 
                    //突发写
                    RequestBufferblock := 0.U //地址对齐到cacheline行的首地址//block归0
                    //一次传的位宽为bits data的位宽 ，分多次把一行cache line的读出去
                    io.Sram.Axi.aw.bits.len := (BlockNum/(AddrWidth/DataWidth)).U-1.U
                    io.Sram.Axi.aw.bits.size:= "b11".U
                    //写的时候要对齐
                    //replace 要用到Loadres 读地址提前一周期送进去
                    useblock := RequestBufferblock
                    usegroup := RequestBuffergroup
                    //RequestBufferblock := RequestBufferblock&(~"x3".U(BlockWidth.W))
                    MainState := replace
                }
            }.otherwise{
                //不需要写回
                //如果是读请求，则向总线申请fill 如果是写入，则直接写如
                when(!RequestBufferop){
                    io.Sram.Axi.ar.valid := true.B
                    when(io.Sram.Axi.ar.fire){
                        io.Sram.Axi.ar.bits.addr := ((RequestBuffertag<<(GroupWidth.U)|RequestBuffergroup)<<BlockWidth.U)
                        io.Sram.Axi.ar.bits.len  := (BlockNum/(AddrWidth/DataWidth)).U-1.U
                        RequestBufferblock := 0.U
                        io.Sram.Axi.ar.bits.size := "b11".U
                        MainState := refill
                    }.otherwise{
                        MainState := miss
                    }
                }.otherwise{
                    for(j <- 0 until AssoNum){
                        //val writedata = RequestBufferwdata
                        when(ChooseAsso(j)){
                            tag(j).write(RequestBuffergroup,RequestBuffertag)
                            for (i <- 0 until BlockNum){
                                when(BlockChoose(i)){
                                    when(linemask(i)){
                                        mem(j*AssoNum+i).write(RequestBuffergroup,(lineData>>(i*DataWidth))(DataWidth-1,0))    
                                    }
                                }
                            }
                        }
                    }
                    valid(RadomChoose*GroupNum.U+RequestBuffergroup):= true.B
                    dirty(RadomChoose*GroupNum.U+RequestBuffergroup):= true.B
                    io.Cache.Cache.dataok := true.B
                    MainState := idle
                }
            }
        }
        is(replace){
            //向总线写回cacheline
            io.Sram.Axi.w.valid := true.B  
            useblock := RequestBufferblock
            usegroup := RequestBuffergroup   
            when(io.Sram.Axi.w.fire){
                //写数据的data位宽也要该，改称cache line 一行的datawidth (datawith*blocknum)
                //一次写一个data 宽的
                for(i <- 0 until AssoNum ){
                    when(ChooseAsso(i)){
                        io.Sram.Axi.w.bits.data  := ((rdData(i).asUInt)>>(useblock*DataWidth.U))(parm.REGWIDTH-1,0)//LoadRes(i).asUInt    //a cacheline data ***
                    }
                }
                //一次data
                io.Sram.Axi.w.bits.strb  := "xff".U //invalid
                //给ram last信号指示写回数据发送完成
                io.Sram.Axi.w.bits.last := RequestBufferblock === (BlockNum-parm.REGWIDTH/DataWidth).U
                when(io.Sram.Axi.w.bits.last){
                    //写完成，向总线申请读//更新Dirty 和valid 返回Miss
                    valid(RadomChoose*GroupNum.U+RequestBuffergroup):= true.B
                    dirty(RadomChoose*GroupNum.U+RequestBuffergroup):= false.B
                    useblock := RequestBufferblockraw
                    RequestBufferblock := RequestBufferblockraw
                    MainState := miss
                }.otherwise{
                    useblock := RequestBufferblock + (parm.REGWIDTH/DataWidth).U
                    RequestBufferblock := RequestBufferblock + (parm.REGWIDTH/DataWidth).U
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
                for(j <- 0 until AssoNum){
                    //val ramrdata = io.Sram.Axi.r.bits.data
                    when(ChooseAsso(j)){
                        tag(j).write(RequestBuffergroup,RequestBuffertag)
                        for (i <- 0 until BlockNum){
                            when(BlockChoose(i)){
                                printf("ramrdata=${Hexadecimal(ramrdata >> (i*DataWidth))(DataWidth-1,0)} \n")
                                mem(j*AssoNum+i).write(RequestBuffergroup,(ramrdata >> (i*DataWidth))(DataWidth-1,0))
                            }
                        }
                        //for(i <- 0 until parm.REGWIDTH/DataWidth){
                            //val ramrdata = io.Sram.Axi.r.bits.data((parm.REGWIDTH/DataWidth-i)*DataWidth-1,(parm.REGWIDTH/DataWidth-1-i)*DataWidth)
                            //这样子写verilator产生的C代码会触发 munmap_chunk(): invalid pointer
                            //val ramrdata = io.Sram.Axi.r.bits.data((i+1)*DataWidth-1,(i)*DataWidth)
                        //val memDataIn(RadomChoose) := ramrdata
                            //printf(p"ramrdata=${Hexadecimal(ramrdata)} \n")
                            //ramrdata := ramrdata >> DataWidth
                            //mem(j+RequestBufferblock+i).write(RequestBuffergroup*BlockNum.U,ReadAxiData(i))
                        //}      
                    }   
                }        
                when (io.Sram.Axi.r.bits.last){
                    useblock := RequestBufferblockraw
                    usegroup := RequestBuffergroup
                    MainState := lookup
                    valid(RadomChoose*GroupNum.U+RequestBuffergroup):= true.B
                    dirty(RadomChoose*GroupNum.U+RequestBuffergroup):= false.B
                    RequestBufferblock := RequestBufferblockraw
                }.otherwise{
                    //when(RequestBufferblock === RequestBufferblockraw && !RequestBufferop){
                      // io.Cache.Cache.rdata  := io.Sram.Axi.r.bits.data
                       //io.Cache.Cache.dataok := true.B
                    //}
                    useblock := RequestBufferblock+(parm.REGWIDTH/DataWidth).U
                    RequestBufferblock := RequestBufferblock+(parm.REGWIDTH/DataWidth).U
                    MainState := refill
                }
            }.otherwise{

                MainState:=refill
            }
        }
    }
}