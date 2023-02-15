package  npc
import chisel3._
import chisel3.util._

import chisel3.util.HasBlackBoxInline




class LSU extends Module{
    val io = IO(new Bundle {
      val EXLS = Flipped(new Exu2Lsu)
      val LSWB = new Lsu2Wbu
      val Cache = new Cpu2Cache
      //val LSRAM = new Lsu2Sram
//if(parm.DIFFTEST){
      val SkipRef = Output(Bool())
//}
      val LSCLINT = new Lsu2Clint
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
  io.Cache.Cache.valid := false.B 
  io.Cache.Cache.op    := 0.U
  io.Cache.Cache.addr  := 0.U
  io.Cache.Cache.wdata := 0.U
  io.Cache.Cache.wstrb := 0.U
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
    /*
    io.LSRAM.Axi.ar.valid := false.B
    io.LSRAM.Axi.ar.bits.addr := 0.U
    io.LSRAM.Axi.r.ready := false.B
    io.LSRAM.Axi.aw.valid := false.B
    io.LSRAM.Axi.aw.bits.addr := 0.U
    io.LSRAM.Axi.w.valid := false.B     
    io.LSRAM.Axi.w.bits.data := 0.U
    io.LSRAM.Axi.w.bits.strb := 0.U
    io.LSRAM.Axi.b.ready := false.B
    */
    //io.LSRAM.Axi.
  }
  else{
    io.Cache.Cache.valid := (io.EXLS.rflag|io.EXLS.wflag) & !CLINTREAD
    //不知道Op这样写有没有问题
    io.Cache.Cache.op    := (io.EXLS.wflag) & (!io.EXLS.rflag)
    when(io.EXLS.wflag){
      io.Cache.Cache.addr  := io.EXLS.writeaddr 
      io.Cache.Cache.wdata := io.EXLS.writedata 
      io.Cache.Cache.wstrb := io.EXLS.wmask 
      LsuBusyReg := 1.U
    }.elsewhen(io.EXLS.rflag){
      io.Cache.Cache.addr := io.EXLS.readaddr
      LsuBusyReg := 1.U
    }.otherwise{
      io.Cache.Cache.addr := 0.U
    }
    //确认是读操作，
    when(io.EXLS.rflag & !CLINTREAD){
      LsumaskReg := io.EXLS.lsumask
      chooseReg := io.EXLS.choose
      IoRegfile := io.EXLS.RegFileIO
    }
    //读数据完成
    when(io.Cache.Cache.dataok){
      LsuDpidata := io.Cache.Cache.rdata
      LsuBusyReg := 0.U
    }
    /*
    //READ
    val readWait :: read :: Nil = Enum(2)
    val ReadState = RegInit(readWait)
    //Intial
    io.LSRAM.Axi.ar.valid := false.B
    io.LSRAM.Axi.ar.bits.addr := io.EXLS.readaddr  
    io.LSRAM.Axi.r.ready := false.B
    //val FetchInst = Wire(UInt(parm.INSTWIDTH.W))
    //FetchInst := 0.U
    //state transfer
    //val RegRaddr = RegInit(0.U(AxiParm.AxiAddrWidth.W))
    //keep the valid high until it got into read state
    //源端valid信号有效之后要等待目的端ready之后才拉低
    val ArValidReg = RegInit(0.U(1.W)) 
    switch(ReadState){
      is(readWait){
        when(io.EXLS.rflag & !CLINTREAD){
          io.LSRAM.Axi.ar.valid := true.B
          ArValidReg := 1.U
          LsumaskReg := io.EXLS.lsumask
          chooseReg := io.EXLS.choose
          IoRegfile := io.EXLS.RegFileIO
          RdAddrReg := io.EXLS.readaddr 
        }.otherwise{
          io.LSRAM.Axi.ar.valid := ArValidReg
        }
        //io.LSRAM.Axi.ar.valid := io.EXLS.rflag & !CLINTREAD
        io.LSRAM.Axi.r.ready  := false.B
        //fire = ready & valid
        when(io.LSRAM.Axi.ar.fire){
          ArValidReg := 0.U
          RdAddrReg := 0.U
          when(io.EXLS.rflag & !CLINTREAD){
            io.LSRAM.Axi.ar.bits.addr := io.EXLS.readaddr 
          }.otherwise{
            io.LSRAM.Axi.ar.bits.addr := RdAddrReg
          }
          
          ReadState := read
        }
      }
      is(read){
        //ArValidReg := 0.U
        io.LSRAM.Axi.ar.valid := false.B
        io.LSRAM.Axi.r.ready := true.B
        when(io.LSRAM.Axi.r.fire){
          LsuDpidata := io.LSRAM.Axi.r.bits.data
          LsumaskReg := 0.U
          chooseReg := 0.U 
          IoRegfile := 0.U.asTypeOf(new REGFILEIO)
          //FetchInst := io.LSRAM.Axi.r.bits.data(31,0)
          ReadState := readWait
        }
      }
    }
    io.LSRAM.Axi.aw.valid := false.B
    io.LSRAM.Axi.aw.bits.addr := io.EXLS.writeaddr 
    io.LSRAM.Axi.w.valid := false.B
    io.LSRAM.Axi.w.bits.data := io.EXLS.writedata 
    io.LSRAM.Axi.w.bits.strb := io.EXLS.wmask
    io.LSRAM.Axi.b.ready := false.B
    val writeWait :: write :: writeResp :: Nil = Enum(3)
    val WriteState = RegInit(writeWait)
    val RegWData = RegInit(0.U(AxiParm.AxiDataWidth.W))
    val RegWMask = RegInit(0.U(AxiParm.AxiDataWidth.W))
    val wValidReg = RegInit(0.U(1.W))
    val RegWAddr = RegInit(0.U(AxiParm.AxiAddrWidth.W))
    switch(WriteState){
      is(writeWait){
        when(io.EXLS.wflag & !CLINTREAD){
          io.LSRAM.Axi.aw.valid := true.B
          RegWData := io.EXLS.writedata
          RegWMask := io.EXLS.wmask
          RegWAddr := io.EXLS.writeaddr
          wValidReg := 1.U
        }.otherwise{
          io.LSRAM.Axi.aw.valid := wValidReg
        }
        io.LSRAM.Axi.w.valid := false.B
        io.LSRAM.Axi.b.ready := false.B
        when(io.LSRAM.Axi.aw.fire){
          wValidReg := 0.U
          RegWAddr  := 0.U
          WriteState := write
          when(io.EXLS.wflag & !CLINTREAD){
            io.LSRAM.Axi.aw.bits.addr := io.EXLS.writeaddr
          }.otherwise{
            io.LSRAM.Axi.aw.bits.addr := RegWAddr
          }
          
        }
      }
      is(write){
        io.LSRAM.Axi.aw.valid := false.B
        io.LSRAM.Axi.w.valid := true.B
        io.LSRAM.Axi.b.ready := false.B
        when(io.LSRAM.Axi.w.fire){
            RegWData := 0.U
            RegWMask := 0.U
            WriteState := writeWait
            io.LSRAM.Axi.w.bits.data := RegWData
            io.LSRAM.Axi.w.bits.strb := RegWMask
        }
      }
      is(writeResp){
        io.LSRAM.Axi.aw.valid := false.B
        io.LSRAM.Axi.w.valid := false.B
        io.LSRAM.Axi.b.ready := true.B
        when(io.LSRAM.Axi.b.fire){
            WriteState := writeWait
            //io.LSRAM.Axi.b.bits.resp := "b00".U
        }
      }
    }
    */
  }

  readdata := Mux(CLINTREAD,io.LSCLINT.Clintls.rdata,LsuDpidata)
  io.SkipRef := false.B
  if(parm.DIFFTEST){
      val readskip = (io.EXLS.readaddr< parm.PMEM_RIGHT.U) && (io.EXLS.readaddr>=parm.PMEM_LEFT.U)
      val writeskip= (io.EXLS.writeaddr< parm.PMEM_RIGHT.U) && (io.EXLS.writeaddr>=parm.PMEM_LEFT.U)
      io.SkipRef := (!readskip& io.EXLS.rflag)| (!writeskip&io.EXLS.wflag)
  }
  //io.LSRAM.Axi.r.fire   io.LSRAM.Axi.ar.fire
  val LocalMask = Mux(io.Cache.Cache.dataok,LsumaskReg,io.EXLS.lsumask)
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
  //
  io.LSWB.choose := Mux(io.Cache.Cache.dataok,chooseReg,io.EXLS.choose)//* 读数据延后一个周期，需要的是那个周期的使能和选择信号
  io.LSWB.CsrWb <> io.EXLS.CsrWb
  when(io.Cache.Cache.dataok){
    io.LSWB.Regfile := IoRegfile
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

}