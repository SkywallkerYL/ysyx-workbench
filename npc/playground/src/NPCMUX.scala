package npc

import chisel3._
import chisel3.util._

class NPCMUX extends Module{
    val io = IO(new Bundle {
      //val resetflag = Input(Bool())
      val jal = Input(UInt(OpJType.OPJNUMWIDTH.W))
      //val PcRegPc = Input(UInt(parm.PCWIDTH.W))
      val IdPc    = Input(UInt(parm.PCWIDTH.W))
      val imm = Input(UInt(parm.REGWIDTH.W))
      val rs1 = Input(UInt(parm.REGWIDTH.W))
      val ecallpc = Input(UInt(parm.PCWIDTH.W))
      val mretpc = Input(UInt(parm.PCWIDTH.W))
      //val NPC = Output(UInt(parm.PCWIDTH.W))
      val NOP = Output(Bool())
      //between pcreg
      val RegPc = Flipped((new Pcreg2Npc))//Decoupled
      val NPC   = (((new Npc2Pcreg)))
      val NPCId = ((new Npc2Idu))
      
  })
  //val resetflag = io.PcRegPc===0.U
  //val regpc = Mux(resetflag,parm.INITIAL_PC.U,io.PcRegPc)
  val pc_4 = io.RegPc.RegPc + 4.U
  val jalpc  = io.IdPc + io.imm.asUInt
  val jalrpc = (io.imm.asUInt + io.rs1)&(~ (1.U(parm.REGWIDTH.W)))
  val jumppc = MuxLookup(io.jal,pc_4,Seq(
    0.U -> pc_4   ,
    1.U -> jalpc  ,
    2.U -> jalrpc ,
    3.U -> jalpc  ,
    4.U -> io.ecallpc,
    5.U -> io.mretpc
  ))
  io.NOP := io.jal=/=0.U
  //io.NPC := Mux(io.NOP,jumppc,pc_4)
  io.NPC.npc := Mux(io.NOP,jumppc,pc_4)
  io.NPCId.NextPc := io.NPC.npc
  //io.NPC := Mux(io.resetflag,0.U,)
}