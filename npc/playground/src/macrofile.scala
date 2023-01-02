package npc

import chisel3._
import chisel3.util._


object  parm{
    val CPUWIDTH    : Int = 64
    val REGWIDTH    : Int = 64
    val INSTWIDTH   : Int = 32
    val PCWIDTH     : Int = 32
    val REGADDRWIDTH: Int = 5
    val RegNumber   : Int = 32
    val RegFileReadPorts: Int = 2
    val OPCODEWIDTH : Int = 7
    
// initial value
    val INITIAL_PC : String = "x80000000"

//INSTROCTION 
    val INST_LUI : String =  "b0110111"
    val INST_ADDI: String =  "b0010011"
    val INST_EBREAK: String = "b1110011"

}

