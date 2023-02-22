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
    val MulSigned       = Input(UInt(2.W))//b11 s*s   b10 s*u  b00 u*u
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
        val multicancomp = RegInit(0.U(xlen.W))
        val multier  = RegInit(0.U((xlen/2).W)) //乘数
        val MulRes = RegInit(0.U(xlen.W))
        val multicount =RegInit(0.U(5.W))
        val mulw = RegInit(0.U(1.W))
        val signed   = RegInit(0.U(2.W))
        val sIdle :: sBusy :: sValid :: Nil = Enum(3)
        val MainState = RegInit(sIdle)
        switch(MainState){
            is(sIdle){
                io.Exu.MulReady := true.B
                when(io.Exu.MulValid){
                    MainState := sBusy
                    multican := io.Exu.Multiplicand
                    multicancomp := ~io.Exu.Multiplicand + 1.U
                    multier  := io.Exu.Multiplier(xlen/2,0)
                    signed := io.Exu.MulSigned
                    multicount := 31.U
                    mulw := io.Exu.Mulw
                    MulRes := 0.U
                }
            }
            is(sBusy){
                //
                when(io.Exu.Flush){
                    MulRes := 0.U
                    MainState := sIdle
                }
                when(multicount=/=0.U){
                    multicount := multicount - 1.U
                    multican := multican << 1.U
                    multicancomp := multicancomp << 1.U
                    multier := multier >> 1.U
                    when(multier(0)){
                        MulRes := MulRes + multican
                    }
                }.otherwise{
                    //最后一位  根据有无符号来确定运算类型
                    //无符号数直接加上，有符号数，则
                    //multier最后后一位有，则是负数，那么就加上补码 
                    //注意是原来的数的补码，不是移位后的
                    when(multier(0)){
                        val add = MuxLookup(signed, multican,Seq(
                            "b11".U -> multicancomp,
                            "b00".U -> (multican)
                        ))
                        MulRes := MulRes + add
                    }
                    MainState := sValid
                }
            }
            is(sValid){
                MainState := sIdle
                io.Exu.OutValid := true.B
                io.ResultL := Mux(mulw,MulRes(31,0),MulRes)
            }
        }
    }
}