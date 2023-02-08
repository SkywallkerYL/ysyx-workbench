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
    if(parm.DPI){
        val Ram = Module(new LSUDPI) 
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
    io.Sram.r.bits.resp := "b00".U
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
    io.Sram.a.ready := false.B
    RegWAddr = RegInit(0.U(AxiParm.AxiAddrWidth.W))
    if(parm.DPI){
        Ram.io.waddr := RegWAddr
    }
    switch(writeState){
        is(WriteWait){
            io.Sram.a.ready := true.B
            io.Sram.aw.ready := false.B
            io.Sram.b.valid := false.B
            when(io.Sram.a.fire){
                WriteState := write
                RegWAddr := io.Sram.a.bits.addr
            }
        }
        is(write){
            io.Sram.a.ready := false.B
            io.Sram.aw.ready := true.B
            io.Sram.b.valid := false.B
            when(io.Sram.aw.fire){
                WriteState := writeWait
                Ram.io.wdata := io.Sram.aw.bits.data
                Ram.io.wmask := io.Sram.aw.bits.strb
            }
        }
        is(writeResp){
            io.Sram.a.ready := false.B
            io.Sram.aw.ready := false.B
            io.Sram.b.valid := true.B
            when(io.Sram.b.fire){
                WriteState := writeWait
                io.Sram.b.bits.resp = "b00".U
            }
        }
    }

}
