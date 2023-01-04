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
    val M = Mem(parm.MSIZE/4,UInt(parm.INSTWIDTH.W))
    //chisel里变量还未命名好像不能直接用
    val PcReg = Module(new PC_REG()) 
    val NpcMux = Module(new NPCMUX())
    val IfU = Module(new IFU())
    val If_Id = Module(new IF_ID())
    val Regfile = Module(new RegFile)
    val Idu = Module(new IDU())
    val Id_Ex = Module(new ID_EX())
    val exu = Module(new EXU())
//pc   
    val PcRegOut = Wire(UInt(parm.PCWIDTH.W))
    //val addr  = (PcRegOut-parm.INITIAL_PC.U)>>2
    val instr = M((PcRegOut(parm.PCWIDTH-1,2)))//因为M/4，所以PC要把低两位去掉
    //printf(p"addr=${addr} instr=0x${Hexadecimal(M(addr))} \n")
    printf(p"pc=0x${Hexadecimal(PcRegOut)} instr=0x${Hexadecimal(instr)}\n")
    NpcMux.io.jal := Idu.io.jal
    NpcMux.io.PcRegPc := PcReg.io.pc_o
    NpcMux.io.IdPc := Idu.io.pc_o
    NpcMux.io.imm := Idu.io.idex.imm
    NpcMux.io.rs1 := Idu.io.idex.rs1
    PcReg.io.pc_i := NpcMux.io.NPC
    PcRegOut := PcReg.io.pc_o
//ifu
    //val IfU = Module(new IFU())

    IfU.io.pc_i := PcReg.io.pc_o
    IfU.io.instr_i := instr
    
//if_id
    //val If_Id = Module(new IF_ID())

    If_Id.io.ifpc := IfU.io.pc_o
    If_Id.io.ifinstr := IfU.io.instr_o
    If_Id.io.nop := NpcMux.io.NOP
// regfile

    //val Regfile = Module(new RegFile)
    Regfile.io.raddr1 := Idu.io.rs_addr1
    Regfile.io.raddr2 := Idu.io.rs_addr2
    Regfile.io.wen := exu.io.ex.rden
    Regfile.io.waddr := exu.io.ex.rdaddr
    Regfile.io.wdata := exu.io.ex.rddata
    //Regfile.io.
//id
    //val Idu = Module(new IDU())

    Idu.io.pc_i := If_Id.io.idpc
    Idu.io.instr_i := If_Id.io.idinstr
    Idu.io.rs_data1 := Regfile.io.rdata1
    Idu.io.rs_data2 := Regfile.io.rdata2
//ID_EX
    //val Id_Ex = Module(new ID_EX())
    //Idu.io.
    Id_Ex.io.pc_i := Idu.io.pc_o
    Id_Ex.io.instr_i := Idu.io.instr_o
    Id_Ex.io.IDEX_i <> Idu.io.idex
   // Id_Ex.io.rs1_i := Id.io.rs1
   // Id_Ex.io.rs2_i := Id.io.rs2
   // Id_Ex.io.imm_i := Id.io.imm
   // Id_Ex.io.func3_i := Id.io.func3
   // Id_Ex.io.opcode_i := Id.io.opcode
   // Id_Ex.io.rdaddr_i := Id.io.rd_addr
   // Id_Ex.io.rden_i := Id.io.rd_en
//EXU
    //val exu = Module(new EXU())

    exu.io.pc_i := Id_Ex.io.pc_o
    exu.io.instr_i := Id_Ex.io.instr_o
    exu.io.id <> Id_Ex.io.IDEX_o
    //exu.io.rs1_i := Id_Ex.io.rs1_o
    //exu.io.rs2_i := Id_Ex.io.rs2_o
    //exu.io.imm_i := Id_Ex.io.imm_o
    //exu.io.func3_i := Id_Ex.io.func3_o
    //exu.io.opcode_i := Id_Ex.io.opcode_o
    //exu.io.rdaddr_i := Id_Ex.io.rdaddr_o
    //exu.io.rden_i := Id_Ex.io.rden_o

//out
    val ebrdpi = Module(new ebreakDPI)
    ebrdpi.io.a := Idu.io.ebreak 
    io.halt := Idu.io.ebreak&&(Idu.io.rs_data1===1.U)
    //io.res := exu.io.expres

}