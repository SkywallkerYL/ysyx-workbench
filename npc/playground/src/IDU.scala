package npc

import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline

//译码阶段提取立即数 操作类型 两个操作数

class IDU extends Module{
    val io = IO(new Bundle {
    val IFID = Flipped((new Ifu2Idu))
    val NPC = Flipped((new Npc2Idu))
    val RegFileID = Flipped((new Regfile2Idu))
    val IDRegFile = ((new Idu2Regfile))
    val instr_o = Output(UInt(parm.INSTWIDTH.W))
    val pc_o = Output(UInt(parm.PCWIDTH.W))
    val idex = new Idu2Exu
    val IDNPC = new Idu2Npc
    val ebreak = Output(Bool())
    val instrnoimpl = Output(Bool())

    val ReadyIF = new Idu2Ifu
    val ReadyEX = Flipped(new Exu2Idu)
    val Score = new Idu2Score
  })
  //检测到RAW冲突的时候阻塞流水线
    io.ReadyIF.ready := io.ReadyEX.ready & (!io.Score.RScore.busy1) &(!io.Score.RScore.busy2)
    io.instrnoimpl := false.B;
    io.instr_o := io.IFID.inst
    io.pc_o := io.IFID.pc
    io.IDNPC.jal := 0.U
    io.IDRegFile.raddr1 := io.IFID.inst(19,15)
    io.IDRegFile.raddr2 := io.IFID.inst(24,20)
    io.Score.RScore.rdaddr1 := io.IDRegFile.raddr1
    io.Score.RScore.rdaddr2 := io.IDRegFile.raddr2
    io.Score.RScore.valid := io.IFID.instvalid
    io.Score.WScore.wen   := io.idex.rden
    io.Score.WScore.waddr := io.idex.rdaddr
    val shamt = io.IFID.inst(25,20)
    io.idex.pc := io.IFID.pc
    io.idex.inst := io.IFID.inst
    io.idex.valid := io.IFID.instvalid
    io.idex.rdaddr := io.IFID.inst(11,7)
    io.idex.rs1 := io.RegFileID.rdata1
    io.idex.rs2 := io.RegFileID.rdata2
    io.idex.rflag := 0.U
    io.idex.wflag := 0.U
    io.idex.wmask := 0.U(parm.BYTEWIDTH.W)
    io.idex.alumask := "b11111".U(parm.MaskWidth.W)
    io.idex.lsumask := "b11111".U(parm.MaskWidth.W)
    io.idex.src1mask := "b11111".U(parm.MaskWidth.W)
    io.idex.src2mask := "b11111".U(parm.MaskWidth.W)
    io.idex.choose := 0.U
    io.IDNPC.mretpc := 0.U
    io.IDNPC.ecallpc := 0.U
    io.IDNPC.IdPc := io.IFID.pc
    io.IDNPC.imm := io.idex.imm
    io.IDNPC.rs1 := io.idex.rs1
    io.IDNPC.instvalid := io.IFID.instvalid
    io.idex.instvalid := io.IFID.instvalid //& (io.IDNPC.jal === 0.U)
    io.idex.NextPc := io.NPC.NextPc
    //io.ls.pc := 0.U

    //io.func7 := io.IFID.inst(31,25)
    //io.func3 := io.IFID.inst(14,12)
    //io.opcode := io.IFID.inst(6,0)
    io.idex.rden := 1.U
    io.idex.CsrWb.CsrAddr := "b00000000".U
    io.idex.CsrWb.ecall := 0.U
    io.idex.CsrWb.mret  := 0.U
    //io.idex.CsrWb.CSR <> io.RegFileID.CSRs
    io.idex.CsrWb.CsrExuChoose := "b00000000".U
    io.idex.CsrWb.csrflag :=0.U

    val sign = io.IFID.inst(31)
    
    val I_imm = Fill((parm.REGWIDTH-12),sign) ## (io.IFID.inst(31,20))
    val U_imm = Fill((parm.REGWIDTH-32),sign) ## io.IFID.inst(31,12) ## Fill((12),0.U)
    val J_imm = Fill((parm.REGWIDTH-20),sign) ## io.IFID.inst(19,12) ## io.IFID.inst(20) ## io.IFID.inst(30,21) ## 0.U
    val B_imm = Fill((parm.REGWIDTH-12),sign) ## io.IFID.inst(7) ## io.IFID.inst(30,25) ## io.IFID.inst(11,8) ##0.U
    val S_imm = Fill((parm.REGWIDTH-12),sign) ## io.IFID.inst(31,25) ## io.IFID.inst(11,7)
//CSR
    val zimm    = func.UsignExt(io.IFID.inst(19,15),5)
    val CSRTYPE = io.IFID.inst(31,20)//func.UsignExt(io.IFID.inst(31,20),12)
    val CSRs = Wire(UInt(parm.REGWIDTH.W))
    CSRs := 0.U
    //io.idex.CsrWb.CSRs := CSRs

    //default
    io.idex.AluOp.rd1 := 0.U
    io.idex.AluOp.rd2 := 0.U
    io.idex.AluOp.op  := 0.U
    io.idex.imm := 0.U
    val DecodeRes = ListLookup(io.IFID.inst,InstrTable.Default,InstrTable.InstrMap)
    val InstType = DecodeRes(InstrTable.InstrT)
    io.idex.AluOp.op := DecodeRes(InstrTable.OpT)
    val rd1 = Wire(UInt(parm.REGWIDTH.W))
    val rd2 = Wire(UInt(parm.REGWIDTH.W))
    rd1 := 0.U
    rd2 := 0.U
    //注意每一条指令对内存 以及寄存器堆的读写使能 这样子在执行别的指令时，其他的结果仍然是被计算的，这样子就会造成对内存
    //或者寄存器的错误写入和读取 对寄存器的写默认拉高 对内存的读写默认拉低
    switch(InstType){
        is(InstrType.I){
            //printf(p"TYPE=${(InstType)} \n")
            io.idex.imm := I_imm//.asSInt
            rd1 := io.RegFileID.rdata1
            rd2 := I_imm.asUInt
            val stype = DecodeRes(InstrTable.InstrN)
            val lsuflag = MuxLookup(stype, "b11111_11111_11111_11111_0000_1_0_0_0000_0000".U(35.W),Seq(
                                    //src1mask_src2mask_alumask_lsumask_choose_rden_wflag_rflag_wmask
                OpIType.LD      ->"b11111_11111_11111_11111_0001_1_0_1_0000_0000".U(35.W),
                OpIType.LW      ->"b11111_11111_11111_10111_0001_1_0_1_0000_0000".U(35.W),
                OpIType.LWU     ->"b11111_11111_11111_00111_0001_1_0_1_0000_0000".U(35.W),
                OpIType.LH      ->"b11111_11111_11111_10011_0001_1_0_1_0000_0000".U(35.W),
                OpIType.LHU     ->"b11111_11111_11111_00011_0001_1_0_1_0000_0000".U(35.W),
                OpIType.LBU     ->"b11111_11111_11111_00001_0001_1_0_1_0000_0000".U(35.W),
                OpIType.LB      ->"b11111_11111_11111_10001_0001_1_0_1_0000_0000".U(35.W),
                OpIType.ADDIW   ->"b11111_11111_10111_11111_0000_1_0_0_0000_0000".U(35.W),
                //OpIType.ANDI    ->"b11111_11111_11111_11111_0000_1_0_0_0000_0000".U(35.W),
                OpIType.SRAI    ->"b11111_10000_11111_11111_0000_1_0_0_0000_0000".U(35.W),
                OpIType.SRAIW   ->"b10111_10000_10111_11111_0000_1_0_0_0000_0000".U(35.W),
                OpIType.SRLIW   ->"b00111_10000_10111_11111_0000_1_0_0_0000_0000".U(35.W),
                OpIType.SRLI    ->"b11111_10000_11111_11111_0000_1_0_0_0000_0000".U(35.W),
                OpIType.SLLI    ->"b11111_10000_11111_11111_0000_1_0_0_0000_0000".U(35.W),
                OpIType.SLLIW   ->"b11111_10000_10111_11111_0000_1_0_0_0000_0000".U(35.W),
                //CSR
                OpIType.CSRR    ->"b11111_11100_11111_11111_0010_1_0_0_0000_0000".U(35.W),
                OpIType.CSRRW   ->"b11111_11110_11111_11111_0010_1_0_0_0000_0000".U(35.W)
            ))
            io.idex.wflag := lsuflag(9)
            io.idex.rflag := lsuflag(8)
            io.idex.wmask := lsuflag(7,0)
            io.idex.rden := lsuflag(10)
            io.idex.choose := lsuflag(14,11)
            io.idex.lsumask := lsuflag(19,15)
            io.idex.alumask := lsuflag(24,20)
            io.idex.src2mask := lsuflag(29,25)
            io.idex.src1mask := lsuflag(34,30) 
            //CSR
            val csrflag =  MuxLookup(stype, false.B,Seq(                 
                OpIType.CSRR     ->true.B,
                OpIType.CSRRW   ->true.B
            ))
            val csraddr = MuxLookup(CSRTYPE, "b00000000".U(parm.CSRNUMBER.W),Seq(
                                    
                parm.MEPC.U     ->"b00000001".U(parm.CSRNUMBER.W),
                parm.MCAUSE.U   ->"b00000010".U(parm.CSRNUMBER.W),
                parm.MTVEC.U    ->"b00000100".U(parm.CSRNUMBER.W),
                parm.MSTATUS.U  ->"b00001000".U(parm.CSRNUMBER.W),
                parm.CSRMIE.U   ->"b00010000".U(parm.CSRNUMBER.W),
                parm.CSRMIP.U   ->"b00100000".U(parm.CSRNUMBER.W)
            ))
            /*
            CSRs := MuxLookup(CSRTYPE, 0.U(parm.REGWIDTH.W),Seq(    
                parm.MEPC.U     ->io.RegFileID.CSRs.mepc,
                parm.MCAUSE.U   ->io.RegFileID.CSRs.mcause,
                parm.MTVEC.U    ->io.RegFileID.CSRs.mtvec,
                parm.MSTATUS.U  ->io.RegFileID.CSRs.mstatus,
                parm.CSRMIE.U   ->io.RegFileID.CSRs.mie,
                parm.CSRMIP.U   ->io.RegFileID.CSRs.mip
            ))
            */
            //io.idex.CsrWb.CSRs := CSRs
            io.idex.CsrWb.csrflag := csrflag
            io.idex.CsrWb.CsrAddr := csraddr & Fill(parm.CSRNUMBER,csrflag) //Mux(csrflag,csraddr,"b0000".U)
            io.idex.CsrWb.CsrExuChoose := csraddr //正好要写入的Csr时，就使用EXU的计算结果，因此直接接过来
            when(DecodeRes(InstrTable.InstrN) === OpIType.JALR)
            {
                rd1 := io.IFID.pc
                rd2 := 4.U
                //io.idex.AluOp.op  := OpType.ADD
                io.IDNPC.jal := 2.U
            }
            when(DecodeRes(InstrTable.InstrN) === OpIType.ECALL)
            {
                io.IDNPC.jal := 4.U
                rd1 := io.IFID.pc
                io.IDNPC.ecallpc := io.RegFileID.CSRs.mtvec
              // io.idex.CsrWb.CSR.mstatus := func.EcallMstatus(io.RegFileID.CSRs.mstatus)
               // io.IDRegFile.raddr2 := 17.U
                //io.idex.CsrWb.CSR.mcause := func.Mcause(io.RegFileID.rdata2,io.RegFileID.CSRs.mcause)
                //io.idex.CsrWb.CSR.mepc := io.IFID.pc
                io.idex.CsrWb.CsrAddr := "b00001011".U
                io.idex.CsrWb.ecall := 1.U
                io.idex.CsrWb.CsrExuChoose :="b00000000".U // 为1的寄存器选择ALU结果写入，否则选择这里的ecall结果
            }
        }
        is(InstrType.R){
            //io.idex.imm := R_imm
            rd1 := io.RegFileID.rdata1
            rd2 := io.RegFileID.rdata2
            val rtype = DecodeRes(InstrTable.InstrN)
            val lsuflag = MuxLookup(rtype, "b11111_11111_11111_11111_0000_1_0_0_0000_0000".U(35.W),Seq(
                                    //src1mask_src2mask__alumask_lsumask_choose_rden_wflag_rflag_wmask
                OpRType.ADDW ->"b11111_11111_10111_11111_0000_1_0_0_0000_0000".U(35.W),
                OpRType.SUBW ->"b11111_11111_10111_11111_0000_1_0_0_0000_0000".U(35.W),
                OpRType.MULW ->"b11111_11111_10111_11111_0000_1_0_0_0000_0000".U(35.W),
                OpRType.DIVW ->"b10111_10111_10111_11111_0000_1_0_0_0000_0000".U(35.W),
                OpRType.DIVUW->"b10111_10111_10111_11111_0000_1_0_0_0000_0000".U(35.W),
                OpRType.REMW ->"b10111_10111_10111_11111_0000_1_0_0_0000_0000".U(35.W),
                OpRType.SLLW ->"b11111_11000_10111_11111_0000_1_0_0_0000_0000".U(35.W),
                //OpRType.SLL  ->"b11111_11100_11111_11111_0000_1_0_0_0000_0000".U(35.W),
                OpRType.SRLW ->"b00111_11000_10111_11111_0000_1_0_0_0000_0000".U(35.W),
                OpRType.SRL  ->"b11111_11101_11111_11111_0000_1_0_0_0000_0000".U(35.W),
                OpRType.SRAW ->"b10111_11000_10111_11111_0000_1_0_0_0000_0000".U(35.W),
            ))
            io.idex.wflag := lsuflag(9)
            io.idex.rflag := lsuflag(8)
            io.idex.wmask := lsuflag(7,0)
            io.idex.rden := lsuflag(10)
            io.idex.choose := lsuflag(14,11)
            io.idex.lsumask := lsuflag(19,15)
            io.idex.alumask := lsuflag(24,20)
            io.idex.src2mask := lsuflag(29,25)
            io.idex.src1mask := lsuflag(34,30)
            when(DecodeRes(InstrTable.InstrN) === OpRType.MRET)
            {
                io.IDNPC.jal := 5.U
                //io.idex.CsrWb.CSR.mstatus := func.MretMstatus(io.RegFileID.CSRs.mstatus)
                io.idex.CsrWb.CsrAddr := "b00001000".U
                io.idex.CsrWb.mret := 1.U
                io.idex.CsrWb.CsrExuChoose :="b00000000".U // 为1的寄存器选择ALU结果写入，否则选择这里的ecall结果
                io.IDNPC.mretpc := io.RegFileID.CSRs.mepc
            }
        }
        is(InstrType.U){
            io.idex.imm := U_imm//.asSInt
            rd1 := U_imm.asUInt
            val Uty = DecodeRes(InstrTable.InstrN)
            // 0->lui->0.U  1->auipc->pc
            rd2 := Mux(Uty(0),io.IFID.pc,0.U)
            //io.idex.AluOp.op := OpType.ADD
        }
        is(InstrType.J){
            io.idex.imm := J_imm//.asSInt
            rd1 := io.IFID.pc
            rd2 := 4.U
            //io.idex.rden := 0.U
            //io.idex.AluOp.op  := OpType.ADD
            io.IDNPC.jal := 1.U
        }
        is(InstrType.B){
            io.idex.imm := B_imm//.asSInt
            //io.idex.AluOp.rd1 := io.IFID.pc
            //io.idex.AluOp.rd2 := B_imm.asUInt
            val byte = DecodeRes(InstrTable.InstrN)
            val less = Mux(byte(0),io.RegFileID.rdata1.asUInt < io.RegFileID.rdata2.asUInt, io.RegFileID.rdata1.asSInt < io.RegFileID.rdata2.asSInt)
            val bigger = Mux(byte(0),io.RegFileID.rdata1.asUInt > io.RegFileID.rdata2.asUInt, io.RegFileID.rdata1.asSInt > io.RegFileID.rdata2.asSInt)
            val eq = io.RegFileID.rdata1 === io.RegFileID.rdata2
            val ueq = io.RegFileID.rdata1 =/= io.RegFileID.rdata2
            io.idex.rden := 0.U
            val jump = (less&byte(1)) | (bigger&(byte(2))) | (eq & byte(3)) | (ueq & byte(4))
            //io.idex.AluOp.op  := OpType.ADD
            io.IDNPC.jal := Mux(jump,3.U,0.U)
        }
        is (InstrType.S){
            io.idex.imm := S_imm//.asSInt
            rd1 := io.RegFileID.rdata1
            rd2 := S_imm.asUInt
            //io.idex.AluOp.op  := OpType.ADD
            val stype = DecodeRes(InstrTable.InstrN)
            val lsuflag = MuxLookup(stype, "b11111_11111_11111_11111_0000_0_0_0_0000_0000".U(35.W),Seq(
                                    //src1mask_src2mask_alumask_lsumask_choose_rden_wflag_rflag_wmask
                OpSType.SD ->"b11111_11111_11111_11111_0000_0_1_0_1111_1111".U(35.W),
                OpSType.SW ->"b11111_11111_11111_11111_0000_0_1_0_0000_1111".U(35.W),
                OpSType.SH ->"b11111_11111_11111_11111_0000_0_1_0_0000_0011".U(35.W),
                OpSType.SB ->"b11111_11111_11111_11111_0000_0_1_0_0000_0001".U(35.W)
            ))
            io.idex.wflag := lsuflag(9)
            io.idex.rflag := lsuflag(8)
            io.idex.wmask := lsuflag(7,0)
            io.idex.rden := lsuflag(10)
            io.idex.choose := lsuflag(14,11)
            io.idex.lsumask := lsuflag(19,15)
            io.idex.alumask := lsuflag(24,20)
            io.idex.src2mask := lsuflag(29,25)
            io.idex.src1mask := lsuflag(34,30)
        }
        is (InstrType.BAD){
            io.instrnoimpl := true.B & io.IFID.instvalid
            io.idex.rden := 0.U
        }
    }
    io.idex.AluOp.rd1 := MuxLookup(io.idex.src1mask, rd1,Seq(
    "b11111".U   -> rd1,
    "b11000".U   -> zimm,
    "b10111".U   ->func.SignExt(func.Mask((rd1),"x00000000ffffffff".U),32),
    "b10011".U   ->func.SignExt(func.Mask((rd1),"x000000000000ffff".U),16),
    "b10001".U   ->func.SignExt(func.Mask((rd1),"x00000000000000ff".U),8),
    "b00111".U   ->func.UsignExt(func.Mask((rd1),"x00000000ffffffff".U),32),
    "b00011".U   ->func.UsignExt(func.Mask((rd1),"x000000000000ffff".U),16),
    "b00001".U   ->func.UsignExt(func.Mask((rd1),"x00000000000000ff".U),8)
    //"b10011".U   ->func.SignExt(func.Mask((AluRes),"x000000000000ffff".U),16),
    //"b10001".U   ->func.SignExt(func.Mask((AluRes),"x00000000000000ff".U),8),
    ))
    io.idex.AluOp.rd2 := MuxLookup(io.idex.src2mask, rd2,Seq(
    "b11111".U   -> rd2,
    "b11100".U   -> CSRs,
    "b11110".U   -> 0.U,
    "b10111".U   ->func.SignExt(func.Mask((rd2),"x00000000ffffffff".U),32),
    "b10011".U   ->func.SignExt(func.Mask((rd2),"x000000000000ffff".U),16),
    "b10001".U   ->func.SignExt(func.Mask((rd2),"x00000000000000ff".U),8),
    "b00111".U   ->func.UsignExt(func.Mask((rd2),"x00000000ffffffff".U),32),
    "b00011".U   ->func.UsignExt(func.Mask((rd2),"x000000000000ffff".U),16),
    "b00001".U   ->func.UsignExt(func.Mask((rd2),"x00000000000000ff".U),8),
    "b10000".U   -> shamt,
    "b11101".U   -> rd2(5,0),
    "b11000".U   -> rd2(4,0)
    //"b10011".U   ->func.SignExt(func.Mask((AluRes),"x000000000000ffff".U),16),
    //"b10001".U   ->func.SignExt(func.Mask((AluRes),"x00000000000000ff".U),8),
    ))

    val MtipValid = ((io.RegFileID.CSRs.mip & parm.MTIP.U(parm.REGWIDTH.W))=/=0.U)
    when(MtipValid){
        io.IDNPC.jal := 4.U
        //rd1 := io.IFID.pc
        io.idex.CsrWb.CsrAddr := "b00101011".U
        io.idex.CsrWb.CsrExuChoose :="b00000000".U 
        io.IDNPC.ecallpc := io.RegFileID.CSRs.mtvec
    }
    io.ebreak := Mux(io.IFID.inst === "x00100073".U,1.B,0.B)

}