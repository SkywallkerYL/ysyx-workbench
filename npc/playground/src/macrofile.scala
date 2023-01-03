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

//INSTROCTION 
    val INST_LUI : String =  "b0110111"
    val INST_ADDI: String =  "b0010011"
    val INST_EBREAK: String = "b1110011"

}

object RV64IInstr {
    def ADDI   = BitPat("b???????_?????_?????_000_?????_0011011")





    def EBREAK = BitPat("b0000000_00001_00000_000_00000_1110011")    

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


object  OpType{
    val OPNUMWIDTH = 6
    val ADD = 0.U(OPNUMWIDTH.W)
    
}
//val map =ListLookup(inst,InstrTable.Default,InstrTable.InstrMap)
//val instrtype = map(0)
//val optype = map(1)
object InstrTable{
    val Default = List(InstrType.BAD,OpType.ADD)
    val InstrMap = Array(
        RV64IInstr.ADDI     -> List(InstrType.I,OpType.ADD),
        RV64IInstr.EBREAK   -> List(InstrType.I,OpType.ADD)
    )
    val InstrT = 0
    val OpT = 1
}
