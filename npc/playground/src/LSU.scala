package  npc
import chisel3._
import chisel3.util._

import chisel3.util.HasBlackBoxInline

class LSU extends Module{
    val io = IO(new Bundle {
      val EXLS = Flipped(new Exu2Lsu)
      val LSWB = new Lsu2Wbu
      val Cache = new Cpu2Cache
      val LSRAM = new Lsu2Sram
//if(parm.DIFFTEST){
      val SkipRef = Output(Bool())
//}
      val LSCLINT = new Lsu2Clint
      val PC = new Lsu2pc
      //val Lsuvalid = Output(Bool())
  })
  val CLINTREAD  = (io.EXLS.readaddr< parm.CLINTEND.U) && (io.EXLS.readaddr>=parm.CLINTBASE.U)
  val CLINTWRITE = (io.EXLS.writeaddr< parm.CLINTEND.U) && (io.EXLS.writeaddr>=parm.CLINTBASE.U)
  val readdata = Wire(UInt(parm.REGWIDTH.W))
  val LsuDpidata = Wire(UInt(parm.REGWIDTH.W))
  LsuDpidata := 0.U
  //asTypeOf MaskWidth
  val LsuBusyReg = RegInit(0.U(1.W))//指示Lsu模块是否繁忙，即是否处于读写内存的状态  默认0表示不忙
  val LsumaskReg = RegInit(0.U(parm.MaskWidth.W))//*
  val chooseReg  = RegInit(0.U(parm.RegFileChooseWidth.W))//*
  val IoRegfile = RegInit(0.U.asTypeOf(new REGFILEIO)) //*
  val RdAddrReg = RegInit(0.U(parm.REGWIDTH.W))
  val WrDataReg = RegInit(0.U(parm.REGWIDTH.W))
  val WrMaskReg = RegInit(0.U(parm.BYTEWIDTH.W))
  io.Cache.Cache.valid := false.B 
  io.Cache.Cache.op    := 0.U
  io.Cache.Cache.addr  := 0.U
  io.Cache.Cache.wdata := 0.U
  io.Cache.Cache.wstrb := 0.U
  io.SkipRef := false.B
  if(parm.DIFFTEST){
      val readskip = (io.EXLS.readaddr< parm.PMEM_RIGHT.U) && (io.EXLS.readaddr>=parm.PMEM_LEFT.U)
      val writeskip= (io.EXLS.writeaddr< parm.PMEM_RIGHT.U) && (io.EXLS.writeaddr>=parm.PMEM_LEFT.U)
      io.SkipRef := (!readskip& io.EXLS.rflag)| (!writeskip&io.EXLS.wflag)
  }
  if(parm.MODE == "single"){
    if(parm.DPI){
      val LsuDPI = Module(new LSUDPI) 
      LsuDPI.io.wflag := io.EXLS.wflag & !CLINTWRITE
      LsuDPI.io.rflag := io.EXLS.rflag & !CLINTREAD
      LsuDPI.io.raddr := io.EXLS.readaddr  
      LsuDPI.io.waddr := io.EXLS.writeaddr 
      LsuDPI.io.wdata := io.EXLS.writedata 
      LsuDPI.io.wmask := io.EXLS.wmask 
      LsuDpidata := LsuDPI.io.rdata
      //io.LsuRes := LsuDPI.io.rdata
    }
  }
  else{
    //非读写内存的情况下 的读写状态机,用于与总线之间通信
    val readWait ::readReady :: read :: Nil = Enum(3)
    val ReadState = RegInit(readWait)
    //Intial
    io.LSRAM.Axi.ar.valid := false.B
    io.LSRAM.Axi.ar.bits.addr := io.EXLS.readaddr
    io.LSRAM.Axi.ar.bits.len  := 0.U
    io.LSRAM.Axi.ar.bits.size := 3.U
    io.LSRAM.Axi.ar.bits.burst := "b01".U 
    io.LSRAM.Axi.r.ready := false.B
    io.LSRAM.Axi.aw.valid := false.B
    io.LSRAM.Axi.aw.bits.addr := 0.U
    io.LSRAM.Axi.aw.bits.len := 0.U
    io.LSRAM.Axi.aw.bits.size := 3.U
    io.LSRAM.Axi.aw.bits.burst := "b01".U
    io.LSRAM.Axi.w.valid := false.B
    io.LSRAM.Axi.w.bits.data := 0.U
    io.LSRAM.Axi.w.bits.strb := 0.U
    io.LSRAM.Axi.w.bits.last := true.B
    io.LSRAM.Axi.b.ready := false.B
  //state transfer
  //val RegRaddr = RegInit(0.U(AxiParm.AxiAddrWidth.W))
    switch(ReadState){
      is(readWait){
        io.LSRAM.Axi.ar.valid := io.EXLS.rflag & io.SkipRef
        io.LSRAM.Axi.r.ready  := false.B
        //fire = ready & valid
        when(io.LSRAM.Axi.ar.fire){
          io.LSRAM.Axi.ar.bits.addr := io.EXLS.readaddr
          RdAddrReg := io.EXLS.readaddr
          LsumaskReg := io.EXLS.lsumask
          chooseReg := io.EXLS.choose
          IoRegfile := io.EXLS.RegFileIO
          RdAddrReg := io.EXLS.readaddr
          //RegRaddr        := io.LSRAM.Axi.ar.bits.addr
          ReadState  := read
          LsuBusyReg :=1.U
        }.elsewhen(io.LSRAM.Axi.ar.valid){
          //这个周期拉高了，但是数据没有送出去，就要锁存数据了
          ReadState := readReady
          LsumaskReg := io.EXLS.lsumask
          chooseReg := io.EXLS.choose
          IoRegfile := io.EXLS.RegFileIO
          RdAddrReg := io.EXLS.readaddr
          LsuBusyReg :=1.U
        }
      }
      is(readReady){
        io.LSRAM.Axi.ar.valid := true.B
        io.LSRAM.Axi.r.ready := false.B
        when(io.LSRAM.Axi.ar.fire){
          io.LSRAM.Axi.ar.bits.addr := RdAddrReg
          //RegRaddr        := io.LSRAM.Axi.ar.bits.addr
          ReadState  := read
          LsuBusyReg :=1.U
        }
      }
      is(read){
        io.LSRAM.Axi.ar.valid := false.B
        io.LSRAM.Axi.r.ready := true.B
        when(io.LSRAM.Axi.r.fire){
          LsuDpidata := io.LSRAM.Axi.r.bits.data
          //printf(p"ReadAddr=${Hexadecimal(RdAddrReg)} ReadData=${Hexadecimal(LsuDpidata)}\n")
          ReadState := readWait
          LsuBusyReg :=0.U
        }
      }
    }
    val sWritewait :: sWriteReady ::sWrite :: sResp :: Nil = Enum(4)
    val WriteState = RegInit(sWritewait)
    switch(WriteState){
      is(sWritewait){
        io.LSRAM.Axi.aw.valid := io.EXLS.wflag & io.SkipRef
        io.LSRAM.Axi.w.valid := false.B
        when(io.LSRAM.Axi.aw.fire){
          io.LSRAM.Axi.aw.bits.addr := io.EXLS.writeaddr
          WrDataReg :=  io.EXLS.writedata
          WrMaskReg := io.EXLS.wmask
          WriteState := sWrite
          LsuBusyReg :=1.U
        }.elsewhen(io.LSRAM.Axi.aw.valid){
          WrDataReg := io.EXLS.writedata
          WrMaskReg := io.EXLS.wmask
          RdAddrReg := io.EXLS.writeaddr
          WriteState := sWriteReady
          LsuBusyReg :=1.U
        }
      }
      is(sWriteReady){
        io.LSRAM.Axi.aw.valid := true.B
        when(io.LSRAM.Axi.aw.fire){
          io.LSRAM.Axi.aw.bits.addr := RdAddrReg
          WriteState := sWrite
          LsuBusyReg :=1.U
        }
      }
      is(sWrite){
        io.LSRAM.Axi.aw.valid := false.B
        io.LSRAM.Axi.w.valid := true.B
        when(io.LSRAM.Axi.w.fire){
          io.LSRAM.Axi.w.bits.data := WrDataReg
          io.LSRAM.Axi.w.bits.strb := WrMaskReg
          WriteState := sWritewait
          LsuBusyReg :=0.U
        }
      }
      is(sResp){
        io.LSRAM.Axi.b.ready := false.B
        when(io.LSRAM.Axi.b.fire){
          WriteState := sWritewait
        }
      }
    }
    //地址非clint 非设备地址 转发给Cache
    when(!io.SkipRef){
      io.Cache.Cache.valid := (io.EXLS.rflag|io.EXLS.wflag) & (!CLINTREAD) & (!io.SkipRef)
      //不知道Op这样写有没有问题
      io.Cache.Cache.op    := (io.EXLS.wflag) & (!io.EXLS.rflag)
      when(io.EXLS.wflag& !CLINTREAD){
        io.Cache.Cache.addr  := io.EXLS.writeaddr 
        io.Cache.Cache.wdata := io.EXLS.writedata 
        io.Cache.Cache.wstrb := io.EXLS.wmask 
        LsuBusyReg := 1.U
      }.elsewhen(io.EXLS.rflag& !CLINTREAD){
        io.Cache.Cache.addr := io.EXLS.readaddr
        LsuBusyReg := 1.U
      }.otherwise{
        io.Cache.Cache.addr := 0.U
      }
      //确认是读操作，  
      // 读写操作都所存一下，因为后面是根据dataok判断
      //只识别读的话，如果是写操作的dataok，会导致用所存的reg，对通用寄存器发生错误的读写
      when(io.Cache.Cache.valid){
        LsumaskReg := io.EXLS.lsumask
        chooseReg := io.EXLS.choose
        IoRegfile := io.EXLS.RegFileIO
      }
      //读数据完成
      when(io.Cache.Cache.dataok){
        LsuDpidata := io.Cache.Cache.rdata
        LsuBusyReg := 0.U
      }
    }
    
  }

  readdata := Mux(CLINTREAD,io.LSCLINT.Clintls.rdata,LsuDpidata)

  //io.LSRAM.Axi.r.fire   io.LSRAM.Axi.ar.fire
  val LocalMask = Mux(io.Cache.Cache.dataok|io.LSRAM.Axi.r.fire,LsumaskReg,io.EXLS.lsumask)
  val maskRes = MuxLookup(LocalMask, readdata,Seq(
    "b11111".U   -> readdata,
    "b10111".U   ->func.SignExt(func.Mask ((readdata),"x00000000ffffffff".U),32),
    "b10011".U   ->func.SignExt(func.Mask ((readdata),"x000000000000ffff".U),16),
    "b10001".U   ->func.SignExt(func.Mask ((readdata),"x00000000000000ff".U),8),
    "b00111".U   ->func.UsignExt(func.Mask((readdata),"x00000000ffffffff".U),32),
    "b00011".U   ->func.UsignExt(func.Mask((readdata),"x000000000000ffff".U),16),
    "b00001".U   ->func.UsignExt(func.Mask((readdata),"x00000000000000ff".U),8)
  ))
  io.LSWB.LsuRes := maskRes
  io.LSWB.AluRes := io.EXLS.alures
  //并且当前周期的使能要拉低即如果当前周期是发送读请求的那个周期
  //其实也不用拉低，因为最后会用regfile的数据，拉高回来，相当于·刷新了一下
  //
  io.LSWB.choose := Mux(io.Cache.Cache.dataok|io.LSRAM.Axi.r.fire,chooseReg,io.EXLS.choose)//* 读数据延后一个周期，需要的是那个周期的使能和选择信号
  io.LSWB.CsrWb <> io.EXLS.CsrWb
  when(io.Cache.Cache.dataok|io.LSRAM.Axi.r.fire ){
    io.LSWB.Regfile := IoRegfile
  }.elsewhen((io.EXLS.rflag|io.EXLS.wflag) & !CLINTREAD){
    io.LSWB.Regfile := 0.U.asTypeOf(new REGFILEIO) //读写内存的当前周期都要拉低
  }.otherwise{
    io.LSWB.Regfile := io.EXLS.RegFileIO
  }
  //io.LSWB.Regfile.wen <> Mux(io.LSRAM.Axi.r.fire,IoRegfile.wen,Mux(io.LSRAM.Axi.ar.fire,ZeroRegfileIO.wen,io.EXLS.RegFileIO))//*
  io.LSWB.pc := io.EXLS.pc
  io.LSWB.NextPc := io.EXLS.NextPc
  io.LSCLINT.Clintls.wen    := io.EXLS.wflag
  io.LSCLINT.Clintls.ren    := io.EXLS.rflag 
  io.LSCLINT.Clintls.raddr  := io.EXLS.readaddr 
  io.LSCLINT.Clintls.waddr  := io.EXLS.writeaddr
  io.LSCLINT.Clintls.wdata  := io.EXLS.writedata

  io.PC.Lsuvalid := Mux((io.EXLS.rflag|io.EXLS.wflag) & !CLINTREAD,0.U,!LsuBusyReg)
}