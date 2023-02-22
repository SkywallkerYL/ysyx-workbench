package npc

import chisel3._
import chisel3.util._

//乘除法模块单元
trait MulDivParm {
    val xlen = parm.REGWIDTH 
}

object MulDivParm extends MulDivParm {}
//Multi

class MultiIO extends Bundle with MulDivParm{
    val MulValid        = Input(Bool())//为高表示输入的数据有效，如果没有新的输入，乘法被接受的下一个周期要拉低
    val Flush           = Input(Bool())//为高取消乘法
    val Mulw            = Input(Bool())//32位
    val MulSigned       = Input(UInt(2.W))//11 s*s   10 s*u  00 u*u
    val Multiplicand    = Input(UInt(xlen.W)) //被乘数
    val Multiplier      = Input(UInt(xlen.W)) //乘数
    val MulReady        = Output(Bool())
    val OutValid        = Output(Bool())
    val ResultH         = Output(UInt(xlen.W)) // 高 64位结果
    val ResultL         = Output(UInt(xlen.W)) // 低 64位结果
}
class Mul2Exu extends Bundle{
    val Exu = new MultiIO
}

class Multi(HighPerform : Boolean = false) extends Module with MulDivParm{
    val io = IO(new Bundle{
        val Exu = new MultiIO
    })
    io.Exu.MulReady := false.B
    io.Exu.OutValid := false.B
    io.Exu.ResultH := 0.U
    io.Exu.ResultL := 0.U
    //非高性能  //移位乘法器
    if(!HighPerform){
        val multican = RegInit(0.U(xlen.W)) // 被乘数
        val multier  = RegInit(0.U((xlen/2+1).W)) //乘数

        val sIdle :: sBusy :: sValid :: Nil = Enum(3)
        val MainState = RegInit(sIdle)
        switch(MainState){
            is(sIdle){
                io.Exu.MulReady := true.B
                when(io.Exu.MulValid){
                    MainState := sBusy
                    multican := io.Exu.Multiplicand
                    multier  := io.Exu.Multiplier(xlen/2,0)
                }
            }
            is(sBusy){
                
            }
            is(sValid){

            }
        }
    }
}