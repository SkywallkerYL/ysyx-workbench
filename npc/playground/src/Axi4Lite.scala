package npc

import chisel3._
import chisel3.util._

trait AxiParm{
    val AxiDataWidth = parm.REGWIDTH
    val AxiMaskWidth = AxiDataWidth/8
    val AxiAddrWidth = parm.REGWIDTH//log2Ceil(parm.MSIZE/4)-1
}

object AxiParm extends AxiParm {}

//write addr
class Axi4LiteWA extends Bundle with AxiParm{
    val addr = Output(UInt(AxiAddrWidth.W))
}
//write data and mask
class Axi4LiteWD extends Bundle with AxiParm{
    val data = Output(UInt(AxiDataWidth.W))
    val strb = Output(UInt(AxiMaskWidth.W))   
}
//write resp
//intro the master the write operation is success
//example out of bound
class Axi4LiteWR extends Bundle with AxiParm{
    val resp = Output(UInt(2.W))
} 
//read addr
class Axi4LiteRA extends Bundle with AxiParm{
    val addr = Output(UInt(AxiAddrWidth.W))
}
//read resp and data
class Axi4LiteRD extends Bundle with AxiParm{
    val data = Output(UInt(AxiDataWidth.W))
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
    io.Sram.r.valid := false.B
    //state transfer
    val RegRaddr = RegInit(0.U(AxiParm.AxiAddrWidth.W))
    if(parm.DPI){
        Ram.io.raddr := RegRaddr
    }
    switch(ReadState){
        is(readWait){
            io.Sram.ar.ready := true.B
            io.Sram.r.valid := false.B
            //fire = ready & valid
            when(io.Sram.ar.fire){
                RegRaddr        := io.Sram.ar.bits.addr
                ReadState       := read
            }
        }
        is(read){
            io.Sram.r.valid := true.B
            io.Sram.ar.ready := false.B
            when(io.Sram.r.fire){
                if(parm.DPI){
                   io.Sram.r.bits.data := Ram.io.rdata
                   //io.Sram.r.bits.resp := "b00".U //No implement 
                   //The out of bound case will be handled in Cpp
                }
                ReadState := readWait
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
    if(parm.DPI){
        Ram.io.waddr := RegWAddr
    }
    switch(WriteState){
        is(writeWait){
            io.Sram.aw.ready := true.B
            io.Sram.w.ready := false.B
            io.Sram.b.valid := false.B
            when(io.Sram.aw.fire){
                WriteState := write
                RegWAddr := io.Sram.aw.bits.addr
            }
        }
        is(write){
            io.Sram.aw.ready := false.B
            io.Sram.w.ready := true.B
            io.Sram.b.valid := false.B
            when(io.Sram.w.fire){
                WriteState := writeWait
                Ram.io.wdata := io.Sram.w.bits.data
                Ram.io.wmask := io.Sram.w.bits.strb
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
    //r
    io.sram.Axi.r.ready := io.ifu.Axi.r.ready || io.lsu.Axi.r.ready
    io.ifu.Axi.r.valid := io.ifu.Axi.r.ready && io.sram.Axi.r.valid &&(!io.lsu.Axi.r.ready)
    io.lsu.Axi.r.valid := io.lsu.Axi.r.ready && io.sram.Axi.r.valid //&&(!io.ifu.Axi.r.ready)
    io.ifu.Axi.r.bits.data := io.sram.Axi.r.bits.data
    io.lsu.Axi.r.bits.data := io.sram.Axi.r.bits.data
    //actually write signal from ifu is always false
    // 
    //aw
    io.sram.Axi.aw.valid := io.ifu.Axi.aw.valid || io.lsu.Axi.aw.valid
    io.ifu.Axi.aw.ready := io.ifu.Axi.aw.valid && io.sram.Axi.aw.ready&&(!io.lsu.Axi.aw.valid)
    io.lsu.Axi.aw.ready := io.lsu.Axi.aw.valid && io.sram.Axi.aw.ready 
    io.sram.Axi.aw.bits.addr := Mux(io.lsu.Axi.aw.ready,io.lsu.Axi.aw.bits.addr,
    Mux(io.ifu.Axi.aw.ready,io.ifu.Axi.aw.bits.addr,0.U))

    //w
    io.sram.Axi.w.valid := io.ifu.Axi.w.valid || io.lsu.Axi.w.valid
    io.ifu.Axi.w.ready := io.ifu.Axi.w.valid && io.sram.Axi.w.ready&&(!io.lsu.Axi.w.valid)
    io.lsu.Axi.w.ready := io.lsu.Axi.w.valid && io.sram.Axi.w.ready 
    io.sram.Axi.w.bits.data := Mux(io.lsu.Axi.w.ready,io.lsu.Axi.w.bits.data,
    Mux(io.ifu.Axi.w.ready,io.ifu.Axi.w.bits.data,0.U))
    io.sram.Axi.w.bits.strb := Mux(io.lsu.Axi.w.ready,io.lsu.Axi.w.bits.strb,
    Mux(io.ifu.Axi.w.ready,io.ifu.Axi.w.bits.strb,0.U))
    //b
    io.sram.Axi.b.ready := io.ifu.Axi.b.ready || io.lsu.Axi.b.ready
    io.ifu.Axi.b.valid := io.ifu.Axi.b.ready && io.sram.Axi.b.valid&&(!io.lsu.Axi.b.ready)
    io.lsu.Axi.b.valid := io.lsu.Axi.b.ready && io.sram.Axi.b.valid 
    io.ifu.Axi.b.bits.resp := io.sram.Axi.b.bits.resp
    io.lsu.Axi.b.bits.resp := io.sram.Axi.b.bits.resp

}
