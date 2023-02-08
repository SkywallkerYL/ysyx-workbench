package npc

import chisel3._
import chisel3.util._



class IFU extends Module{
    val io = IO(new Bundle {
    val PcIf  = Flipped((new Pc2Ifu))
    //val instr_i = Input(UInt(parm.INSTWIDTH.W))
    val IFID  = new Ifu2Idu
    val IFRAM = Flipped((new Axi4LiteRAMIO))
  })
  //io.IFID.inst := io.instr_i
  io.IFID.pc   := io.PcIf.pc
  //READ
  val readWait :: read :: Nil = Enum(2)
  val ReadState = RegInit(readWait)
  //Intial
  io.IFRAM.ar.valid := false.B
  //io.IFRAM.r.bits.resp = "b00".U
  io.IFRAM.r.bits.data := 0.U
  io.IFRAM.r.ready := false.B
  val FetchInst = Wire(UInt(parm.INSTWIDTH.W))
  //state transfer
  //val RegRaddr = RegInit(0.U(AxiParm.AxiAddrWidth.W))
  switch(ReadState){
    is(readWait){
      io.IFRAM.ar.valid := true.B
      io.IFRAM.r.ready  := false.B
      //fire = ready & valid
      when(io.IFRAM.ar.fire){
        io.IFRAM.ar.bits.addr := io.PcIf.pc
        //RegRaddr        := io.IFRAM.ar.bits.addr
        ReadState       := read
      }
    }
    is(read){
      io.IFRAM.ar.valid := false.B
      io.IFRAM.r.ready := true.B
      when(io.IFRAM.r.fire){
        FetchInst := io.IFRAM.r.bits.data(31,0)
        ReadState := readWait
      }
    }
  }
  io.IFID.inst := Mux(io.IFRAM.r.fire,FetchInst,0.U)
  //write no 
  io.IFRAM.aw.valid := false.B
  io.IFRAM.aw.bits..addr := 0.U
  io.IFRAM.w.valid := false.B
  io.IFRAM.w.bits.data := 0.U
  io.IFRAM.w.bits.strb := 0.U
  io.IFRAM.b.ready := false.B
}