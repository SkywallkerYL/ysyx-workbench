package npc

import chisel3._
import chisel3.util._



class IFU extends Module{
    val io = IO(new Bundle {
    val PcIf  = Flipped((new Pc2Ifu))
    val ReadyID = Flipped(new Idu2Ifu)
    val ReadyPC = new Ifu2PcReg
    val instr_i = Input(UInt(parm.INSTWIDTH.W))
    val IFID  = new Ifu2Idu
    //val IFNPC = new Ifu2Npc
    val Cache = new Cpu2Cache 


    //val IFRAM = new Ifu2Sram  //Flipped((new Axi4LiteRAMIO))

  })
  io.ReadyPC.ready := io.ReadyID.ready
  //io.IFID.inst := io.instr_i
  io.IFID.pc   := io.PcIf.pc
  //READ
  /*
  val readWait :: read :: Nil = Enum(2)
  val ReadState = RegInit(readWait)
  //Intial
  io.IFRAM.Axi.ar.valid := false.B
  //io.IFRAM.Axi.r.bits.resp = "b00".U
  //io.IFRAM.Axi.r.bits.data := 0.U
  io.IFRAM.Axi.ar.bits.addr := io.PcIf.pc
  io.IFRAM.Axi.r.ready := false.B
  val FetchInst = Wire(UInt(parm.INSTWIDTH.W))
  FetchInst := 0.U
  //state transfer
  //val RegRaddr = RegInit(0.U(AxiParm.AxiAddrWidth.W))
  switch(ReadState){
    is(readWait){
      io.IFRAM.Axi.ar.valid := true.B
      io.IFRAM.Axi.r.ready  := false.B
      //fire = ready & valid
      when(io.IFRAM.Axi.ar.fire){
        io.IFRAM.Axi.ar.bits.addr := io.PcIf.pc
        //RegRaddr        := io.IFRAM.Axi.ar.bits.addr
        ReadState       := read
      }
    }
    is(read){
      io.IFRAM.Axi.ar.valid := false.B
      io.IFRAM.Axi.r.ready := true.B
      when(io.IFRAM.Axi.r.fire){
        FetchInst := io.IFRAM.Axi.r.bits.data(31,0)
        ReadState := readWait
      }
    }
  }
  */
  val FetchInst = Mux(io.Cache.Cache.dataok,io.Cache.Cache.rdata(31,0),0.U)
  if(parm.MODE == "single"){
    io.IFID.inst := io.instr_i
    io.IFID.instvalid := true.B
    //io.IFNPC.instvalid := true.B
    //io.instvalid :=true.B
  }
  else {
    io.IFID.inst := FetchInst
    io.IFID.instvalid := io.Cache.Cache.dataok
    //io.instvalid := io.Cache.Cache.dataok
  }

  io.Cache.Cache.valid := io.PcIf.pcvalid
  io.Cache.Cache.op    := false.B
  io.Cache.Cache.addr  := io.PcIf.pc
  io.Cache.Cache.wdata := 0.U
  io.Cache.Cache.wstrb := 0.U
  //write no 
  /*
  io.IFRAM.Axi.aw.valid := false.B
  io.IFRAM.Axi.aw.bits.addr := 0.U
  io.IFRAM.Axi.w.valid := false.B
  io.IFRAM.Axi.w.bits.data := 0.U
  io.IFRAM.Axi.w.bits.strb := 0.U
  io.IFRAM.Axi.b.ready := false.B
  */
}