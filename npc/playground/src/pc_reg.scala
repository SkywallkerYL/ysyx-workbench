package npc

import chisel3._
import chisel3.util._

class PC_REG extends Module{
    val io = IO(new Bundle {
    
    val NPC = Flipped(((new Npc2Pcreg)))//Decoupled
    val LSU = Flipped(new Lsu2pc)
    val RegPc = (new Pcreg2Npc)
    val PcIf  = (new Pc2Ifu)
  })
  val reg = RegInit(parm.INITIAL_PC.U(parm.PCWIDTH.W))
  reg := Mux(io.NPC.pcvalid,io.NPC.npc,reg)
  io.RegPc.RegPc := reg
  io.PcIf.pc := reg
  //pcvalid 要等到ifu取道指令   lsu空闲才能拉高
  io.PcIf.pcvalid := false.B
  val swait :: waitlsu :: valid ::Nil = Enum(3)
  val state = RegInit(swait)
  switch(state){
    is(swait){
      when(io.NPC.pcvalid){
        when(io.LSU.Lsuvalid){
          state := valid
        }.otherwise{
          state := waitlsu
        }
      }
    }
    is(waitlsu){
      when(io.LSU.Lsuvalid){
        state := valid
      }
    }
    is(valid){
      io.PcIf.pcvalid := true.B
    }
  }
  //io.PcIf.pcvalid := RegNext(io.NPC.pcvalid,true.B)
}