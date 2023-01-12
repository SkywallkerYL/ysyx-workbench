package npc

import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline

//译码阶段提取立即数 操作类型 两个操作数

class IDU extends Module{
    val io = IO(new Bundle {
    val pc_i = Input(UInt(parm.PCWIDTH.W))
    val instr_i = Input(UInt(parm.INSTWIDTH.W))
    val rs_data1 = Input(UInt(parm.REGWIDTH.W))
    val rs_data2 = Input(UInt(parm.REGWIDTH.W))

    val instr_o = Output(UInt(parm.INSTWIDTH.W))
    val pc_o = Output(UInt(parm.PCWIDTH.W))
    val rs_addr1 = Output(UInt(parm.REGADDRWIDTH.W))
    val rs_addr2 = Output(UInt(parm.REGADDRWIDTH.W))
    val idex = new IDEX
    //val rd_addr = Output(UInt(parm.REGADDRWIDTH.W))
    //val rd_en = Output(Bool())
    //val imm = Output(UInt(parm.REGWIDTH.W))
    //val rs1 = Output(UInt(parm.REGWIDTH.W))
    //val rs2 = Output(UInt(parm.REGWIDTH.W))
    //val opcode = Output(UInt(parm.OPCODEWIDTH.W))
    //val func3 = Output(UInt(3.W))
    //val func7 = Output(UInt(7.W))
    val ebreak = Output(Bool())
    //val wflag = Output(Bool())
    //val rflag = Output(Bool())
    val instrnoimpl = Output(Bool())
    val jal    = Output(UInt(OpJType.OPJNUMWIDTH.W))
  })
    io.instrnoimpl := false.B;
    io.instr_o := io.instr_i
    io.pc_o := io.pc_i
    io.jal := 0.U
    io.rs_addr1 := io.instr_i(19,15)
    io.rs_addr2 := io.instr_i(24,20)
    io.idex.rdaddr := io.instr_i(11,7)
    io.idex.rs1 := io.rs_data1
    io.idex.rs2 := io.rs_data2
    io.idex.rflag := 0.U
    io.idex.wflag := 0.U
    io.idex.wmask := 0.U(parm.BYTEWIDTH.W)
    io.idex.choose := 0.U
    //io.func7 := io.instr_i(31,25)
    //io.func3 := io.instr_i(14,12)
    //io.opcode := io.instr_i(6,0)
    io.idex.rden := 1.U
    val sign = io.instr_i(31)
    
    val I_imm = Fill((parm.REGWIDTH-12),sign) ## (io.instr_i(31,20))
    val U_imm = Fill((parm.REGWIDTH-32),sign) ## io.instr_i(31,12) ## Fill((12),0.U)
    val J_imm = Fill((parm.REGWIDTH-20),sign) ## io.instr_i(19,12) ## io.instr_i(20) ## io.instr_i(30,21) ## 0.U
    val B_imm = Fill((parm.REGWIDTH-12),sign) ## io.instr_i(7) ## io.instr_i(30,25) ## io.instr_i(11,8) ##0.U
    val S_imm = Fill((parm.REGWIDTH-12),sign) ## io.instr_i(31,25) ## io.instr_i(11,7)

    //default
    io.idex.AluOp.rd1 := 0.U
    io.idex.AluOp.rd2 := 0.U
    io.idex.AluOp.op  := 0.U
    io.idex.imm := 0.U
    val DecodeRes = ListLookup(io.instr_i,InstrTable.Default,InstrTable.InstrMap)
    val InstType = DecodeRes(InstrTable.InstrT)
    io.idex.AluOp.op := DecodeRes(InstrTable.OpT)
    //注意每一条指令对内存 以及寄存器堆的读写使能 这样子在执行别的指令时，其他的结果仍然是被计算的，这样子就会造成对内存
    //或者寄存器的错误写入和读取 对寄存器的写默认拉高 对内存的读写默认拉低
    switch(InstType){
        is(InstrType.I){
            //printf(p"TYPE=${(InstType)} \n")
            io.idex.imm := I_imm
            io.idex.AluOp.rd1 := io.rs_data1
            io.idex.AluOp.rd2 := I_imm
            val stype = DecodeRes(InstrTable.InstrN)
            val lsuflag = MuxLookup(stype, "b0000_1_0_0_0000_0000".U(15.W),Seq(
                                        //choose_rden_wflag_rflag_wmask
                OpIType.LD ->"b0001_1_0_1_0000_0000".U(15.W)
            ))
            io.idex.wflag := lsuflag(9)
            io.idex.rflag := lsuflag(8)
            io.idex.wmask := lsuflag(7,0)
            io.idex.rden := lsuflag(10)
            io.idex.choose := lsuflag(14,11)
            when(DecodeRes(InstrTable.InstrN) === OpIType.JALR)
            {
                io.idex.AluOp.rd1 := io.pc_i
                io.idex.AluOp.rd2 := 4.U
                //io.idex.AluOp.op  := OpType.ADD
                io.jal := 2.U
            }
        }
        is(InstrType.R){
            //io.idex.imm := R_imm
            io.idex.AluOp.rd1 := io.rs_data1
            io.idex.AluOp.rd2 := io.rs_data2
        }
        is(InstrType.U){
            io.idex.imm := U_imm
            io.idex.AluOp.rd1 := U_imm
            val Uty = DecodeRes(InstrTable.InstrN)
            // 0->lui->0.U  1->auipc->pc
            io.idex.AluOp.rd2 := Mux(Uty(0),io.pc_i,0.U)
            //io.idex.AluOp.op := OpType.ADD
        }
        is(InstrType.J){
            io.idex.imm := J_imm
            io.idex.AluOp.rd1 := io.pc_i
            io.idex.AluOp.rd2 := 4.U
            //io.idex.AluOp.op  := OpType.ADD
            io.jal := 1.U
        }
        is (InstrType.S){
            io.idex.imm := S_imm
            io.idex.AluOp.rd1 := io.rs_data1
            io.idex.AluOp.rd2 := S_imm.asUInt
            //io.idex.AluOp.op  := OpType.ADD
            val stype = DecodeRes(InstrTable.InstrN)
            val lsuflag = MuxLookup(stype, "b0000_0_0_0_0000_0000".U(15.W),Seq(
                                        //choose_rden_wflag_rflag_wmask
                OpSType.SD ->"b0000_0_1_0_1111_1111".U(15.W)
            ))
            io.idex.wflag := lsuflag(9)
            io.idex.rflag := lsuflag(8)
            io.idex.wmask := lsuflag(7,0)
            io.idex.rden := lsuflag(10)
            io.idex.choose := lsuflag(14,11)
         }
        is (InstrType.BAD){
            io.instrnoimpl := true.B 
            io.idex.rden := 0.U
        }
    }
    io.ebreak := Mux(io.instr_i === "x00100073".U,1.B,0.B)

}