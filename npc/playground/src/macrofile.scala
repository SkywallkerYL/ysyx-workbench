package npc

import chisel3._
import chisel3.util._


object  parm{
    val CPUWIDTH    : Int = 64
    val REGWIDTH    : Int = 64
    val INSTWIDTH   : Int = 32
    val PCWIDTH     : Int = 64
    val REGADDRWIDTH: Int = 5
    val RegNumber   : Int = 32
    val RegFileReadPorts: Int = 2
    val OPCODEWIDTH : Int = 7
    val MSIZE : Int = 1024
    
// initial value
    val INITIAL_PC : String = "x80000000"

//pip 
    val pip : Boolean = false

}
//每一次添加一条新的指令，需要在这里添加指令，Table内添加匹配规则,然后在IDU和EXU内实现
//IDU内部只要识别操作数和操作类型即可
//注意如果某个指令区分了有符号数等，则要在OpType里添加相应的规则
object RV64IInstr {
    //I
    def ADDI   = BitPat("b???????_?????_?????_000_?????_0011011")




    def EBREAK = BitPat("b0000000_00001_00000_000_00000_1110011")    
    //U
    def AUIPC  = BitPat("b???????_?????_?????_???_?????_0010111")
    def LUI    = BitPat("b???????_?????_?????_???_?????_0110111")
    //J
    def JAL    = BitPat("b???????_?????_?????_???_?????_1101111")
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
object  OpType{
    val OPINUMWIDTH = 6
    val ADD = 0.U(OPINUMWIDTH.W)
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
    val JALR    = 2.U(OPJNUMWIDTH.W)
}
//val map =ListLookup(inst,InstrTable.Default,InstrTable.InstrMap)
//val instrtype = map(0)
//val optype = map(1)
object InstrTable{
    val Default = List(InstrType.BAD,OpType.ADD)
    val InstrMap = Array(
        RV64IInstr.ADDI     -> List(InstrType.I,OpType.ADD),
        RV64IInstr.EBREAK   -> List(InstrType.I,OpType.ADD),

        RV64IInstr.AUIPC    -> List(InstrType.U,OpUType.AUIPC),
        RV64IInstr.LUI      -> List(InstrType.U,OpUType.LUI),

        RV64IInstr.JAL      -> List(InstrType.J,OpJType.JAL),
    )
    val InstrT = 0
    val OpT = 1
}
