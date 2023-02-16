package npc

import chisel3._
import chisel3.util._

trait AxiParm{
    val AxiDataWidth = parm.REGWIDTH
    val AxiMaskWidth = AxiDataWidth/8
    val AxiAddrWidth = parm.REGWIDTH//log2Ceil(parm.MSIZE/4)-1
    val AxiAxLENWidth = 8
    val AxiAxSizeWidth = 3
    val AxiAxBurstWidth = 2
}

object AxiParm extends AxiParm {}
//add burst in addr    add last in data
//write addr
class Axi4LiteWA extends Bundle with AxiParm{
    val addr    = Output(UInt(AxiAddrWidth.W))
    val len   = Output(UInt(AxiAxLENWidth.W))
    val size  = Output(UInt(AxiAxSizeWidth.W))
    val burst = Output(UInt(AxiAxBurstWidth.W)) 
}
/*
burst
0b00 FIXED      //fifo  addr fix
0b01 INCR       // addr add
0b10 WRAP       // addr add / after highest to lowest
0b11 Reserved
*/
/*
size   : number bytes = 2^size  (1 2 4 8 .... 128)
*/
/*
burst len = len+1
*/
//write data and mask
class Axi4LiteWD extends Bundle with AxiParm{
    val data = Output(UInt(AxiDataWidth.W))
    val strb = Output(UInt(AxiMaskWidth.W))  
    val last = Output(Bool())
    //3'b000:bytes 3'b001:half 3'b010:word 3'b100:cache line
    // if cache line strb is invalid 
}
//write resp
//intro the master the write operation is success
//example out of bound
class Axi4LiteWR extends Bundle with AxiParm{
    val resp = Output(UInt(2.W))
} 
//read addr
class Axi4LiteRA extends Bundle with AxiParm{
    val addr    = Output(UInt(AxiAddrWidth.W))
    val len     = Output(UInt(AxiAxLENWidth.W))
    val size    = Output(UInt(AxiAxSizeWidth.W))
    val burst   = Output(UInt(AxiAxBurstWidth.W)) 
}
//read resp and data
class Axi4LiteRD extends Bundle with AxiParm{
    val data = Output(UInt(AxiDataWidth.W))
    val last = Output(Bool())
    //val resp = Output(UInt(2.W))
}
//SRAM IO for Axi4Lite
class Axi4LiteRAMIO extends Bundle{
    val ar = Flipped(Decoupled(new Axi4LiteRA)) // AR
    val r  = (Decoupled(new Axi4LiteRD)) // R

    val aw = Flipped(Decoupled(new Axi4LiteWA)) // AW
    val w  = Flipped(Decoupled(new Axi4LiteWD)) // W
    val b  = (Decoupled(new Axi4LiteWR)) // B
}
//ready means the master is ready to input
//valid means the slave is output
class Axi4LiteSRAM extends Module{
    val io = IO(new Bundle{
        val Sram = new Axi4LiteRAMIO
        //val wen  = Input(Bool())
    })
    //RAM  replaced by DPI-C
    val Ram = Module(new LSUDPI) 
    if(parm.DPI){
        //val Ram = Module(new LSUDPI) 
        Ram.io.wflag := io.Sram.w.fire
        Ram.io.rflag := io.Sram.r.fire
        Ram.io.raddr := 0.U  
        Ram.io.waddr := 0.U 
        Ram.io.wdata := 0.U 
        Ram.io.wmask := 0.U
    }
    
    //READ
    val readWait :: read :: Nil = Enum(2)
    val ReadState = RegInit(readWait)
    //Intial
    io.Sram.ar.ready := false.B
    //io.Sram.r.bits.resp := "b00".U
    io.Sram.r.bits.data := 0.U
    io.Sram.r.bits.last := false.B
    io.Sram.r.valid := false.B
    //state transfer
    //目前ram仅支持INCR型突发传输  如果是非突发传输，len设置为0，即只传一个数数据
    //并且size设置为 64 或者32
    val RegRaddr = RegInit(0.U(AxiParm.AxiAddrWidth.W))
    val RegRlen  = RegInit(0.U(AxiParm.AxiAxLENWidth.W))
    val RegSize  = RegInit(0.U(AxiParm.AxiAxSizeWidth.W))
    val RegRbusrt= RegInit(0.U(AxiParm.AxiAxBurstWidth.W))
    if(parm.DPI){
        Ram.io.raddr := RegRaddr
    }
    switch(ReadState){
        is(readWait){
            io.Sram.ar.ready := true.B
            io.Sram.r.valid := false.B
            io.Sram.r.bits.last  := false.B
            //fire = ready & valid
            when(io.Sram.ar.fire){
                RegRaddr        := io.Sram.ar.bits.addr
                RegRlen         := io.Sram.ar.bits.len
                RegRbusrt       := io.Sram.ar.bits.burst
                RegSize         := io.Sram.ar.bits.size
                ReadState       := read
            }
        }
        is(read){
            io.Sram.r.valid := true.B
            io.Sram.ar.ready := false.B
            when(io.Sram.r.fire){
                if(parm.DPI){
                    //dpi 那边最多读64 ,即8字节，因此这里更多的就没实现
                   io.Sram.r.bits.data := MuxLookup(RegSize,Ram.io.rdata,Seq(
                    "b000".U -> Ram.io.rdata(7,0),
                    "b001".U -> Ram.io.rdata(15,0),
                    "b010".U -> Ram.io.rdata(31,0),
                    "b011".U -> Ram.io.rdata(63,0)
                   ))
                    //Ram.io.rdata
                }
                //根据是否为突发传输决定状态跳转的情况
                when(RegRlen=/=0.U){
                    RegRlen := RegRlen-1.U
                    //手册 the increment value depends on the size of the transfer
                    val addradd = MuxLookup(RegSize,4.U,Seq(
                    "b000".U -> 1.U,
                    "b001".U -> 2.U,
                    "b010".U -> 4.U,
                    "b011".U -> 8.U
                   ))
                    RegRaddr := RegRaddr + addradd
                }.otherwise{
                   io.Sram.r.bits.last := true.B 
                   ReadState := readWait
                }
            }
        }
    }
    //WRITE
    val writeWait :: write :: writeResp :: Nil = Enum(3)
    val WriteState = RegInit(writeWait)
    //Initial
    io.Sram.b.bits.resp := "b00".U
    io.Sram.b.valid := false.B
    io.Sram.aw.ready := false.B    
    io.Sram.w.ready := false.B
    val RegWAddr = RegInit(0.U(AxiParm.AxiAddrWidth.W))
    val RegWlen  = RegInit(0.U(AxiParm.AxiAxLENWidth.W))
    val RegWsize = RegInit(0.U(AxiParm.AxiAxSizeWidth.W))
    val RegWbusrt= RegInit(0.U(AxiParm.AxiAxBurstWidth.W))
    if(parm.DPI){
        Ram.io.waddr := RegWAddr
    }
    switch(WriteState){
        is(writeWait){
            io.Sram.aw.ready := true.B
            io.Sram.w.ready := false.B
            io.Sram.b.valid := false.B
            //io.Sram.w.bits.last := false.B
            when(io.Sram.aw.fire){
                WriteState := write
                RegWAddr := io.Sram.aw.bits.addr
                RegWlen  := io.Sram.aw.bits.len
                RegWbusrt:= io.Sram.aw.bits.burst
                RegWsize := io.Sram.aw.bits.size
            }
        }
        is(write){
            io.Sram.aw.ready := false.B
            io.Sram.w.ready := true.B
            io.Sram.b.valid := false.B
            when(io.Sram.w.fire){
                //开始写
                //WriteState := writeWait
                //dpi最多实现了64 因此其他的没实现
                Ram.io.wdata := MuxLookup(RegWsize,io.Sram.w.bits.data,Seq(
                    "b000".U -> io.Sram.w.bits.data(7,0),
                    "b001".U -> io.Sram.w.bits.data(15,0),
                    "b010".U -> io.Sram.w.bits.data(31,0),
                    "b011".U -> io.Sram.w.bits.data(63,0)
                ))
                Ram.io.wmask := io.Sram.w.bits.strb
                //INCR 写的时候Burstlength必须小于16
                when(RegWlen=/=0.U){
                    RegWlen := RegWlen - 1.U
                    val waddradd = MuxLookup(RegWsize,4.U,Seq(
                    "b000".U -> 1.U,
                    "b001".U -> 2.U,
                    "b010".U -> 4.U,
                    "b011".U -> 8.U
                   ))
                   RegWAddr := RegWAddr + waddradd
                }.otherwise{
                    //io.Sram.w.bits.last := true.B
                    WriteState := writeResp
                }
            }
        }
        is(writeResp){
            io.Sram.aw.ready := false.B
            io.Sram.w.ready := false.B
            io.Sram.b.valid := true.B
            when(io.Sram.b.fire){
                WriteState := writeWait
                io.Sram.b.bits.resp := "b00".U
            }
        }
    }

}
//Arbiter for IFU and LSU 
// LSU is prior
class RamArbiter extends Module{
    val io = IO(new Bundle{
        val ifu = Flipped(new Ifu2Sram)
        val lsu = Flipped(new Lsu2Sram)
        val sram = new Arb2Sram
    })
    //ar 
    io.sram.Axi.ar.valid := io.ifu.Axi.ar.valid || io.lsu.Axi.ar.valid
    io.ifu.Axi.ar.ready := io.ifu.Axi.ar.valid && io.sram.Axi.ar.ready &&(!io.lsu.Axi.ar.valid)
    io.lsu.Axi.ar.ready := io.lsu.Axi.ar.valid && io.sram.Axi.ar.ready //&&(!io.ifu.Axi.ar.valid)
    io.sram.Axi.ar.bits.addr := Mux(io.lsu.Axi.ar.ready,io.lsu.Axi.ar.bits.addr,
    Mux(io.ifu.Axi.ar.ready,io.ifu.Axi.ar.bits.addr,0.U))
    io.sram.Axi.ar.bits.len := Mux(io.lsu.Axi.ar.ready,io.lsu.Axi.ar.bits.len,
    Mux(io.ifu.Axi.ar.ready,io.ifu.Axi.ar.bits.len,0.U))
    io.sram.Axi.ar.bits.size := Mux(io.lsu.Axi.ar.ready,io.lsu.Axi.ar.bits.size,
    Mux(io.ifu.Axi.ar.ready,io.ifu.Axi.ar.bits.size,"b011".U))
    io.sram.Axi.ar.bits.burst := Mux(io.lsu.Axi.ar.ready,io.lsu.Axi.ar.bits.burst,
    Mux(io.ifu.Axi.ar.ready,io.ifu.Axi.ar.bits.burst,"b01".U))
    
    io.sram.Axi.r.ready := io.ifu.Axi.r.ready || io.lsu.Axi.r.ready
    io.ifu.Axi.r.valid := io.ifu.Axi.r.ready && io.sram.Axi.r.valid &&(!io.lsu.Axi.r.ready)
    io.lsu.Axi.r.valid := io.lsu.Axi.r.ready && io.sram.Axi.r.valid //&&(!io.ifu.Axi.r.ready)
    io.ifu.Axi.r.bits.data := io.sram.Axi.r.bits.data
    io.ifu.Axi.r.bits.last := io.sram.Axi.r.bits.last
    io.lsu.Axi.r.bits.data := io.sram.Axi.r.bits.data
    io.lsu.Axi.r.bits.last := io.sram.Axi.r.bits.last
    //actually write signal from ifu is always false
    // 
    //aw
    io.sram.Axi.aw.valid := io.ifu.Axi.aw.valid || io.lsu.Axi.aw.valid
    io.ifu.Axi.aw.ready := io.ifu.Axi.aw.valid && io.sram.Axi.aw.ready&&(!io.lsu.Axi.aw.valid)
    io.lsu.Axi.aw.ready := io.lsu.Axi.aw.valid && io.sram.Axi.aw.ready 
    io.sram.Axi.aw.bits.addr := Mux(io.lsu.Axi.aw.ready,io.lsu.Axi.aw.bits.addr,
    Mux(io.ifu.Axi.aw.ready,io.ifu.Axi.aw.bits.addr,0.U))
    io.sram.Axi.aw.bits.size := Mux(io.lsu.Axi.aw.ready,io.lsu.Axi.aw.bits.size,
    Mux(io.ifu.Axi.aw.ready,io.ifu.Axi.aw.bits.size,"b011".U))
    io.sram.Axi.aw.bits.len := Mux(io.lsu.Axi.aw.ready,io.lsu.Axi.aw.bits.len,
    Mux(io.ifu.Axi.aw.ready,io.ifu.Axi.aw.bits.len,0.U))
    io.sram.Axi.aw.bits.burst := Mux(io.lsu.Axi.aw.ready,io.lsu.Axi.aw.bits.burst,
    Mux(io.ifu.Axi.aw.ready,io.ifu.Axi.aw.bits.burst,"b01".U))

    //w
    io.sram.Axi.w.valid := io.ifu.Axi.w.valid || io.lsu.Axi.w.valid
    io.ifu.Axi.w.ready := io.ifu.Axi.w.valid && io.sram.Axi.w.ready&&(!io.lsu.Axi.w.valid)
    io.lsu.Axi.w.ready := io.lsu.Axi.w.valid && io.sram.Axi.w.ready 
    io.sram.Axi.w.bits.data := Mux(io.lsu.Axi.w.ready,io.lsu.Axi.w.bits.data,
    Mux(io.ifu.Axi.w.ready,io.ifu.Axi.w.bits.data,0.U))
    io.sram.Axi.w.bits.strb := Mux(io.lsu.Axi.w.ready,io.lsu.Axi.w.bits.strb,
    Mux(io.ifu.Axi.w.ready,io.ifu.Axi.w.bits.strb,0.U))
    io.sram.Axi.w.bits.last := Mux(io.lsu.Axi.w.ready,io.lsu.Axi.w.bits.last,
    Mux(io.ifu.Axi.w.ready,io.ifu.Axi.w.bits.last,0.U))
    //b
    io.sram.Axi.b.ready := io.ifu.Axi.b.ready || io.lsu.Axi.b.ready
    io.ifu.Axi.b.valid := io.ifu.Axi.b.ready && io.sram.Axi.b.valid&&(!io.lsu.Axi.b.ready)
    io.lsu.Axi.b.valid := io.lsu.Axi.b.ready && io.sram.Axi.b.valid 
    io.ifu.Axi.b.bits.resp := io.sram.Axi.b.bits.resp
    io.lsu.Axi.b.bits.resp := io.sram.Axi.b.bits.resp

}
