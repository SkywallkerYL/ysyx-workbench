package npc

import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline


class ID_EX extends Module{
    val io = IO(new Bundle {
    val pc_i = Input(UInt(parm.PCWIDTH.W))
    val instr_i = Input(UInt(parm.INSTWIDTH.W))//这个instr可能不需要继续传递了
    val rs1_i = Input(UInt(parm.REGWIDTH.W))
    val rs2_i = Input(UInt(parm.REGWIDTH.W))
    val imm_i = Input(UInt(parm.REGWIDTH.W))
    val func3_i = Input(UInt(3.W))
    val opcode_i = Input(UInt(parm.OPCODEWIDTH.W))
    val rdaddr_i = Input(UInt(parm.REGADDRWIDTH.W))
    val rden_i = Input(Bool())

    val pc_o = Output(UInt(parm.PCWIDTH.W))
    val instr_o = Output(UInt(parm.INSTWIDTH.W))
    val rs1_o = Output(UInt(parm.REGWIDTH.W))
    val rs2_o = Output(UInt(parm.REGWIDTH.W))
    val imm_o = Output(UInt(parm.REGWIDTH.W))
    val func3_o = Output(UInt(3.W))
    val opcode_o = Output(UInt(parm.OPCODEWIDTH.W))
    val rdaddr_o = Output(UInt(parm.REGADDRWIDTH.W))
    val rden_o = Output(Bool())
  })
  io.pc_o := RegNext(io.pc_i,parm.INITIAL_PC.U(parm.PCWIDTH.W))
  io.instr_o := RegNext(io.instr_i,0.U(parm.INSTWIDTH.W))
  io.rs1_o :=  RegNext(io.rs1_i,0.U(parm.REGWIDTH.W))
  io.rs2_o :=  RegNext(io.rs2_i,0.U(parm.REGWIDTH.W))
  io.imm_o :=  RegNext(io.imm_i,0.U(parm.REGWIDTH.W))
  io.func3_o :=  RegNext(io.func3_i,0.U(3.W))
  io.opcode_o :=  RegNext(io.opcode_i,0.U(parm.OPCODEWIDTH.W))
  io.rdaddr_o :=  RegNext(io.rdaddr_i,0.U(parm.REGADDRWIDTH.W))
  io.rden_o := RegNext(io.rden_i,0.B)
  
}