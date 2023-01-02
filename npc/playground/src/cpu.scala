package npc

import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline

class  RiscvCpu extends Module{
    val io = IO(new Bundle{
        val halt = Output(Bool())
        //val pc = Input(UInt(parm.PCWIDTH.W))
        //val instr = Input(UInt(parm.INSTWIDTH.W)) // instr暂时拉到顶层
        //val PcRegOut = Output(UInt(parm.PCWIDTH.W)) //根据pc_reg的out来取指
        //val res = Output(UInt(parm.REGWIDTH.W))
    })
    val
    val instr 
    //chisel里变量还未命名好像不能直接用
    val PcReg = Module(new PC_REG()) 
    val IfU = Module(new IFU())
    val If_Id = Module(new IF_ID())
    val Regfile = Module(new RegFile)
    val Id = Module(new IDU())
    val Id_Ex = Module(new ID_EX())
    val exu = Module(new EXU())
//pc   
    val PcRegOut = Wire(UInt(parm.PCWIDTH.W))
    //val PcReg = Module(new PC_REG()) 
    PcReg.io.pc_i := PcRegOut + "x4".U
    PcRegOut := PcReg.io.pc_o
    //io.PcRegOut := PcRegOut
//ifu
    //val IfU = Module(new IFU())

    IfU.io.pc_i := PcRegOut
    IfU.io.instr_i := io.instr
//if_id
    //val If_Id = Module(new IF_ID())

    If_Id.io.ifpc := IfU.io.pc_o
    If_Id.io.ifinstr := IfU.io.instr_o
// regfile

    //val Regfile = Module(new RegFile)
    Regfile.io.raddr1 := Id.io.rs_addr1
    Regfile.io.raddr2 := Id.io.rs_addr2
    Regfile.io.wen := exu.io.rden_o
    Regfile.io.waddr := exu.io.rdaddr_o
    Regfile.io.wdata := exu.io.rddata
    //Regfile.io.
//id
    //val Id = Module(new IDU())

    Id.io.pc_i := If_Id.io.idpc
    Id.io.instr_i := If_Id.io.idinstr
    Id.io.rs_data1 := Regfile.io.rdata1
    Id.io.rs_data2 := Regfile.io.rdata2
//ID_EX
    //val Id_Ex = Module(new ID_EX())

    Id_Ex.io.pc_i := Id.io.pc_o
    Id_Ex.io.instr_i := Id.io.instr_o
    Id_Ex.io.rs1_i := Id.io.rs1
    Id_Ex.io.rs2_i := Id.io.rs2
    Id_Ex.io.imm_i := Id.io.imm
    Id_Ex.io.func3_i := Id.io.func3
    Id_Ex.io.opcode_i := Id.io.opcode
    Id_Ex.io.rdaddr_i := Id.io.rd_addr
    Id_Ex.io.rden_i := Id.io.rd_en
//EXU
    //val exu = Module(new EXU())

    exu.io.pc_i := Id_Ex.io.pc_o
    exu.io.instr_i := Id_Ex.io.instr_o
    exu.io.rs1_i := Id_Ex.io.rs1_o
    exu.io.rs2_i := Id_Ex.io.rs2_o
    exu.io.imm_i := Id_Ex.io.imm_o
    exu.io.func3_i := Id_Ex.io.func3_o
    exu.io.opcode_i := Id_Ex.io.opcode_o
    exu.io.rdaddr_i := Id_Ex.io.rdaddr_o
    exu.io.rden_i := Id_Ex.io.rden_o

//
    //io.res := exu.io.expres

}