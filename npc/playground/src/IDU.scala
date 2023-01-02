package npc

import chisel3._
import chisel3.util._
import chisel3.util.HasBlackBoxInline


class IDU extends Module{
    val io = IO(new Bundle {
    val pc_i = Input(UInt(parm.PCWIDTH.W))
    val instr_i = Input(UInt(parm.INSTWIDTH.W))
    val rs_data1 = Input(UInt(parm.REGWIDTH.W))
    val rs_data2 = Input(UInt(parm.REGWIDTH.W))

    val instr_o = Output(UInt(parm.INSTWIDTH.W))
    val pc_o = Output(UInt(parm.PCWIDTH.W))
    val rs_addr1 = Output(UInt(parm.REGADDRWIDTH.W))
    val rs_addr2 = Output(UInt(parm.REGADDRWIDTH.W))
    val rd_addr = Output(UInt(parm.REGADDRWIDTH.W))
    val rd_en = Output(Bool())
    val imm = Output(UInt(parm.REGWIDTH.W))
    val rs1 = Output(UInt(parm.REGWIDTH.W))
    val rs2 = Output(UInt(parm.REGWIDTH.W))
    val opcode = Output(UInt(parm.OPCODEWIDTH.W))
    val func3 = Output(UInt(3.W))
    val func7 = Output(UInt(7.W))
    val ebreak = Output(Bool())
  })

    io.instr_o := io.instr_i
    io.pc_o := io.pc_i
    io.rs_addr1 := io.instr_i(19,15)
    io.rs_addr2 := io.instr_i(24,20)
    io.rd_addr := io.instr_i(11,7)
    io.rs1 := io.rs_data1
    io.rs2 := io.rs_data2
    io.func7 := io.instr_i(31,25)
    io.func3 := io.instr_i(14,12)
    io.opcode := io.instr_i(6,0)
    io.rd_en := 1.U
    val sign = io.instr_i(31)
    
    val I_imm = Fill((parm.REGWIDTH-12),sign) ## (io.instr_i(31,20))
    val U_imm = Fill((parm.REGWIDTH-32),sign) ## io.instr_i(31,12) ## Fill((12),0.U)
    val J_imm = Fill((parm.REGWIDTH-20),sign) ## io.instr_i(19,12) ## io.instr_i(20) ## io.instr_i(30,21) ## 0.U
    val B_imm = Fill((parm.REGWIDTH-12),sign) ## io.instr_i(7) ## io.instr_i(30,25) ## io.instr_i(11,8) ##0.U
    val S_imm = Fill((parm.REGWIDTH-12),sign) ## io.instr_i(31,25) ## io.instr_i(11,7)


    
    io.imm := MuxCase(0.U,
    Array(
        (io.opcode===parm.INST_ADDI.U) -> I_imm,
        (io.opcode===parm.INST_EBREAK.U) -> I_imm
    ))
    
    io.ebreak := Mux(io.instr_i === "x00100037".U,1.B,0.B)

    /*
    class function_Verilog extends BlackBox with HasBlackBoxInline{
        setInline("IDU.v", 
            """
            |   export "DPI-C" function ebreakflag;
            |   function  ebreakflag ;
            |	    ebreakflag = ex_ebreak;
            |   endfunction
            |
            """.stripMargin
        )
    }
    */
    //val func_verilog = Module(new function_Verilog)
    //emitVerilog(Module(new function_Verilog()), Array("--target-dir", "vsrc"))
}