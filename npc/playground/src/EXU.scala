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
    val rddata = Output(UInt(parm.REGWIDTH.W))
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
    val ls = new EXLSIO

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


  io.ls.wflag := io.id.wflag
  io.ls.rflag := io.id.rflag
  io.ls.writedata := io.id.rs2
  io.ls.wmask := io.id.wmask
  io.ls.choose := io.id.choose
  io.ls.lsumask := io.id.lsumask
  io.ls.CsrWb.CsrAddr :=  io.id.CsrWb.CsrAddr
  io.ls.CsrWb.CSRs    := io.id.CsrWb.CSRs

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
  //val shamt = src2(4,0)
  val AluRes = MuxLookup(op, src1+src2,Seq(
    OpType.ADD  -> (src1+src2),
    //OpType.ADDW -> func.SignExt(func.Mask((src1+src2),"x0000ffff".U),32),
    OpType.SUB  -> (src1-src2),
    OpType.MUL  -> (src1*src2),
    OpType.DIVS -> (src1.asSInt/src2.asSInt).asUInt,
    OpType.DIV  -> (src1.asUInt/src2.asUInt).asUInt,
    OpType.REMS -> (src1.asSInt%src2.asSInt).asUInt,
    OpType.REM  -> (src1.asUInt%src2.asUInt).asUInt,
    OpType.SLTU -> (src1.asUInt < src2.asUInt),
    OpType.SLT  -> (src1.asSInt < src2.asSInt),
    OpType.SRA  -> (src1.asSInt >> src2.asUInt).asUInt,
    OpType.SRL  -> (src1.asUInt >> src2.asUInt).asUInt,
    OpType.SLL  -> (src1 << src2(5,0)),
    OpType.AND  -> (src1 & src2),
    OpType.OR   -> (src1 | src2),
    OpType.XOR  -> (src1 ^ src2)
  ))
  val maskRes = MuxLookup(io.id.alumask, AluRes,Seq(
    "b11111".U   -> AluRes,
    "b10111".U   ->func.SignExt(func.Mask((AluRes),"x00000000ffffffff".U),32),
    "b10011".U   ->func.SignExt(func.Mask((AluRes),"x000000000000ffff".U),16),
    "b10001".U   ->func.SignExt(func.Mask((AluRes),"x00000000000000ff".U),8),
    "b00111".U   ->func.UsignExt(func.Mask((AluRes),"x00000000ffffffff".U),32),
    "b00011".U   ->func.UsignExt(func.Mask((AluRes),"x000000000000ffff".U),16),
    "b00001".U   ->func.UsignExt(func.Mask((AluRes),"x00000000000000ff".U),8)
    //OpType.ADDW -> func.SignExt(func.Mask((src1+src2),"x0000ffff".U),32),
  ))
  //printf(p"AluRes=0x${Hexadecimal(AluRes)} wflag:  ${io.id.wflag}\n")
  io.ex.rddata:= maskRes
  io.ex.alures:= maskRes
  io.ls.writeaddr :=  maskRes
  io.ls.readaddr := maskRes
  io.ls.CsrWb.CSR.mepc := Mux(io.id.CsrExuChoose(0),maskRes,io.id.CsrWb.CSR.mepc)
  io.ls.CsrWb.CSR.mcause := Mux(io.id.CsrExuChoose(1),maskRes,io.id.CsrWb.CSR.mcause)
  io.ls.CsrWb.CSR.mtvec := Mux(io.id.CsrExuChoose(2),maskRes,io.id.CsrWb.CSR.mtvec)
  io.ls.CsrWb.CSR.mstatus := Mux(io.id.CsrExuChoose(3),maskRes,io.id.CsrWb.CSR.mstatus)
}