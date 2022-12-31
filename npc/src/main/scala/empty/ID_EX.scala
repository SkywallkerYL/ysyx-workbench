package empty

import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline


class ID_EX extends Module{
    val id_ex = IO(new Bundle {
    val pc_i = Input(UInt(parm.PCWIDTH.W))
    val instr_i = Input(UInt(parm.INSTWIDTH.W))
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
  id_ex.pc_o := RegNext(id_ex.pc_i,parm.INITIAL_PC.U(parm.PCWIDTH.W))
  id_ex.instr_o := RegNext(id_ex.instr_i,0.U(parm.INSTWIDTH.W))
  id_ex.rs1_o :=  RegNext(id_ex.rs1_i,0.U(parm.REGWIDTH.W))
  id_ex.rs2_o :=  RegNext(id_ex.rs2_i,0.U(parm.REGWIDTH.W))
  id_ex.imm_o :=  RegNext(id_ex.imm_i,0.U(parm.REGWIDTH.W))
  id_ex.func3_o :=  RegNext(id_ex.func3_i,0.U(3.W))
  id_ex.opcode_o :=  RegNext(id_ex.opcode_i,0.U(parm.OPCODEWIDTH.W))
  id_ex.rdaddr_o :=  RegNext(id_ex.rdaddr_i,0.U(parm.REGADDRWIDTH.W))
  id_ex.rden_o := RegNext(id_ex.rden_i,0.B)
  
}