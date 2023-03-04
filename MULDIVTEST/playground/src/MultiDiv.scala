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
//Booth部分积选择
// Radix 4
class PartChooseIO extends Bundle with MulDivParm{
    val BAdd       = Input(UInt(1.W))
    val B          = Input(UInt(1.W))
    val BSub       = Input(UInt(1.W))
    val HighUsign  = Input(Bool())
    val PartProdIn = Input(UInt((2*(xlen+2)).W))
    val S          = Input(UInt((2*(xlen+2)).W))
    val PartProdOut = Output(UInt((2*(xlen+2)).W))
}
class PartProductChoose extends Module with MulDivParm {
    val io = IO(new Bundle{
        val Choose = new PartChooseIO
    })
    val chooseSignal = Cat(io.Choose.BAdd,io.Choose.B,io.Choose.BSub)
    //这个表是针对有符号的情况的Booth乘法的
    //看booth的推导
    /*
        无符号情况的应对，个人理解阿
        最高位的- 改为+  增加一个最高位信号 最高位进来的时候
        用另外一张表
    */
    val add  = MuxLookup(chooseSignal,0.U,Seq(
        "b000".U -> 0.U ,
        "b001".U -> io.Choose.S   ,
        "b010".U -> io.Choose.S   ,
        "b011".U -> (io.Choose.S <<1.U),
        "b100".U -> Mux(io.Choose.HighUsign,(io.Choose.S <<1.U),((~io.Choose.S+1.U)<<1.U)),
        "b101".U -> Mux(io.Choose.HighUsign,(io.Choose.S <<1.U)+io.Choose.S,(~io.Choose.S+1.U)),
        "b110".U -> Mux(io.Choose.HighUsign,(io.Choose.S <<1.U)+io.Choose.S,(~io.Choose.S+1.U)),
        "b111".U -> Mux(io.Choose.HighUsign,(io.Choose.S <<2.U),0.U)
    ))
    io.Choose.PartProdOut := (io.Choose.PartProdIn + add)>>2.U
}
//Wallace 
//CSA 
class CsaIO (width : Int = 1) extends Bundle with MulDivParm{
    val a = Input(UInt(width.W))
    val b = Input(UInt(width.W))
    val cin = Input(UInt(width.W))

    val sum = Output(UInt(width.W))
    val cout = Output(UInt((width+1).W))
}
class Csa (width : Int = 1 ) extends Module with MulDivParm{
    val io = IO(new Bundle{
        val Csa = new CsaIO(width)
    })
    io.Csa.sum := io.Csa.a^io.Csa.b^io.Csa.cin
    io.Csa.cout := ((io.Csa.a&io.Csa.b)|(io.Csa.a&io.Csa.cin)|(io.Csa.b&io.Csa.cin)) << 1.U
}
//全加器 半加器把cin一直拉低就行
class FAIO (width : Int = 1) extends Bundle with MulDivParm{
    val a = Input(UInt(width.W))
    val b = Input(UInt(width.W))
    val cin = Input(UInt(width.W))

    val sum = Output(UInt(width.W))
    val cout = Output(UInt((width).W))
}
class FA (width : Int = 1 ) extends Module with MulDivParm{
    val io = IO(new Bundle{
        val Fa = new FAIO(width)
    })
    io.Fa.sum := io.Fa.a+io.Fa.b+io.Fa.cin
    io.Fa.cout := ((io.Fa.a&io.Fa.b)|(io.Fa.a&io.Fa.cin)|(io.Fa.b&io.Fa.cin))
}
class PartGenIO extends Bundle with MulDivParm{
    val BAdd       = Input(UInt(1.W))
    val B          = Input(UInt(1.W))
    val BSub       = Input(UInt(1.W))
    val HighUsign  = Input(Bool())
    val S          = Input(UInt(((xlen)).W))
    val PartProdOut = Output(UInt(((xlen)).W))
}
//该模块类似上面的，只不过是只获取生成的部分积
class GenPro extends Module with MulDivParm {
    val io = IO(new Bundle{
        val Choose = new PartGenIO
    })
    val chooseSignal = Cat(io.Choose.BAdd,io.Choose.B,io.Choose.BSub)
    //这个表是针对有符号的情况的Booth乘法的
    //看booth的推导
    /*
        无符号情况的应对，个人理解阿
        最高位的- 改为+  增加一个最高位信号 最高位进来的时候
        用另外一张表
    */
    val add  = MuxLookup(chooseSignal,0.U,Seq(
        "b000".U -> 0.U ,
        "b001".U -> io.Choose.S   ,
        "b010".U -> io.Choose.S   ,
        "b011".U -> (io.Choose.S <<1.U),
        "b100".U -> Mux(io.Choose.HighUsign,(io.Choose.S <<1.U),((~io.Choose.S+1.U)<<1.U)),
        "b101".U -> Mux(io.Choose.HighUsign,(io.Choose.S <<1.U)+io.Choose.S,(~io.Choose.S+1.U)),
        "b110".U -> Mux(io.Choose.HighUsign,(io.Choose.S <<1.U)+io.Choose.S,(~io.Choose.S+1.U)),
        "b111".U -> Mux(io.Choose.HighUsign,(io.Choose.S <<2.U),0.U)
    ))
    io.Choose.PartProdOut := add
}
class Wallace extends Module with MulDivParm{
    val io = IO(new Bundle{
        val Exu = new MultiIO
    })
    val multicand = MuxLookup(io.Exu.MulSigned,io.Exu.Multiplicand,Seq(
        "b11".U -> Mux(io.Exu.Mulw===1.U,func.SignExtWidth(xlen,io.Exu.Multiplicand,xlen/2),io.Exu.Multiplicand) 
    ))
    val multiplier = MuxLookup(io.Exu.MulSigned,io.Exu.Multiplier,Seq(
        "b11".U -> Mux(io.Exu.Mulw===1.U,func.SignExtWidth(xlen,io.Exu.Multiplier,xlen/2),io.Exu.Multiplier) 
    ))
        //Mux(io.Exu.Mulw===1.U,io.Exu.Multiplicand)
    //64位   0 2 4 ... 62    需要32个booth生成器  
    val BoothGen = VecInit(Seq.fill(32)(Module(new GenPro).io))
    BoothGen(0).Choose.S := multicand
    BoothGen(0).Choose.BAdd := multiplier(1)
    BoothGen(0).Choose.B    := multiplier(0)
    BoothGen(0).Choose.BSub := 0.U
    BoothGen(0).Choose.HighUsign := false.B
    for (i <- 1 until 32){
        BoothGen(i).Choose.S := multicand
        BoothGen(i).Choose.BAdd := multiplier((i*2+1))
        BoothGen(i).Choose.B    := multiplier((i*2))
        BoothGen(i).Choose.BSub := multiplier((i*2-1))
        when(i.U === 31.U){
            BoothGen(i).Choose.HighUsign := Mux(io.Exu.MulSigned===0.U,true.B,false.B)
        }.otherwise{
            BoothGen(i).Choose.HighUsign := false.B
        }
    }
    //峨峨 比较笨，不太会写课程里讲的那种递归的模式 以后学习一下
    //32个booth 开始对wallace进行分层
    //layer1    32/3 = 10  + 2
    //10个 128位的CSA
    val CSA1 = VecInit(Seq.fill(10)(Module(new Csa(128)).io.Csa))
    //这样连线貌似会有问题 只能一个一个连线了
    for(i <- 0 until 10){
      //  //for(j <- 0 until 3){
      CSA1(i).a   := BoothGen(i*3+0).Choose.PartProdOut << ((i*3+0)*2).U
      CSA1(i).b   := BoothGen(i*3+1).Choose.PartProdOut << ((i*3+1)*2).U
      CSA1(i).cin := BoothGen(i*3+2).Choose.PartProdOut << ((i*3+2)*2).U
        //}
    }
    /*
    CSA1(0).a   := BoothGen(0).Choose.PartProdOut  << 0.U
    CSA1(0).b   := BoothGen(1).Choose.PartProdOut  << 2.U
    CSA1(0).cin := BoothGen(2).Choose.PartProdOut  << 4.U
    CSA1(1).a   := BoothGen(3).Choose.PartProdOut  << 6.U
    CSA1(1).b   := BoothGen(4).Choose.PartProdOut  << 8.U
    CSA1(1).cin := BoothGen(5).Choose.PartProdOut  << 10.U
    CSA1(2).a   := BoothGen(6).Choose.PartProdOut  << 12.U
    CSA1(2).b   := BoothGen(7).Choose.PartProdOut  << 14.U
    CSA1(2).cin := BoothGen(8).Choose.PartProdOut  << 16.U
    CSA1(3).a   := BoothGen(9).Choose.PartProdOut  << 18.U
    CSA1(3).b   := BoothGen(10).Choose.PartProdOut << 20.U
    CSA1(3).cin := BoothGen(11).Choose.PartProdOut << 22.U
    CSA1(4).a   := BoothGen(12).Choose.PartProdOut << 24.U
    CSA1(4).b   := BoothGen(13).Choose.PartProdOut << 26.U
    CSA1(4).cin := BoothGen(14).Choose.PartProdOut << 28.U
    CSA1(5).a   := BoothGen(15).Choose.PartProdOut << 30.U
    CSA1(5).b   := BoothGen(16).Choose.PartProdOut << 32.U
    CSA1(5).cin := BoothGen(17).Choose.PartProdOut << 34.U
    CSA1(6).a   := BoothGen(18).Choose.PartProdOut << 36.U
    CSA1(6).b   := BoothGen(19).Choose.PartProdOut << 38.U
    CSA1(6).cin := BoothGen(20).Choose.PartProdOut << 40.U
    CSA1(7).a   := BoothGen(21).Choose.PartProdOut << 42.U
    CSA1(7).b   := BoothGen(22).Choose.PartProdOut << 44.U
    CSA1(7).cin := BoothGen(23).Choose.PartProdOut << 46.U
    CSA1(8).a   := BoothGen(24).Choose.PartProdOut << 48.U
    CSA1(8).b   := BoothGen(25).Choose.PartProdOut << 50.U
    CSA1(8).cin := BoothGen(26).Choose.PartProdOut << 52.U
    CSA1(9).a   := BoothGen(27).Choose.PartProdOut << 54.U
    CSA1(9).b   := BoothGen(28).Choose.PartProdOut << 56.U
    CSA1(9).cin := BoothGen(29).Choose.PartProdOut << 58.U
    */
    //layer2    20+2 = 22 22/3 = 7 + 1
    val CSA2 = VecInit(Seq.fill(7)(Module(new Csa(128)).io.Csa))
    CSA2(0).a   := CSA1(0).sum 
    CSA2(0).b   := CSA1(0).cout 
    CSA2(0).cin := CSA1(1).sum
    CSA2(1).a   := CSA1(1).cout 
    CSA2(1).b   := CSA1(2).sum 
    CSA2(1).cin := CSA1(2).cout
    CSA2(2).a   := CSA1(3).sum 
    CSA2(2).b   := CSA1(3).cout 
    CSA2(2).cin := CSA1(4).sum 
    CSA2(3).a   := CSA1(4).cout 
    CSA2(3).b   := CSA1(5).sum  
    CSA2(3).cin := CSA1(5).cout
    CSA2(4).a   := CSA1(6).sum 
    CSA2(4).b   := CSA1(6).cout 
    CSA2(4).cin := CSA1(7).sum 
    CSA2(5).a   := CSA1(7).cout
    CSA2(5).b   := CSA1(8).sum  
    CSA2(5).cin := CSA1(8).cout
    CSA2(6).a   := CSA1(9).sum 
    CSA2(6).b   := CSA1(9).cout 
    CSA2(6).cin := BoothGen(30).Choose.PartProdOut << 60.U
    //layer3    14+1 = 15 15/3 = 5
    val CSA3 = VecInit(Seq.fill(5)(Module(new Csa(128)).io.Csa))
    CSA3(0).a   := CSA2(0).sum 
    CSA3(0).b   := CSA2(0).cout 
    CSA3(0).cin := CSA2(1).sum 
    CSA3(1).a   := CSA2(1).cout
    CSA3(1).b   := CSA2(2).sum  
    CSA3(1).cin := CSA2(2).cout
    CSA3(2).a   := CSA2(3).sum 
    CSA3(2).b   := CSA2(3).cout 
    CSA3(2).cin := CSA2(4).sum 
    CSA3(3).a   := CSA2(4).cout
    CSA3(3).b   := CSA2(5).sum  
    CSA3(3).cin := CSA2(5).cout
    CSA3(4).a   := CSA2(6).sum 
    CSA3(4).b   := CSA2(6).cout 
    CSA3(4).cin := BoothGen(31).Choose.PartProdOut << 62.U

    //layer4    10  10/3 = 3  + 1
    val CSA4 = VecInit(Seq.fill(3)(Module(new Csa(128)).io.Csa))
    CSA4(0).a   := CSA3(0).sum 
    CSA4(0).b   := CSA3(0).cout 
    CSA4(0).cin := CSA3(1).sum 
    CSA4(1).a   := CSA3(1).cout 
    CSA4(1).b   := CSA3(2).sum  
    CSA4(1).cin := CSA3(2).cout
    CSA4(2).a   := CSA3(3).sum 
    CSA4(2).b   := CSA3(3).cout 
    CSA4(2).cin := CSA3(4).sum
    //layer5    6+1 = 7    7/3 = 2 + 1
    val CSA5 = VecInit(Seq.fill(2)(Module(new Csa(128)).io.Csa))
    CSA5(0).a   := CSA4(0).sum 
    CSA5(0).b   := CSA4(0).cout 
    CSA5(0).cin := CSA4(1).sum 
    CSA5(1).a   := CSA4(1).cout
    CSA5(1).b   := CSA4(2).sum  
    CSA5(1).cin := CSA4(2).cout
    //layer6    4+1  = 5     5/3 = 1 + 2
    val CSA6 = VecInit(Seq.fill(1)(Module(new Csa(128)).io.Csa))
    CSA6(0).a   := CSA5(0).sum 
    CSA6(0).b   := CSA5(0).cout 
    CSA6(0).cin := CSA5(1).sum
    //layer7    2+2  = 4   4/3 = 1 + 1
    val CSA7 = VecInit(Seq.fill(1)(Module(new Csa(128)).io.Csa))
    CSA7(0).a   := CSA6(0).sum 
    CSA7(0).b   := CSA6(0).cout 
    CSA7(0).cin := CSA3(4).cout
    //layer8    2+1 = 3
    val CSA8 = VecInit(Seq.fill(1)(Module(new Csa(128)).io.Csa))
    CSA8(0).a   := CSA7(0).sum 
    CSA8(0).b   := CSA7(0).cout 
    CSA8(0).cin := CSA5(1).cout
    //layer8    2 HA
    //val HA = Module(new FA(128)).io.Fa
    //HA.a := CSA8(0).sum
    //HA.b := CSA8(0).cout
    //HA.cin := 0.U
    io.Exu.MulReady := true.B
    io.Exu.OutValid := true.B
    io.Exu.ResultL := CSA8(0).sum+CSA8(0).cout
    io.Exu.ResultH := 0.U
}


//Mode = 0 移位乘法器   Mode = 1 基4 Booth乘法器
class Multi(Mode : Int = 0) extends Module with MulDivParm{
    val io = IO(new Bundle{
        val Exu = new MultiIO
    })
    io.Exu.MulReady := false.B
    io.Exu.OutValid := false.B
    io.Exu.ResultH := 0.U
    io.Exu.ResultL := 0.U
    //非高性能  //移位乘法器
    //
    if(Mode == 0 ){
        val multican = RegInit(0.U((2*xlen).W)) // 被乘数
        val multicancomp = RegInit(0.U((2*xlen).W))
        val multier  = RegInit(0.U((xlen).W)) //乘数
        val MulRes = RegInit(0.U((2*xlen).W))
        val multicount =RegInit(0.U(6.W))
        val mulw = RegInit(0.U(1.W))
        val signed   = RegInit(0.U(2.W))
        val sIdle :: sBusy :: sValid :: Nil = Enum(3)
        val MainState = RegInit(sIdle)
        switch(MainState){
            is(sIdle){
                io.Exu.MulReady := true.B
                when(io.Exu.MulValid){
                    MainState := sBusy
                    val multicanext = MuxLookup(io.Exu.MulSigned,io.Exu.Multiplicand,Seq(
                        "b11".U->func.SignExtWidth(2*xlen,io.Exu.Multiplicand,xlen),
                        "b00".U->func.UsignExtWidth(2*xlen,io.Exu.Multiplicand,xlen),
                    ))
                    multican := multicanext
                    multicancomp := ~multicanext+ 1.U

                    multier  := io.Exu.Multiplier
                    signed := io.Exu.MulSigned
                    multicount := Mux(io.Exu.Mulw===1.U,31.U,63.U)
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
                MulRes := 0.U
                io.Exu.OutValid := true.B
                io.Exu.ResultL := MulRes(63,0)
                io.Exu.ResultH := MulRes(127,64)
            }
        }
    }
    //Radix 4 Booth
    else if (Mode == 1){
        //两个寄存器 维护部分积和加数S
        val Prod = RegInit(0.U((2*(xlen+2)).W))
        val Sum  = RegInit(0.U((2*(xlen+2)).W))
        val multier = RegInit(0.U(xlen.W))
        val ind  = RegInit(0.U(8.W))//索引
        val MaxInd = RegInit(0.U(6.W)) // ind 最大值
        val RegUnsign = RegInit(0.U(2.W))
        val choose = Module(new PartProductChoose)
        choose.io.Choose.PartProdIn := Prod
        choose.io.Choose.S          := Sum
        choose.io.Choose.BAdd       := 0.U
        choose.io.Choose.B          := 0.U
        choose.io.Choose.BSub       := 0.U
        choose.io.Choose.HighUsign  := false.B
        val sIdle :: sBusy :: sValid :: Nil = Enum(3)
        val MainState = RegInit(sIdle)
        switch(MainState){
            is(sIdle){
                io.Exu.MulReady := true.B
                when(io.Exu.MulValid){
                    MainState   := sBusy
                    Prod        := 0.U
                    Sum         := Mux(io.Exu.Mulw===1.U,io.Exu.Multiplicand << 32.U,io.Exu.Multiplicand << 64.U)
                    multier     := io.Exu.Multiplier
                    ind         := 0.U
                    MaxInd      := Mux(io.Exu.Mulw===1.U,30.U,62.U)
                    RegUnsign   := io.Exu.MulSigned
                }
            }
            is(sBusy){
                //
                when(io.Exu.Flush){
                    Prod := 0.U
                    MainState := sIdle
                }
                choose.io.Choose.BSub := Mux(ind===0.U,0.U,multier(ind-1.U))
                choose.io.Choose.B    := multier(ind)
                choose.io.Choose.BAdd := multier(ind+1.U)
                //P(i+2) = 2^-2(P(i)+(b(i-1)+b(i)-2b(i+1)S))
                when(ind=/=MaxInd){
                    Prod := choose.io.Choose.PartProdOut
                    ind := ind + 2.U
                }.otherwise{
                    //计算p i+2的  
                    choose.io.Choose.HighUsign := Mux(RegUnsign===0.U,true.B,false.B)
                    Prod := choose.io.Choose.PartProdOut
                    MainState := sValid
                }
                
            }
            is(sValid){
                MainState := sIdle
                Prod := 0.U
                io.Exu.OutValid := true.B
                io.Exu.ResultL := Prod(63,0)
                io.Exu.ResultH := Prod(127,64)
            }
        }
    }else if(Mode == 2){
        //Wallace Tree
        val wallace = Module(new Wallace)
        wallace.io.Exu <> io.Exu
    }
}
//Div
class DivIO extends Bundle with MulDivParm{
    val DivValid        = Input(Bool())//为高表示输入的数据有效，如果没有新的输入，除法被接受的下一个周期要拉低
    val Flush           = Input(Bool())//为高取消除法
    val Divw            = Input(Bool())//32位
    val DivSigned       = Input(UInt(2.W))//b11 s*s   b10 s*u  b00 u*u
    val Divdend         = Input(UInt(xlen.W)) //被除数
    val Divisor         = Input(UInt(xlen.W)) //除数
    val DivReady        = Output(Bool())
    val OutValid        = Output(Bool())
    val Quotient        = Output(UInt(xlen.W)) // 商
    val Remainder       = Output(UInt(xlen.W)) // 余数
}
//目前只支持无符号运算
class Divder(HighPerform : Boolean = false) extends Module with MulDivParm{
    val io = IO(new Bundle{
        val Exu = new DivIO
    })
    io.Exu.DivReady   := false.B
    io.Exu.OutValid   := false.B
    io.Exu.Quotient   := 0.U
    io.Exu.Remainder  := 0.U
    //非高性能  //移位除法器
    
    if(!HighPerform){
        val divdend     = RegInit(0.U((2*xlen).W)) // 被除数
        val divdendcmp  = RegInit(0.U((2*xlen).W))
        val divisor     = RegInit(0.U((2*xlen).W)) //除数
        val DivRes      = RegInit(0.U((2*xlen).W))
        val divcount    = RegInit(0.U(6.W))
        val divw        = RegInit(0.U(1.W))
        val signed      = RegInit(0.U(2.W))
        val symbol      = RegInit(0.U(1.W)) //有符号的情况下，记录符号位
        //对于有符号的情况，直接取其数值当作无符号作运算，最后的结果再根据情况调整符号
        val cmpRes = Mux(io.Exu.Divw===0.U,DivRes(127,64),DivRes(63,32))
        val cmpDivs = Mux(io.Exu.Divw===0.U,divisor(127,64),divisor(63,32))
        val divdendsign = Mux(io.Exu.Divw===1.U,io.Exu.Divdend(31),io.Exu.Divdend(63))
        val divendSignReg = RegInit(0.U(1.W))
        val divisorsign = Mux(io.Exu.Divw===1.U,io.Exu.Divisor(31),io.Exu.Divisor(63))
        val sIdle :: sBusy :: sValid :: Nil = Enum(3)
        val MainState = RegInit(sIdle)
        switch(MainState){
            is(sIdle){
                io.Exu.DivReady := true.B
                when(io.Exu.DivValid){
                    MainState  := sBusy
                    //如果是负数 转化为补码取绝对值
                    val choosedivdend = MuxLookup(io.Exu.DivSigned,io.Exu.Divdend,Seq(
                        "b00".U -> io.Exu.Divdend,
                        "b11".U -> Mux(divdendsign,~io.Exu.Divdend+1.U,io.Exu.Divdend)
                    ))
                    divdend := choosedivdend
                    divdendcmp := ~io.Exu.Divdend + 1.U
                    val choosedivsior = MuxLookup(io.Exu.DivSigned,io.Exu.Divisor,Seq(
                        "b00".U -> io.Exu.Divisor,
                        "b11".U -> Mux(divisorsign,~io.Exu.Divisor+1.U,io.Exu.Divisor)
                    ))
                    divendSignReg := divdendsign
                    divisor    := Mux(io.Exu.Divw===1.U,choosedivsior<<32.U,choosedivsior<<64.U)
                    signed     := io.Exu.DivSigned
                    symbol     := divdendsign^divisorsign
                    divcount   := Mux(io.Exu.Divw===1.U,31.U,63.U)
                    divw       := io.Exu.Divw
                    DivRes     := choosedivdend<<1.U
                }
            }
            is(sBusy){
                //
                when(io.Exu.Flush){
                    DivRes := 0.U
                    MainState := sIdle
                }
                when(divcount=/=0.U){
                    divcount := divcount - 1.U
                    when( cmpRes >= cmpDivs  ){
                        DivRes :=  ((DivRes - divisor) + 1.U)<<1.U
                    }.otherwise{
                        DivRes := DivRes << 1.U
                    }    
                                        
                }.otherwise{
                    when( cmpRes >= cmpDivs  ){
                        DivRes :=  ((DivRes - divisor) + 1.U)
                    }
                    MainState := sValid
                }
            }
            is(sValid){
                MainState := sIdle
                DivRes := 0.U
                io.Exu.OutValid := true.B
                //整理一下 有符号数
                //商的正负好理解
                //余数的正负  应该是与被除数的正负相同
                val quotient = Mux(io.Exu.Divw===1.U,DivRes(31,0),DivRes(63,0))
                io.Exu.Quotient := MuxLookup(signed,quotient,Seq(
                    "b00".U -> quotient,
                    "b11".U -> Mux(symbol===1.U,~quotient+1.U,quotient)
                ))
                val remainder =  Mux(io.Exu.Divw===1.U,DivRes(63,32),DivRes(127,64))
                io.Exu.Remainder := MuxLookup(signed,remainder,Seq(
                    "b00".U -> remainder,
                    "b11".U -> Mux(divendSignReg===1.U,~remainder+1.U,remainder)
                ))
            }
        }
    }
}