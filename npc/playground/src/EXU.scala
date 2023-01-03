package npc

import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline
/*
class  ALU (val width : Int = 64) extends Module{
    val io = IO(new Bundle{
        val a = Input(UInt(width.W))
        val b = Input(UInt(width.W))
        val func3 = Input(UInt(3.W))
        val res = Output(UInt(width.W))
    })
    io.res := 0.U
    switch(io.func3){
        is("b000".U) {io.res := io.a+io.b}
        is("b001".U) {io.res := io.a-io.b}
        is("b010".U) {io.res := ~io.a}
        is("b011".U) {io.res := io.a&io.b}
        is("b100".U) {io.res := io.a|io.b}
        is("b101".U) {io.res := io.a^io.b}
        is("b110".U) {io.res := io.a<=io.b}
        is("b111".U) {io.res := io.a===io.b}
    }
}
*/


class EX extends Bundle{
    //val pc = Output(UInt(parm.PCWIDTH.W))
    //val instr = Output(UInt(parm.INSTWIDTH.W))//这个instr可能不需要继续传递了
    //val rs1 = Output(UInt(parm.REGWIDTH.W))
    val rs2 = Output(UInt(parm.REGWIDTH.W))
    //val imm = Output(UInt(parm.REGWIDTH.W))
    val alures = Output(UInt(parm.REGWIDTH.W))
    //val func3 = Output(UInt(3.W))
    //val opcode = Output(UInt(parm.OPCODEWIDTH.W))
    val rddata = Output(UInt(parm.REGADDRWIDTH.W))
    val rdaddr = Output(UInt(parm.REGADDRWIDTH.W))
    val rden = Output(Bool())
}


class EXU extends Module{
    val io = IO(new Bundle {
    val pc_i = Input(UInt(parm.PCWIDTH.W))
    val instr_i = Input(UInt(parm.INSTWIDTH.W))
    val id = Flipped(new IDEX)
    //val rs1_i = Input(UInt(parm.REGWIDTH.W))
    //val rs2_i = Input(UInt(parm.REGWIDTH.W))
    //val imm_i = Input(UInt(parm.REGWIDTH.W))
    //val func3_i = Input(UInt(3.W))
    //val opcode_i = Input(UInt(parm.OPCODEWIDTH.W))
    //val rdaddr_i = Input(UInt(parm.REGADDRWIDTH.W))
    //val rden_i = Input(Bool())
    val pc_o = Output(UInt(parm.PCWIDTH.W))
    val instr_o = Output(UInt(parm.INSTWIDTH.W))
    //val expres = Output(UInt(parm.REGWIDTH.W))
    val ex =new EX
    //val rddata = Output(UInt(parm.REGWIDTH.W))//按理说rddata不应该在这里，目前是三级流水，暂且这样
    //val rs2_o = Output(UInt(parm.REGWIDTH.W))
    //val imm_o = Output(UInt(parm.REGWIDTH.W))
    //val func3_o = Output(UInt(3.W))
    //val opcode_o = Output(UInt(parm.OPCODEWIDTH.W))
    //val rdaddr_o = Output(UInt(parm.REGADDRWIDTH.W))
    //val rden_o = Output(Bool())
  })
  io.pc_o := io.pc_i
  io.instr_o := io.instr_i
  io.ex.rs2 := io.id.rs2
  io.ex.rdaddr := io.id.rdaddr
  io.ex.rden := io.id.rden
  //val alu = Module (new ALU(parm.REGWIDTH))
  //alu.io.func3 := io.func3_i 
  io.ex.alures := 0.U
  //val src1 = Wire(UInt(parm.REGWIDTH.W))
  //val src2 = Wire(UInt(parm.REGWIDTH.W))

  //alu.io.a := src1
  //alu.io.b := src2

  //src1 := 0.U
  //src2 := 0.U
  io.ex.rddata := 0.U
  /*-----------------------ALU---------------------*/
  val src1 = io.id.AluOp.rd1
  val src2 = io.id.AluOp.rd2
  val op = io.id.AluOp.op
  val shamt = src2(4,0)
  val AluRes = MuxLookup(op, src1+src2,Seq(
    OpType.ADD -> (src1+src2)
  ))
  io.ex.rddata:= AluRes
  /*
  switch(io.opcode_i){
    is(parm.INST_ADDI.U) {
        src1 := io.rs1_i
        src2 := io.imm_i
        io.rddata := io.expres
    }
    is(parm.INST_EBREAK.U) {
        src1 := 0.U
        src2 := 0.U
        io.rddata := io.expres
    }
  }
  */

}