package  npc

import chisel3._
import chisel3.util._
import chisel3.dontTouch
trait  CacheParmX {
    val AddrWidth = parm.REGWIDTH // Cache接受的地址数据位宽
    val DataWidth  : Int =  8 //1 Bytes
    val BlockWidth : Int =  3 // 数据区大小，2^BlockWidth B
    val BlockNum   = scala.math.pow(2,BlockWidth).toInt
    val SizeWidth  : Int =  8 // Cache 大小   2^sizewidth Bytes(data is 1 Bytes)
    //这里别把概念高混淆了 group是 组数，即划分成多少个组
    //asso 是一个组内有多少行，即2^s路组相连
    //hit 是根据是否属于当前的组，然后依次比较内部的行 
    //即一个地址确定的映射到某一个组，组内可能是任意的行 
    val AssoWidth  : Int =  2 // 组相连内部行数 2^cacheasso assowitdth should > 0
    val AssoNum    = scala.math.pow(2,AssoWidth).toInt
    val GroupWidth = SizeWidth - AssoWidth - BlockWidth // 组数2^group
    val GroupNum   = scala.math.pow(2,GroupWidth).toInt
    val LineWidth  = SizeWidth - BlockWidth
    val NumEntries = scala.math.pow(2,LineWidth).toInt
    val TagWidth   = AddrWidth - GroupWidth -BlockWidth
    
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
        return (addr & (groupmask)) >> BlockWidth
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
        //return (tag<<(GroupWidth+BlockWidth))|(group<<BlockWidth)
        return Cat(tag,group) << BlockWidth
    }

}
object CacheParmX extends CacheParmX{}

class CacheIOX extends Bundle{
    val valid = Input(Bool()) // require is valid
    val op    = Input(Bool()) // 1:WRITE 0:READ
    val addr  = Input(UInt(parm.REGWIDTH.W))
    val wdata = Input(UInt(parm.REGWIDTH.W))
    val wstrb = Input(UInt(parm.BYTEWIDTH.W))

    val addrok = Output(Bool())//addr_ok  r:addr is received w:addr and data is received
    val dataok = Output(Bool())//data_ok  r:data back        w:data is finished writen 
    val rdata = Output(UInt(parm.REGWIDTH.W))
    
}
class myLFSRX(increment : Bool = true.B) extends Module{
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
class CpuCacheX(Icache : Boolean = false) extends Module with CacheParmX{
    val io = IO(new Bundle{
        val Cache = Flipped(new Cpu2Cache) 
        val Sram  = new Cache2Sram
    })
    val mem = (Seq.fill(AssoNum*BlockNum)(SyncReadMem(GroupNum,UInt(DataWidth.W))))
    //tag 实例化Assonum块 深度为Groupnum 的宽度为
    val tag = Seq.fill(AssoNum)(SyncReadMem(GroupNum,UInt(TagWidth.W)))
    //容量小的用Reg实现//还是有点多，用Mem
    //val valid = Seq.fill(AssoNum)(SyncReadMem(GroupNum,Bool()))
    val valid = RegInit(VecInit(Seq.fill(AssoNum*GroupNum)((false.B))))
    val dirty = RegInit(VecInit(Seq.fill(AssoNum*GroupNum)((false.B))))
    //Look Up| Hit Write | Replace | Refill//对Cache的4种操作
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
    val hitway = Wire(UInt(AssoWidth.W))
    hitway := 0.U
    val useblock = Wire(UInt(BlockWidth.W))
    useblock := 0.U
    val writeblock = Wire(UInt(BlockWidth.W))
    writeblock := RequestBufferblock
    val right =  Wire(UInt((BlockWidth+1).W))
    right := writeblock+&(parm.REGWIDTH/DataWidth).U
    val usegroup = dontTouch(Wire(UInt(GroupWidth.W)))
    usegroup := RequestBuffergroup
    //同样的tag 也不能一直读 // 用于取出当前组所有的行用于tag进行比较
    val rdTag = Wire(Vec(AssoNum,UInt(TagWidth.W)))
    for (i <- 0 until AssoNum){
        rdTag(i) := 0.U
    }
    for (i <- 0 until AssoNum){
        when(rdTag(i) === RequestBuffertag &&valid((RequestBuffergroup*AssoNum.U)+i.U)){
            hit(i) := true.B
            hitway := i.U
        }
    }
    val BlockChoose = dontTouch(Wire(Vec(BlockNum,Bool())))
    for (i <- 0 until BlockNum) {
        BlockChoose(i) := (i.U>=writeblock) && (i.U<(right))
    }
    val rdData  = Seq.fill(AssoNum)(Wire(Vec(BlockNum,UInt(DataWidth.W))))
    for(i <- 0 until AssoNum){
        for(j <- 0 until BlockNum){
            rdData(i)(j) := 0.U//mem(i*AssoNum+j).read(usegroup)
        }
    }
    //以选中的起始地址开始的64位数据
    //记录选中的行
    val RadomChoose = RegInit(0.U(AssoWidth.W))
    val usechoose = Wire(UInt(AssoWidth.W))
    usechoose := RadomChoose
    val ChooseAsso = Wire(Vec(AssoNum,Bool()))
    for(i <- 0 until AssoNum){
        ChooseAsso(i) := usechoose === i.U
    }
    val blocknum = Wire(UInt((parm.REGWIDTH).W))
    blocknum := 0.U
    val cachehit = hit.asUInt.orR

    val axivalid = Wire(Bool())
    axivalid := false.B
    val idle :: lookup :: miss :: replace :: refill :: Nil = Enum(5)
    val MainState = RegInit(idle)
    val lfsr = Module(new myLFSRX)
    val RadomLine = lfsr.io.out(AssoWidth-1,0) // 取模，Assonum正好2的幂次，保留低位 
    val ramrdata = Wire(UInt((BlockNum*DataWidth).W))
    ramrdata := io.Sram.Axi.r.bits.data << (writeblock*DataWidth.U)
    //val ramrdata = io.Sram.Axi.r.bits.data
    val lineData = Wire(UInt((BlockNum*DataWidth).W))
    lineData := RequestBufferwdata << (writeblock*DataWidth.U)
    val linemask = Wire(UInt((BlockNum).W))
    linemask := RequestBufferwstrb << writeblock
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
                //取tag lookup 态用取出的数据现场判断cachehit

            }.otherwise{
                MainState := idle
            }
        }
        is(lookup){
            for(i <- 0 until AssoNum){
                rdTag(i) := tag(i).read(usegroup)
            }
            //确认读操作，提前一周期发送读数据请求
            when(!RequestBufferop){
                for(i <- 0 until AssoNum){
                    for(j <- 0 until BlockNum){
                        rdData(i)(j) := mem(i*AssoNum+j).read(usegroup)
                    }
                }
            }
            //lookup->idle
            when(cachehit){
                when(!RequestBufferop){
                    io.Cache.Cache.dataok := true.B
                    for(i <- 0 until AssoNum ){
                        when(hit(i)){
                            if(Icache) printf(p"hitway=${i} group=${RequestBuffergroup} tag=${Hexadecimal(rdTag(i))} ramrdata=${Hexadecimal(io.Cache.Cache.rdata)} \n")
                            io.Cache.Cache.rdata  := ((rdData(i).asUInt)>>(RequestBufferblock*DataWidth.U))(parm.REGWIDTH-1,0)//LoadRes(i).asUInt
                            //io.Cache.Cache.dataok := RegNext(true.B)
                        }
                    }
                }.otherwise{
                    //这里不需要写如tag
                    //writeblock := RequestBufferblock
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
                    valid(RequestBuffergroup*AssoNum.U+hitway):= true.B
                    dirty(RequestBuffergroup*AssoNum.U+hitway):= true.B
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

                usechoose := RadomLine
                RadomChoose := RadomLine
            }
        }
        is(miss){
            //cache 缺失，有效且脏的情况下向AXI总线申请写入
            //此时的group是当前cache对应的group，不是读入的group
            //由此得到addr在主存中的块号
            usechoose := RadomChoose
            axivalid := valid(RequestBuffergroup*AssoNum.U+RadomChoose) & dirty(RequestBuffergroup*AssoNum.U+RadomChoose)
            //此时需要写回，向总线申请写
            when(axivalid){
                io.Sram.Axi.aw.valid := true.B
                when(io.Sram.Axi.aw.fire){
                    for (i <- 0 until AssoNum){
                        when(ChooseAsso(i)){
                            //rdTag(i) := tag(i).read(usegroup)
                            blocknum := get_blocknum_cache(tag(i).read(usegroup),RequestBuffergroup)
                        }
                    }
                    io.Sram.Axi.aw.bits.addr := (blocknum) 
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
                    //提前一周期拿data数据

                }
            }.otherwise{
                //不需要写回
                //如果是读请求，则向总线申请fill 如果是写入，则直接写如
                when(!RequestBufferop){
                    io.Sram.Axi.ar.valid := true.B
                    when(io.Sram.Axi.ar.fire){
                        //group要移回去，并且屏蔽block位，这样子才能读入整行
                        //printf(p"with:${GroupWidth} groupnum:${GroupNum} tag:${Hexadecimal(RequestBuffertag)} addr: ${Hexadecimal(io.Sram.Axi.ar.bits.addr)}\n")
                        io.Sram.Axi.ar.bits.addr := ((RequestBuffertag<<((BlockWidth+GroupWidth).U)|(RequestBuffergroup<<(BlockWidth).U)))
                        io.Sram.Axi.ar.bits.len  := (BlockNum/(AddrWidth/DataWidth)).U-1.U
                        RequestBufferblock := 0.U
                        io.Sram.Axi.ar.bits.size := "b11".U
                        MainState := refill
                    }.otherwise{
                        MainState := miss
                    }
                }.otherwise{
                    //writeblock := RequestBufferblock
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
                    valid(RequestBuffergroup*AssoNum.U+usechoose):= true.B
                    dirty(RequestBuffergroup*AssoNum.U+usechoose):= true.B
                    io.Cache.Cache.dataok := true.B
                    MainState := idle
                }
            }
        }
        is(replace){
            //向总线写回cacheline
            io.Sram.Axi.w.valid := true.B  
            for(i <- 0 until AssoNum){
                for(j <- 0 until BlockNum){
                    rdData(i)(j) := mem(i*AssoNum+j).read(usegroup)
                }
            }
            when(io.Sram.Axi.w.fire){
                //写数据的data位宽也要该，改称cache line 一行的datawidth (datawith*blocknum)
                //一次写一个data 宽的
                for(i <- 0 until AssoNum ){
                    when(ChooseAsso(i)){
                        io.Sram.Axi.w.bits.data  := ((rdData(i).asUInt)>>(RequestBufferblock*DataWidth.U))(parm.REGWIDTH-1,0)//LoadRes(i).asUInt    //a cacheline data ***
                    }
                }
                //一次data
                io.Sram.Axi.w.bits.strb  := "xff".U //invalid
                //给ram last信号指示写回数据发送完成
                io.Sram.Axi.w.bits.last := RequestBufferblock === (BlockNum-parm.REGWIDTH/DataWidth).U
                when(io.Sram.Axi.w.bits.last){
                    //写完成，向总线申请读//更新Dirty 和valid 返回Miss
                    valid(RequestBuffergroup*AssoNum.U+usechoose):= true.B
                    dirty(RequestBuffergroup*AssoNum.U+usechoose):= false.B
                    useblock := RequestBufferblockraw
                    RequestBufferblock := RequestBufferblockraw
                    MainState := miss
                }.otherwise{
                    useblock := RequestBufferblock + (parm.REGWIDTH/DataWidth).U
                    usegroup := RequestBuffergroup
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
                        if(Icache)printf("/*******write********/\n")
                        if(Icache)printf(p"choose=${j} group=${RequestBuffergroup} tag=${Hexadecimal(RequestBuffertag)} ramrdata=${Hexadecimal(ramrdata)} \n")
                        tag(j).write(RequestBuffergroup,RequestBuffertag)
                        for (i <- 0 until BlockNum){
                            when(BlockChoose(i)){
                                val writedata = (ramrdata >> (i*DataWidth))(DataWidth-1,0)
                                //printf(p"buffer=${RequestBufferblock} block= ${writeblock} ramrdata=${Hexadecimal(writedata)} \n")
                                mem(j*AssoNum+i).write(RequestBuffergroup,(ramrdata >> (i*DataWidth))(DataWidth-1,0))
                            }
                        }
                    }   
                }        
                when (io.Sram.Axi.r.bits.last){
                    useblock := RequestBufferblockraw
                    usegroup := RequestBuffergroup
                    MainState := lookup
                    valid(RequestBuffergroup*AssoNum.U+usechoose):= true.B
                    dirty(RequestBuffergroup*AssoNum.U+usechoose):= false.B
                    RequestBufferblock := RequestBufferblockraw
                }.otherwise{
                    RequestBufferblock := RequestBufferblock+(parm.REGWIDTH/DataWidth).U
                    MainState := refill
                }
            }.otherwise{
                MainState:=refill
            }
        }
    }
}