
package  npc
import chisel3._
import chisel3.util._

import chisel3.util.HasBlackBoxInline




class LSU extends Module{
    val io = IO(new Bundle {
      val EXLS = Flipped(new Exu2Lsu)
      val LSWB = new Lsu2Wbu
      val LSRAM = new Lsu2Sram
//if(parm.DIFFTEST){
      val SkipRef = Output(Bool())
//}
      val LSCLINT = new Lsu2Clint
  })
  val CLINTREAD  = (io.EXLS.readaddr< parm.CLINTEND.U) && (io.EXLS.readaddr>=parm.CLINTBASE.U)
  val CLINTWRITE = (io.EXLS.writeaddr< parm.CLINTEND.U) && (io.EXLS.writeaddr>=parm.CLINTBASE.U)
  val readdata = Wire(UInt(parm.REGWIDTH.W))
  val LsuDpidata = Wire(UInt(parm.REGWIDTH.W))
  //asTypeOf
  val LsuResReg = RegInit(0.U)//*
  val chooseReg = RegInit(0.U)//*
  val IoRegfile = RegInit(0.U.asTypeOf(new REGFILEIO)) //*
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
    io.LSRAM.Axi.ar.valid := false.B
    io.LSRAM.Axi.ar.bits.addr := 0.U
    io.LSRAM.Axi.r.ready := false.B
    io.LSRAM.Axi.aw.valid := false.B
    io.LSRAM.Axi.aw.bits.addr := 0.U
    io.LSRAM.Axi.w.valid := false.B
    io.LSRAM.Axi.w.bits.data := 0.U
    io.LSRAM.Axi.w.bits.strb := 0.U
    io.LSRAM.Axi.b.ready := false.B
    //io.LSRAM.Axi.
  }
  else{
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
    switch(ReadState){
      is(readWait){
        io.LSRAM.Axi.ar.valid := io.EXLS.rflag & !CLINTREAD
        io.LSRAM.Axi.r.ready  := false.B
        //fire = ready & valid
        when(io.LSRAM.Axi.ar.fire){
          io.LSRAM.Axi.ar.bits.addr := io.EXLS.readaddr 
          //RegRaddr  := io.EXLS.readaddr 
          //记录当前对通用寄存器的使能信息
          chooseReg := io.EXLS.choose
          IoRegfile := io.EXLS.RegFileIO
          ReadState := read
        }
      }
      is(read){
        io.LSRAM.Axi.ar.valid := false.B
        io.LSRAM.Axi.r.ready := true.B
        when(io.LSRAM.Axi.r.fire){
          LsuDpidata := io.LSRAM.Axi.r.bits.data
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
    switch(WriteState){
      is(writeWait){
        io.LSRAM.Axi.aw.valid := io.EXLS.wflag & !CLINTREAD
        io.LSRAM.Axi.w.valid := false.B
        io.LSRAM.Axi.b.ready := false.B
        when(io.LSRAM.Axi.aw.fire){
            WriteState := write
            io.LSRAM.Axi.aw.bits.addr := io.EXLS.writeaddr
            RegWData := io.EXLS.writedata
            RegWMask := io.EXLS.wmask
        }
      }
      is(write){
        io.LSRAM.Axi.aw.valid := false.B
        io.LSRAM.Axi.w.valid := true.B
        io.LSRAM.Axi.b.ready := false.B
        when(io.LSRAM.Axi.w.fire){
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

  }

  readdata := Mux(CLINTREAD,io.LSCLINT.Clintls.rdata,LsuDpidata)
  io.SkipRef := false.B
  if(parm.DIFFTEST){
      val readskip = (io.EXLS.readaddr< parm.PMEM_RIGHT.U) && (io.EXLS.readaddr>=parm.PMEM_LEFT.U)
      val writeskip= (io.EXLS.writeaddr< parm.PMEM_RIGHT.U) && (io.EXLS.writeaddr>=parm.PMEM_LEFT.U)
      io.SkipRef := (!readskip& io.EXLS.rflag)| (!writeskip&io.EXLS.wflag)
  }

  val maskRes = MuxLookup(io.EXLS.lsumask, readdata,Seq(
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
  val ZeroRegfileIO = RegInit(0.U.asTypeOf(new REGFILEIO))
  ZeroRegfileIO.wen := 0.U
  ZeroRegfileIO.waddr := 0.U
  ZeroRegfileIO.wdata := 0.U
  io.LSWB.choose := Mux(io.LSRAM.Axi.r.fire,chooseReg,Mux(io.LSRAM.Axi.ar.fire,0.U,io.EXLS.choose))//* 读数据延后一个周期，需要的是那个周期的使能和选择信号
  io.LSWB.CsrWb <> io.EXLS.CsrWb
  when(io.LSRAM.Axi.r.fire){
    io.LSWB.Regfile := IoRegfile
  }.elsewhen(io.LSRAM.Axi.ar.fire){
    io.LSWB.Regfile := 0.U.asTypeOf(new REGFILEIO)
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