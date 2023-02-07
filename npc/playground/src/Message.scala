//This file define the Message between each module
//PCReg ---- IF
class MessagePcIfu extends Bundle{
  val pc   = Output(UInt(parm.PCWIDTH.W))
}
//IF --- ID
class MessageIfuIdu extends Bundle{
  val inst = Output(UInt(parm.INSTWIDTH.W))
  val pc   = Output(UInt(parm.PCWIDTH.W))
}
//ID --- NPCMUX
class MessageIduNpc extends Bundle{
    val NextPc  = Input(UInt(parm.PCWIDTH.W))

    val jal     = Output(UInt(OpJType.OPJNUMWIDTH.W))
    val IdPc    = Output(UInt(parm.PCWIDTH.W))
    val imm     = Output(UInt(parm.REGWIDTH.W))
    val rs1     = Output(UInt(parm.REGWIDTH.W))
    val ecallpc = Output(UInt(parm.PCWIDTH.W))
    val mretpc  = Output(UInt(parm.PCWIDTH.W))
}
//NPCMUX --- PCREG
class MessageNpcPcreg extends Bundle{
    val RegPc   = Input(UInt(parm.PCWIDTH.W))
    val npc     = Output(UInt(parm.PCWIDTH.W))
}
//NPCMUX --- IF
class MessageNpcIfu extends Bundle{
    val nop     = Output(Bool())
}
//
//ID --- RegFile
class MessageIduRegfile extends Bundle{
    val mepc    = Input(UInt(parm.PCWIDTH.W))
    val mcause  = Input(UInt(parm.REGWIDTH.W))
    val mtvec   = Input(UInt(parm.REGWIDTH.W))
    val mstatus = Input(UInt(parm.REGWIDTH.W))
    val mie     = Input(UInt(parm.REGWIDTH.W))
    val mip     = Input(UInt(parm.REGWIDTH.W))
    val rdata1  = Input(UInt(parm.REGWIDTH.W))
    val rdata2  = Input(UInt(parm.REGWIDTH.W))

    val raddr1  = Output(UInt(parm.REGADDRWIDTH.W))
    val raddr2  = Output(UInt(parm.REGADDRWIDTH.W))
}
//ID --- EX
class MessageIduExu extends Bundle{
    val pc          = Output(UInt(parm.PCWIDTH.W))
    val rs1         = Output(UInt(parm.REGWIDTH.W))
    val rs2         = Output(UInt(parm.REGWIDTH.W))
    val imm         = Output(UInt(parm.REGWIDTH.W))
    val AluOp       = Output(new ALUOP)
    val rdaddr      = Output(UInt(parm.REGADDRWIDTH.W))
    val rden        = Output(Bool())
    val wflag       = Output(Bool())
    val rflag       = Output(Bool())
    val wmask       = Output(UInt(parm.BYTEWIDTH.W))
    val choose      = Output(UInt(parm.RegFileChooseWidth.W))
    val alumask     = Output(UInt(parm.MaskWidth.W))
    val lsumask     = Output(UInt(parm.MaskWidth.W))
    val src1mask    = Output(UInt(parm.MaskWidth.W))
    val src2mask    = Output(UInt(parm.MaskWidth.W))
    val CsrWb       = new CSRWB
    val NextPc      = Output(UInt(parm.PCWIDTH.W))
}
//EX --- LS
class MessageExuLsu extends Bundle{
    val rs2         = Output(UInt(parm.REGWIDTH.W))
    val alures      = Output(UInt(parm.REGWIDTH.W))
    //val rddata  = Output(UInt(parm.REGWIDTH.W))
    val rdaddr      = Output(UInt(parm.REGADDRWIDTH.W))
    val rden        = Output(Bool())
    val CsrWb       = new CSRWB
    val RegFileIO   = new REGFILEIO
    val wflag       = Output(Bool())
    val rflag       = Output(Bool())
    val readaddr    = Output(UInt(parm.REGWIDTH.W))
    val writeaddr   = Output(UInt(parm.REGWIDTH.W))
    val writedata   = Output(UInt(parm.REGWIDTH.W))
    val wmask       = Output(UInt(parm.BYTEWIDTH.W))
    val choose      = Output(UInt(parm.RegFileChooseWidth.W))
    val lsumask     = Output(UInt(parm.MaskWidth.W))
    val pc          = Output(UInt(parm.PCWIDTH.W))
    val NextPc      = Output(UInt(parm.PCWIDTH.W))
}
//LS --- WB
class MessageLsuWbu extends Bundle{
    val choose  = Output(UInt(parm.RegFileChooseWidth.W))
    val Regfile = new REGFILEIO
    val LsuRes  = Output(UInt(parm.REGWIDTH.W))
    val AluRes  = Output(UInt(parm.REGWIDTH.W))
    val CsrWb   = new CSRWB
    val pc      = Output(UInt(parm.PCWIDTH.W))
    val NextPc  = Output(UInt(parm.PCWIDTH.W))
}
//WB --- RegFile
class MessageWbuRegfile extends Bundle{
    val Reg17       = Input(UInt(parm.REGWIDTH.W))

    val Regfile     = new REGFILEIO
    val WbuRes      = Output(UInt(parm.REGWIDTH.W))
    val CsrRegfile  = new CSRIO
    val CsrAddr     = Output(UInt(parm.CSRNUMBER.W))
}
//LS --- CLINT
class MessageLsuClint extends Bundle{
    val Clintls = new CLINTLS
}
//CLINT --- WB
class MessageClintWbu extends Bundle{
    val Mtip = Output(Bool()) 
}