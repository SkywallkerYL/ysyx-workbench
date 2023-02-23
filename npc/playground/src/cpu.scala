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
        val instvalid = Output(Bool())
        val pcvalid = Output(Bool())
//if (parm.DIFFTEST){
        val SkipRef = Output(Bool())
//}
    })
    //val M = Mem(parm.MSIZE/4,UInt(parm.INSTWIDTH.W))
    //chisel里变量还未命名好像不能直接用
    val PcReg = Module(new PC_REG()) 
    val NpcMux = Module(new NPCMUX())
    val SRAM    = Module(new Axi4LiteSRAM)
    
    val ICache   = Module(new CpuCache(true))
    val DCache   = Module(new CpuCache)
    //val SRAMLSU = Module(new Axi4LiteSRAM)
    //模拟设备的
    val SRAMDEV = Module(new Axi4LiteSRAM)
    val SramArb = Module(new RamArbiter)
    val Ifu = Module(new IFU())
    //val If_Id = Module(new IF_ID())
    val Regfile = Module(new RegFile)
    val Idu = Module(new IDU())
    //val Id_Ex = Module(new ID_EX())
    val Exu = Module(new EXU())
    //val Ex_Ls = Module(new EX_LS())
    val Lsu = Module(new LSU())
    val Clint = Module(new CLINT())
    //val Ls_Wb = Module(new LS_WB())
    val Wbu = Module(new WBU())
// Ram
    SRAM.io.Sram <> ICache.io.Sram.Axi
    //SRAMLSU.io.Sram <> DCache.io.Sram.Axi
    SRAM.io.Sram <> SramArb.io.sram.Axi
    SramArb.io.ifu.Axi <> ICache.io.Sram.Axi
    SramArb.io.lsu.Axi <> DCache.io.Sram.Axi
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
    //NpcMux.io.PcEnable := Ifu.io.instvalid & Lsu.io.Lsuvalid
//ifu
    //val Ifu = Module(new IFU())
    PcReg.io.PcIf  <> Ifu.io.PcIf
    Ifu.io.Cache <> ICache.io.Cache
    
    ICache.io.pc := Ifu.io.PcIf.pc
   // Ifu.io.IFRAM <> SramArb.io.ifu//SRAM.io.Sram
    //Ifu.io.pc_i := PcReg.io.pc_o
    //Ifu.io.instr_i := instr
    if(parm.MODE == "single"){
        if(parm.DPI){
            val instrread = Module(new InstrReadDPI)
            instrread.io.a := PcReg.io.PcIf.pc
            Ifu.io.instr_i := instrread.io.b
        }
    }
    else {
        Ifu.io.instr_i := 0.U
        //Ifu.io.IFRAM <> SRAM.io.Sram
    }
//if_id
    Idu.io.IFID  <> Ifu.io.IFID 
    //If_Id.io.nop := NpcMux.io.NOP
// regfile
    Regfile.io.IDRegFile <> Idu.io.IDRegFile
    Regfile.io.WBREG <> Wbu.io.WBREG 
    Regfile.io.pc := Ifu.io.IFID.pc//
//id
    //val Idu = Module(new IDU())
    Idu.io.NPC <> NpcMux.io.NPCId
    //Idu.io.pc_i := If_Id.io.idpc
    Idu.io.RegFileID <> Regfile.io.RegFileID
//ID_EX
    //val Id_Ex = Module(new ID_EX())
    //Idu.io.
    Exu.io.id <> Idu.io.idex  // RegEnable
//EXU
    //val Exu = Module(new EXU())
//EX_LS
    //Lsu部分接入流水线
    //两层逻辑一个是LSU接受的逻辑，另一个是EXU发送
    //首先EXU接收到乘除法指令时，发送忙信号流水线寄存当前所有的所有的值 并且整个流水线要暂停
    //然后是LSU 接受，如果发现流水线来的信号busy拉高了，那么LSU的其他信号都要拉低
    //并且当valid到来时，流水线继续，然后并且流水级的计算结果等信号更新成乘除法的计算结果。。
    val ExlsEnable = (!Exu.io.AluBusy)//exu不忙的情况下，流水线才更新
    val RegExls = RegEnable(Exu.io.EXLS,ExlsEnable)
    //valid信号到来的时候，流水线的值要更新成其计算结果
    //alures 更新 然后是寄存器的写如更新。。。。
    //严格来说额,这两是一个东西，但是写的时候每分开。
    when(Exu.io.AluValid){
        RegExls.alures := Exu.io.EXLS.alures
        RegExls.RegFileIO.wdata := Exu.io.EXLS.alures
    }
    //valid 信号拉高的时候，下一个周期写入流水线，正好此时busy拉低了。。
    Lsu.io.EXLS <> Mux(Exu.io.AluBusy,0.U,RegExls)//Exu.io.EXLS
// LSU
    Lsu.io.Cache <> DCache.io.Cache
    DCache.io.pc := Ifu.io.IFID.pc
    Lsu.io.PC <> PcReg.io.LSU
    Lsu.io.LSRAM.Axi <> SRAMDEV.io.Sram//SRAMLSU.io.Sram
// CLINT
    Clint.io.LsuIn <> Lsu.io.LSCLINT
//LS_WB
    Wbu.io.LSWB <> Lsu.io.LSWB
//WB
    Wbu.io.REGWB <>  Regfile.io.REGWB 
    Wbu.io.CLINTWB  := Clint.io.CLINTWB
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
    io.instvalid := Ifu.io.IFID.instvalid
    io.pcvalid := PcReg.io.PcIf.pcvalid
    io.halt := Idu.io.ebreak&&(Regfile.io.a0data===0.U)
    io.abort := Idu.io.instrnoimpl
    io.jalr := Idu.io.IDNPC.jal === 2.U
    if (parm.DIFFTEST){
    io.SkipRef := Lsu.io.SkipRef
    }  else io.SkipRef := false.B
    //io.res := Exu.io.expres

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
