package npc

import chisel3._
import chisel3.util._

class PC_REG extends Module{
    val io = IO(new Bundle {
    
    val NPC = Flipped(((new Npc2Pcreg)))//Decoupled
    val LSU = Flipped(new Lsu2pc)
    val EXU = Flipped(new Exu2pc)
    val RegPc = (new Pcreg2Npc)
    val PcIf  = (new Pc2Ifu)
    val ReadyIF = Flipped(new Ifu2PcReg)
  })
  val reg = RegInit(parm.INITIAL_PC.U(parm.PCWIDTH.W))
  reg := Mux(io.ReadyIF.ready,io.NPC.npc,reg)
  io.RegPc.RegPc := reg
  io.PcIf.pc := reg
  //ifu 取完一条指令后，通知pc_reg 更新pc，即dataok的时候，此时，正好下一个周期新的Pc进来
  /*
  //pcvalid 要等到ifu取道指令   lsu空闲才能拉高
  io.PcIf.pcvalid := false.B
  val swait :: waitU :: valid ::Nil = Enum(3)
  val state = RegInit(valid)
  switch(state){
    is(swait){
      when(io.NPC.pcvalid){
        //io.LSU.Lsuvalid&io.EXU.Exuvalid
        //io.ReadyIF.ready
        when(io.ReadyIF.ready){
          state := valid
        }.otherwise{
          state := waitU
        }
      }
    }
    is(waitU){
      //io.LSU.Lsuvalid&io.EXU.Exuvalid
      //io.ReadyIF.ready
      when(io.ReadyIF.ready){
        state := valid
      }
    }
    is(valid){
      io.PcIf.pcvalid := true.B
      state := swait
    }
  }
  */
  //io.PcIf.pcvalid := RegNext(io.NPC.pcvalid,true.B)
}