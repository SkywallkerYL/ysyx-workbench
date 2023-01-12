package npc

import chisel3._
import chisel3.util._


object  parm{
    val CPUWIDTH    : Int = 64
    val REGWIDTH    : Int = 64
    val INSTWIDTH   : Int = 32
    val PCWIDTH     : Int = 64
    val BYTEWIDTH   : Int = 8
    val REGADDRWIDTH: Int = 5
    val RegNumber   : Int = 32
    val RegFileReadPorts: Int = 2
    val OPCODEWIDTH : Int = 7
    val MSIZE : Int = 1024
    
    val RegFileChooseWidth : Int = 4
// initial value
    val INITIAL_PC  : String = "x80000000"
    val INITIAL_INST: String = "x00000000"
//pip 
    val pip : Boolean = false
//DPI-C
    val DPI : Boolean = true
}
//每一次添加一条新的指令，需要在这里添加指令，Table内添加匹配规则,然后在IDU和EXU内实现
//IDU内部只要识别操作数和操作类型即可
//注意如果某个指令区分了有符号数等，则要在OpType里添加相应的规则
object RV64IInstr {
    //I
    def ADDI   = BitPat("b???????_?????_?????_000_?????_0010011")
    def JALR   = BitPat("b???????_?????_?????_000_?????_1100111")

    def LD     = BitPat("b???????_?????_?????_011_?????_0000011")


    def EBREAK = BitPat("b0000000_00001_00000_000_00000_1110011")    
    //U
    def AUIPC  = BitPat("b???????_?????_?????_???_?????_0010111")
    def LUI    = BitPat("b???????_?????_?????_???_?????_0110111")
    //J
    def JAL    = BitPat("b???????_?????_?????_???_?????_1101111")
    //S
    def SD     = BitPat("b???????_?????_?????_011_?????_0100011")
    //R
    def ADD    = BitPat("b0000000_?????_?????_000_?????_0110011")
    def SUB    = BitPat("b0100000_?????_?????_000_?????_0110011")
}

object InstrType{
    val INSTNUM = 4
    val BAD = 0.U(INSTNUM.W)
    val R   = 1.U(INSTNUM.W)
    val I   = 2.U(INSTNUM.W)
    val S   = 3.U(INSTNUM.W)
    val B   = 4.U(INSTNUM.W)
    val U   = 5.U(INSTNUM.W)
    val J   = 6.U(INSTNUM.W)
}

//这个op是决定ALU的操作
//没加后缀S的默认无符号运算
//前面加前缀U 或者S的 表示还要进行有符号或者无符号扩展
//后面加参数的表示截断
object  OpType{
    val OPNUMWIDTH = 4
    val ADD  = 0.U(OPNUMWIDTH.W)
    val SUB  = 1.U(OPNUMWIDTH.W)
    //val JALR = 10.U(OPNUMWIDTH.W)
    //val LD = 11.U(OPINUMWIDTH.W)
}
object  OpIType{
    val OPINUMWIDTH = 6
    val ADDI  = 0.U(OPINUMWIDTH.W)
    val EBREAK = 1.U(OPINUMWIDTH.W)
    val JALR= 2.U(OPINUMWIDTH.W)
    val LD = 3.U(OPINUMWIDTH.W)
    //val LD = 11.U(OPINUMWIDTH.W)
}
//这个对操作数进行具体的区分 以便决定操作数
object  OpUType{
    val OPUNUMWIDTH = 2
    val LUI     = 0.U(OPUNUMWIDTH.W)
    val AUIPC   = 1.U(OPUNUMWIDTH.W)
}
object  OpJType{
    val OPJNUMWIDTH = 2
    val JAL     = 1.U(OPJNUMWIDTH.W)
    //val JALR    = 2.U(OPJNUMWIDTH.W)
}
object  OpSType{
    val OPSNUMWIDTH = 4
    //val BAD    = 0.U(OPSNUMWIDTH.W)
    val SD     = 0.U(OPSNUMWIDTH.W)
    //val JALR    = 2.U(OPSNUMWIDTH.W)
}
object  OpRType{
    val OPRNUMWIDTH = 4
    //val BAD    = 0.U(OPSNUMWIDTH.W)
    val ADD     = 0.U(OPRNUMWIDTH.W)
    val SUB     = 1.U(OPRNUMWIDTH.W)
    //val JALR    = 2.U(OPSNUMWIDTH.W)
}

object  StypeTable{
    val Default = List(0.U,0.U,0x00000000.U)
    //val WRMmap = Array(
       //OpSType.SD -> List(1.U,0.U,0x11111111.U)
   // )
    val wen = 0
    val ren = 1
    val mask = 2
}
//val map =ListLookup(inst,InstrTable.Default,InstrTable.InstrMap)
//val instrtype = map(0)
//val optype = map(1)
object InstrTable{
    val Default = List(InstrType.BAD,0.U,OpType.ADD)
    val InstrMap = Array(
        //I
        RV64IInstr.ADDI     -> List(InstrType.I,OpIType.ADDI,OpType.ADD),
        RV64IInstr.EBREAK   -> List(InstrType.I,OpIType.EBREAK,OpType.ADD),
        RV64IInstr.LD       -> List(InstrType.I,OpIType.LD,OpType.ADD),
        RV64IInstr.JALR     -> List(InstrType.I,OpIType.JALR,OpType.ADD),
        //U
        RV64IInstr.AUIPC    -> List(InstrType.U,OpUType.AUIPC,OpType.ADD),
        RV64IInstr.LUI      -> List(InstrType.U,OpUType.LUI,OpType.ADD),
        //J
        RV64IInstr.JAL      -> List(InstrType.J,OpJType.JAL,OpType.ADD),
        //S
        RV64IInstr.SD       -> List(InstrType.S,OpSType.SD,OpType.ADD),
        //R
        RV64IInstr.ADD      -> List(InstrType.R,OpRType.ADD,OpType.ADD),
        RV64IInstr.SUB      -> List(InstrType.R,OpRType.SUB,OpType.SUB)
    )
    val InstrT = 0
    val InstrN = 1
    val OpT = 2
}
