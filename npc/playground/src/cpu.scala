package npc

import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline

class  RiscvCpu extends Module{
    val io = IO(new Bundle{
        //val PcFlag =  Input(Bool())
        //val PCIN = Input(UInt(parm.PCWIDTH.W))
        val halt = Output(Bool())
        val abort = Output(Bool())
        val jalr = Output(Bool())
//if (parm.DIFFTEST){
        val SkipRef = Output(Bool())
//}
        //val pc = Input(UInt(parm.PCWIDTH.W))
        //val instr = Input(UInt(parm.INSTWIDTH.W)) // instr暂时拉到顶层
        //val PcRegOut = Output(UInt(parm.PCWIDTH.W)) //根据pc_reg的out来取指
        //val res = Output(UInt(parm.REGWIDTH.W))
    })
    //val M = Mem(parm.MSIZE/4,UInt(parm.INSTWIDTH.W))
    //chisel里变量还未命名好像不能直接用
    val PcReg = Module(new PC_REG()) 
    val NpcMux = Module(new NPCMUX())
    val IfU = Module(new IFU())
    //val If_Id = Module(new IF_ID())
    val Regfile = Module(new RegFile)
    val Idu = Module(new IDU())
    //val Id_Ex = Module(new ID_EX())
    val exu = Module(new EXU())
    //val Ex_Ls = Module(new EX_LS())
    val Lsu = Module(new LSU())
    val Clint = Module(new CLINT())
    val Ls_Wb = Module(new LS_WB())
    val Wbu = Module(new WBU())
//pc   
    val PcRegOut = Wire(UInt(parm.PCWIDTH.W))
    //val addr  = (PcRegOut-parm.INITIAL_PC.U)>>2
    //val instr = M(addr)//因为M/4，所以PC要把低两位去掉
    //printf(p"addr=${addr} instr=0x${Hexadecimal(M(addr))} \n")
    //printf(p"pc=0x${Hexadecimal(PcRegOut)} instr=0x${Hexadecimal(instr)}\n")
    NpcMux.io.IDNPC <> Idu.io.IDNPC

    //val resetflag = PcReg.io.pc_o === 0.U
    //PcReg.io.pc_i := NpcMux.io.NPC
    PcRegOut := PcReg.io.PcIf.pc
    PcReg.io.RegPc <> NpcMux.io.RegPc
    NpcMux.io.NPC  <> PcReg.io.NPC
//ifu
    //val IfU = Module(new IFU())
    PcReg.io.PcIf  <> IfU.io.PcIf
    //IfU.io.pc_i := PcReg.io.pc_o
    //IfU.io.instr_i := instr
    if(parm.DPI){
        val instrread = Module(new InstrReadDPI)
        instrread.io.a := PcReg.io.PcIf.pc
        IfU.io.instr_i := instrread.io.b
    }
//if_id
    Idu.io.IFID  <> IfU.io.IFID 
    //If_Id.io.nop := NpcMux.io.NOP
// regfile
    Regfile.io.IDRegFile <> Idu.io.IDRegFile
    Regfile.io.wen := Wbu.io.Regfile_o.wen//exu.io.ex.rden
    Regfile.io.waddr := Wbu.io.Regfile_o.waddr//exu.io.ex.rdaddr
    Regfile.io.wdata := Wbu.io.wbRes_o//exu.io.ex.rddata
    Regfile.io.pc := IfU.io.IFID.pc//
    Regfile.io.csraddr := Wbu.io.CsrAddr
    Regfile.io.CSRInput <> Wbu.io.CsrRegfile
//id
    //val Idu = Module(new IDU())
    Idu.io.NPC <> NpcMux.io.NPCId
    //Idu.io.pc_i := If_Id.io.idpc
    Idu.io.RegFileID <> Regfile.io.RegFileID
//ID_EX
    //val Id_Ex = Module(new ID_EX())
    //Idu.io.
    exu.io.id <> Idu.io.idex  // RegEnable
//EXU
    //val exu = Module(new EXU())
//EX_LS
    //Ex_Ls.io.Regfile_i.wen := exu.io.ex.rden
    //Ex_Ls.io.Regfile_i.waddr := exu.io.ex.rdaddr
    //Ex_Ls.io.Regfile_i.wdata := exu.io.ex.rddata
    //Ex_Ls.io.EXLS_i <> exu.io.ls
    Lsu.io.EXLS <> exu.io.EXLS
// LSU
    
// CLINT
    Clint.io.LsuIn <> Lsu.io.Clintls
//LS_WB
    Ls_Wb.io.Regfile_i <> Ex_Ls.io.Regfile_o
    Ls_Wb.io.pc_i :=  Lsu.io.pc
    Ls_Wb.io.NextPc_i := Lsu.io.NextPc
    Ls_Wb.io.LsuRes_i := Lsu.io.LsuRes
    Ls_Wb.io.AluRes_i := Lsu.io.AluRes
    Ls_Wb.io.choose_i := Lsu.io.choose
    Ls_Wb.io.CsrWb_i <> Ex_Ls.io.EXLS_o.CsrWb
//WB
    Wbu.io.Regfile_i <> Ls_Wb.io.Regfile_o
    Wbu.io.LsuRes_i := Ls_Wb.io.LsuRes_o
    Wbu.io.AluRes_i := Ls_Wb.io.AluRes_o
    Wbu.io.choose := Ls_Wb.io.choose_o
    Wbu.io.CsrWb_i <> Ls_Wb.io.CsrWb_o
    Wbu.io.pc := Ls_Wb.io.pc_o
    Wbu.io.NextPc := Ls_Wb.io.NextPc_o
    //Wbu.io.CsrIn <>Regfile.io.CSR
    Wbu.io.Reg17 := Regfile.io.Reg17
    Wbu.io.Mtip  := Clint.io.Mtip
//out
    if(parm.DPI){
        val ebrdpi = Module(new ebreakDPI)
        ebrdpi.io.a := Idu.io.ebreak 
        val pcdpi = Module(new pcDPI)
        pcdpi.io.pc := Idu.io.pc_o
        pcdpi.io.dnpc := NpcMux.io.NPC.npc
        val instrdpi = Module(new InstrFetchDPI)
        instrdpi.io.a := Idu.io.instr_o
        val srcdpi = Module(new SrcFetchDPI)
        srcdpi.io.rs1 := Idu.io.IDRegFile.raddr1
        srcdpi.io.rd := Idu.io.idex.rdaddr
        srcdpi.io.imm := Idu.io.idex.imm
    }
    //when it is not need ,it can be removed
    io.halt := Idu.io.ebreak&&(Regfile.io.a0data===0.U)
    io.abort := Idu.io.instrnoimpl
    io.jalr := Idu.io.IDNPC.jal === 2.U
    if (parm.DIFFTEST){
    io.SkipRef := Lsu.io.SkipRef
}   else io.SkipRef := false.B
    //io.res := exu.io.expres

}
//for AXI-LITE signals , use these function
object DecoupledConnect{
    def apply[T <: Data] (arch: String,left: DecoupledIO[T], right:DecoupledIO[T] ) = {
        //val arch = "single"
        if (arch == "single") {right.bits := left.bits}
        else if (arch == "multi") {right <> left} 
        else if (arch == "pipeline") {right <> RegEnable(left,left.fire)}
    }
}
