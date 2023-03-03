package npc

import chisel3._
import chisel3.util._


object  parm{
    val MODE        : String = "multi" //single multi   单周期，多周期(接入了AXI总线等等)
    val CPUWIDTH    : Int = 64
    val REGWIDTH    : Int = 64
    val INSTWIDTH   : Int = 32
    val PCWIDTH     : Int = 64
    val BYTEWIDTH   : Int = 8
    val REGADDRWIDTH: Int = 5
    val RegNumber   : Int = 32
    val CSRNUMBER   : Int = 8
    val RegFileReadPorts: Int = 2
    val OPCODEWIDTH : Int = 7
    val MSIZE : Int = 6553600
    
    val RegFileChooseWidth : Int = 4
    val MaskWidth   : Int = 5//第四位决定掩模的位数  1111-64 0111-32 0011-16 0001-8 
    //最高位指示掩模后作有符号还是无符号拓展 1 有符号 0 无符号

// initial value
    val INITIAL_PC  : String = "x80000000"
    val INITIAL_INST: String = "x00000000"
    val PMEM_LEFT   : String = "x80000000"
    val PMEM_RIGHT  : String = "x87ffffff"
    //CSR
    val INITIAL_MSTATUS: String = "xa00001800"

    val MIE         : String = "x00000008" // (1<<3)
    val MPIE        : String = "x00000080" // (1<<7)
    val MTIP        : String = "x00000080" // (1<<7)
    val MTIE        : String = "x00000080" // (1<<7)

    val MTVEC       : String = "x305"
    val MCAUSE      : String = "x342"
    val MSTATUS     : String = "x300"
    val MEPC        : String = "x341"
    val CSRMIE      : String = "x304"
    val CSRMIP      : String = "x344"
    // MCAUSE 
    val EcallFromM  : Int = 11 // M-mode Environment Calls
    val CountInter  : Int = 16 // Interupt by timer
    //CLINT
    val CLINTBASE   : String = "x02000000"
    val CLINTEND    : String = "x0200BFFF"
    val MTIMECMPADDR: String = "x02004000"
    val MTIMEADDR   : String = "x0200BFF8"
    val MSIPADDR    : String = "x02000000"
//pip 
    val pip : Boolean = false
//DPI-C
    val DPI : Boolean = true
//DIFFTEST
    val DIFFTEST : Boolean = true
}
//每一次添加一条新的指令，需要在这里添加指令，Table内添加匹配规则,然后在IDU和EXU内实现
//IDU内部只要识别操作数和操作类型即可
//注意如果某个指令区分了有符号数等，则要在OpType里添加相应的规则
object RV64IInstr {
    //I
    def ADDI   = BitPat("b???????_?????_?????_000_?????_0010011")
    def JALR   = BitPat("b???????_?????_?????_000_?????_1100111")
    def ADDIW  = BitPat("b???????_?????_?????_000_?????_0011011")
    def XORI   = BitPat("b???????_?????_?????_100_?????_0010011")
    def ORI    = BitPat("b???????_?????_?????_110_?????_0010011")
    def ANDI   = BitPat("b???????_?????_?????_111_?????_0010011")
    def LW     = BitPat("b???????_?????_?????_010_?????_0000011")
    def LWU    = BitPat("b???????_?????_?????_110_?????_0000011")
    def LD     = BitPat("b???????_?????_?????_011_?????_0000011")
    def LH     = BitPat("b???????_?????_?????_001_?????_0000011")
    def LB     = BitPat("b???????_?????_?????_000_?????_0000011")
    def LHU    = BitPat("b???????_?????_?????_101_?????_0000011")
    def LBU    = BitPat("b???????_?????_?????_100_?????_0000011")
    def SLTIU  = BitPat("b???????_?????_?????_011_?????_0010011")
    def SLTI   = BitPat("b???????_?????_?????_010_?????_0010011")
    def SRAI   = BitPat("b010000?_?????_?????_101_?????_0010011")
    def SRAIW  = BitPat("b010000?_?????_?????_101_?????_0011011")
    def SRLIW  = BitPat("b000000?_?????_?????_101_?????_0011011")
    def SRLI   = BitPat("b000000?_?????_?????_101_?????_0010011")
    def SLLI   = BitPat("b000000?_?????_?????_001_?????_0010011")
    def SLLIW  = BitPat("b000000?_?????_?????_001_?????_0011011")
    def EBREAK = BitPat("b0000000_00001_00000_000_00000_1110011")   
    def ECALL  = BitPat("b0000000_00000_00000_000_00000_1110011")
    def CSRRW  = BitPat("b???????_?????_?????_001_?????_1110011")
    def CSRR   = BitPat("b???????_?????_?????_010_?????_1110011") 
    //U
    def AUIPC  = BitPat("b???????_?????_?????_???_?????_0010111")
    def LUI    = BitPat("b???????_?????_?????_???_?????_0110111")
    //J
    def JAL    = BitPat("b???????_?????_?????_???_?????_1101111")
    //S
    def SD     = BitPat("b???????_?????_?????_011_?????_0100011")
    def SW     = BitPat("b???????_?????_?????_010_?????_0100011")
    def SH     = BitPat("b???????_?????_?????_001_?????_0100011")
    def SB     = BitPat("b???????_?????_?????_000_?????_0100011")
    //R
    def ADD    = BitPat("b0000000_?????_?????_000_?????_0110011")
    def SUB    = BitPat("b0100000_?????_?????_000_?????_0110011")
    def MUL    = BitPat("b0000001_?????_?????_000_?????_0110011")
    def DIVU   = BitPat("b0000001_?????_?????_101_?????_0110011")
    def DIV    = BitPat("b0000001_?????_?????_100_?????_0110011")
    def XOR    = BitPat("b0000000_?????_?????_100_?????_0110011")
    def REMU   = BitPat("b0000001_?????_?????_111_?????_0110011")
    def SLT    = BitPat("b0000000_?????_?????_010_?????_0110011")
    def SLTU   = BitPat("b0000000_?????_?????_011_?????_0110011")
    def ADDW   = BitPat("b0000000_?????_?????_000_?????_0111011")   
    def SUBW   = BitPat("b0100000_?????_?????_000_?????_0111011") 
    def MULW   = BitPat("b0000001_?????_?????_000_?????_0111011")
    def DIVW   = BitPat("b0000001_?????_?????_100_?????_0111011")
    def DIVUW  = BitPat("b0000001_?????_?????_101_?????_0111011")
    def REMW   = BitPat("b0000001_?????_?????_110_?????_0111011")
    def SLLW   = BitPat("b0000000_?????_?????_001_?????_0111011")
    def SLL    = BitPat("b0000000_?????_?????_001_?????_0110011")
    def SRAW   = BitPat("b0100000_?????_?????_101_?????_0111011")
    def SRLW   = BitPat("b0000000_?????_?????_101_?????_0111011")
    def SRL    = BitPat("b0000000_?????_?????_101_?????_0110011")
    def AND    = BitPat("b0000000_?????_?????_111_?????_0110011")
    def OR     = BitPat("b0000000_?????_?????_110_?????_0110011")
    def MRET   = BitPat("b0011000_00010_00000_000_00000_1110011")
    //B 
    def BEQ    = BitPat("b???????_?????_?????_000_?????_1100011")
    def BNE    = BitPat("b???????_?????_?????_001_?????_1100011")
    def BGE    = BitPat("b???????_?????_?????_101_?????_1100011")
    def BGEU   = BitPat("b???????_?????_?????_111_?????_1100011")
    def BLT    = BitPat("b???????_?????_?????_100_?????_1100011")
    def BLTU   = BitPat("b???????_?????_?????_110_?????_1100011")
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

//这个op是决定ALU的操作
//没加后缀S的默认无符号运算
//
//
object  OpType{
    val OPNUMWIDTH = 4
    val ADD  = 0.U(OPNUMWIDTH.W)
    val SUB  = 1.U(OPNUMWIDTH.W)
    val SLTU = 2.U(OPNUMWIDTH.W) //小于置位，比较时设为无符号数
    val SRA  = 3.U(OPNUMWIDTH.W) // 算术右移
    val AND  = 4.U(OPNUMWIDTH.W)
    val SLL  = 5.U(OPNUMWIDTH.W)//逻辑左移
    val XOR  = 6.U(OPNUMWIDTH.W)
    val OR   = 7.U(OPNUMWIDTH.W)
    val SRL  = 8.U(OPNUMWIDTH.W)
    val MUL  = 9.U(OPNUMWIDTH.W)
    val DIVS = 10.U(OPNUMWIDTH.W)
    val REMS = 11.U(OPNUMWIDTH.W)
    val SLT  = 12.U(OPNUMWIDTH.W)//有符号
    val DIV  = 13.U(OPNUMWIDTH.W)
    val REM  = 14.U(OPNUMWIDTH.W)
    //val BEQ  = 3.U(OPNUMWIDTH.W)
    //val ADDW = 3.U(OPNUMWIDTH.W)
    //val JALR = 10.U(OPNUMWIDTH.W)
    //val LD = 11.U(OPINUMWIDTH.W)
}
object  OpIType{
    val OPINUMWIDTH = 6
    val ADDI  = 0.U(OPINUMWIDTH.W)
    val EBREAK = 1.U(OPINUMWIDTH.W)
    val JALR= 2.U(OPINUMWIDTH.W)
    val LD = 3.U(OPINUMWIDTH.W)
    val SLTIU = 4.U(OPINUMWIDTH.W)
    val ADDIW = 5.U(OPINUMWIDTH.W)
    val LW = 6.U(OPINUMWIDTH.W)
    val SRAI = 7.U(OPINUMWIDTH.W)
    val LBU = 8.U(OPINUMWIDTH.W)
    val ANDI = 9.U(OPINUMWIDTH.W)
    val XORI = 10.U(OPINUMWIDTH.W)
    val SLLI = 11.U(OPINUMWIDTH.W)
    val SRLI = 12.U(OPINUMWIDTH.W)
    val LH   = 13.U(OPINUMWIDTH.W)
    val LHU  = 14.U(OPINUMWIDTH.W)
    val SLLIW= 15.U(OPINUMWIDTH.W)
    val SRAIW= 16.U(OPINUMWIDTH.W)
    val SRLIW= 17.U(OPINUMWIDTH.W)
    val LWU  = 18.U(OPINUMWIDTH.W)
    val ORI  = 19.U(OPINUMWIDTH.W)
    val LB   = 20.U(OPINUMWIDTH.W)
    val ECALL= 21.U(OPINUMWIDTH.W)
    val CSRR = 22.U(OPINUMWIDTH.W)
    val CSRRW= 23.U(OPINUMWIDTH.W)
    val SLTI = 24.U(OPINUMWIDTH.W)
    //val LD = 11.U(OPINUMWIDTH.W)
}
//这个对操作数进行具体的区分 以便决定操作数
object  OpUType{
    val OPUNUMWIDTH = 2
    val LUI     = 0.U(OPUNUMWIDTH.W)
    val AUIPC   = 1.U(OPUNUMWIDTH.W)
}
object  OpJType{
    val OPJNUMWIDTH = 4 // 这里其实是所有具有跳转类型的指令的数量
    val JAL     = 1.U(OPJNUMWIDTH.W)
    //val JALR    = 2.U(OPJNUMWIDTH.W)
}
object  OpSType{
    val OPSNUMWIDTH = 4
    //val BAD    = 0.U(OPSNUMWIDTH.W)
    val SD     = 0.U(OPSNUMWIDTH.W)
    val SH     = 1.U(OPSNUMWIDTH.W)
    val SB     = 2.U(OPSNUMWIDTH.W)
    val SW     = 3.U(OPSNUMWIDTH.W)
    //val JALR    = 2.U(OPSNUMWIDTH.W)
}
object  OpBType{
    val OPBNUMWIDTH = 5
    //4位，最低位 0位指示有无符号 1表示无符号 0表示有符号  
    //倒数第二位指示是否是<    1<  
    //2指示是否是>
    //3指示是否是=== 
    //4指示是否是=/=
    val BEQ     = "b01000".U(OPBNUMWIDTH.W)
    val BNE     = "b10000".U(OPBNUMWIDTH.W)
    val BGE     = "b01100".U(OPBNUMWIDTH.W)
    val BGEU    = "b01101".U(OPBNUMWIDTH.W)
    val BLT     = "b00010".U(OPBNUMWIDTH.W)
    val BLTU    = "b00011".U(OPBNUMWIDTH.W)
}
object  OpRType{
    val OPRNUMWIDTH = 5
    //val BAD    = 0.U(OPSNUMWIDTH.W)
    val ADD     = 0.U(OPRNUMWIDTH.W)
    val SUB     = 1.U(OPRNUMWIDTH.W)
    val ADDW    = 2.U(OPRNUMWIDTH.W)
    val SLLW    = 3.U(OPRNUMWIDTH.W)
    val AND     = 4.U(OPRNUMWIDTH.W)
    val SLTU    = 5.U(OPRNUMWIDTH.W)
    val OR      = 6.U(OPRNUMWIDTH.W)
    val MULW    = 7.U(OPRNUMWIDTH.W)
    val DIVW    = 8.U(OPRNUMWIDTH.W)
    val REMW    = 9.U(OPRNUMWIDTH.W)
    val SLT     = 10.U(OPRNUMWIDTH.W)
    val SUBW    = 11.U(OPRNUMWIDTH.W)
    val MUL     = 12.U(OPRNUMWIDTH.W)
    val SRAW    = 13.U(OPRNUMWIDTH.W)
    val SRLW    = 14.U(OPRNUMWIDTH.W)
    val DIVU    = 15.U(OPRNUMWIDTH.W)
    val REMU    = 16.U(OPRNUMWIDTH.W)
    val XOR     = 17.U(OPRNUMWIDTH.W)
    val SLL     = 18.U(OPRNUMWIDTH.W)
    val DIVUW   = 19.U(OPRNUMWIDTH.W)
    val MRET    = 20.U(OPRNUMWIDTH.W)
    val SRL     = 21.U(OPRNUMWIDTH.W)
    val DIV     = 22.U(OPRNUMWIDTH.W)
    //val JALR    = 2.U(OPSNUMWIDTH.W)
}


object  StypeTable{
    val Default = List(0.U,0.U,0x00000000.U)
    //val WRMmap = Array(
       //OpSType.SD -> List(1.U,0.U,0x11111111.U)
   // )
    val wen = 0
    val ren = 1
    val mask = 2
}
//val map =ListLookup(inst,InstrTable.Default,InstrTable.InstrMap)
//val instrtype = map(0)
//val optype = map(1)
object InstrTable{
    val Default = List(InstrType.BAD,0.U,OpType.ADD)
    val InstrMap = Array(
        //I
        RV64IInstr.ADDI     -> List(InstrType.I,OpIType.ADDI,OpType.ADD),
        RV64IInstr.ADDIW    -> List(InstrType.I,OpIType.ADDIW,OpType.ADD),
        RV64IInstr.ANDI     -> List(InstrType.I,OpIType.ANDI,OpType.AND),
        RV64IInstr.ORI      -> List(InstrType.I,OpIType.ORI,OpType.OR),
        RV64IInstr.EBREAK   -> List(InstrType.I,OpIType.EBREAK,OpType.ADD),
        RV64IInstr.LD       -> List(InstrType.I,OpIType.LD,OpType.ADD),
        RV64IInstr.LB       -> List(InstrType.I,OpIType.LB,OpType.ADD),
        RV64IInstr.LW       -> List(InstrType.I,OpIType.LW,OpType.ADD),
        RV64IInstr.LWU      -> List(InstrType.I,OpIType.LWU,OpType.ADD),
        RV64IInstr.LH       -> List(InstrType.I,OpIType.LH,OpType.ADD),
        RV64IInstr.LHU      -> List(InstrType.I,OpIType.LHU,OpType.ADD),
        RV64IInstr.LBU      -> List(InstrType.I,OpIType.LBU,OpType.ADD),
        RV64IInstr.JALR     -> List(InstrType.I,OpIType.JALR,OpType.ADD),
        RV64IInstr.SLTIU    -> List(InstrType.I,OpIType.SLTIU,OpType.SLTU),
        RV64IInstr.SLTI     -> List(InstrType.I,OpIType.SLTI ,OpType.SLTU),
        RV64IInstr.SRAI     -> List(InstrType.I,OpIType.SRAI,OpType.SRA),
        RV64IInstr.SRAIW    -> List(InstrType.I,OpIType.SRAIW,OpType.SRA),
        RV64IInstr.SLLI     -> List(InstrType.I,OpIType.SLLI,OpType.SLL),
        RV64IInstr.SLLIW    -> List(InstrType.I,OpIType.SLLIW,OpType.SLL),
        RV64IInstr.SRLIW    -> List(InstrType.I,OpIType.SRLIW,OpType.SRL),
        RV64IInstr.SRLI     -> List(InstrType.I,OpIType.SRLI,OpType.SRL),
        RV64IInstr.XORI     -> List(InstrType.I,OpIType.XORI,OpType.XOR),
        RV64IInstr.ECALL    -> List(InstrType.I,OpIType.ECALL,OpType.ADD),
        RV64IInstr.CSRR     -> List(InstrType.I,OpIType.CSRR,OpType.OR),
        RV64IInstr.CSRRW    -> List(InstrType.I,OpIType.CSRRW,OpType.OR),
        //U
        RV64IInstr.AUIPC    -> List(InstrType.U,OpUType.AUIPC,OpType.ADD),
        RV64IInstr.LUI      -> List(InstrType.U,OpUType.LUI,OpType.ADD),
        //J
        RV64IInstr.JAL      -> List(InstrType.J,OpJType.JAL,OpType.ADD),
        //S
        RV64IInstr.SD       -> List(InstrType.S,OpSType.SD,OpType.ADD),
        RV64IInstr.SW       -> List(InstrType.S,OpSType.SW,OpType.ADD),
        RV64IInstr.SH       -> List(InstrType.S,OpSType.SH,OpType.ADD),
        RV64IInstr.SB       -> List(InstrType.S,OpSType.SB,OpType.ADD),
        //R
        RV64IInstr.ADD      -> List(InstrType.R,OpRType.ADD,OpType.ADD),
        RV64IInstr.AND      -> List(InstrType.R,OpRType.AND,OpType.AND),
        RV64IInstr.XOR      -> List(InstrType.R,OpRType.XOR,OpType.XOR),
        RV64IInstr.ADDW     -> List(InstrType.R,OpRType.ADDW,OpType.ADD),
        RV64IInstr.SUB      -> List(InstrType.R,OpRType.SUB,OpType.SUB),
        RV64IInstr.SLLW     -> List(InstrType.R,OpRType.SLLW,OpType.SLL),
        RV64IInstr.SLL      -> List(InstrType.R,OpRType.SLL,OpType.SLL),
        RV64IInstr.SRAW     -> List(InstrType.R,OpRType.SRAW,OpType.SRA),
        RV64IInstr.SRLW     -> List(InstrType.R,OpRType.SRLW,OpType.SRL),
        RV64IInstr.SRL      -> List(InstrType.R,OpRType.SRL ,OpType.SRL),
        RV64IInstr.SLTU     -> List(InstrType.R,OpRType.SLTU,OpType.SLTU),
        RV64IInstr.SLT      -> List(InstrType.R,OpRType.SLT,OpType.SLT),
        RV64IInstr.OR       -> List(InstrType.R,OpRType.OR,OpType.OR),
        RV64IInstr.MULW     -> List(InstrType.R,OpRType.MULW,OpType.MUL),
        RV64IInstr.MUL      -> List(InstrType.R,OpRType.MUL,OpType.MUL),
        RV64IInstr.DIVW     -> List(InstrType.R,OpRType.DIVW,OpType.DIVS),
        RV64IInstr.DIVU     -> List(InstrType.R,OpRType.DIVU,OpType.DIV),
        RV64IInstr.DIV      -> List(InstrType.R,OpRType.DIV ,OpType.DIVS),
        RV64IInstr.DIVUW    -> List(InstrType.R,OpRType.DIVUW,OpType.DIV),
        RV64IInstr.REMW     -> List(InstrType.R,OpRType.REMW,OpType.REMS),
        RV64IInstr.REMU     -> List(InstrType.R,OpRType.REMU,OpType.REM),
        RV64IInstr.SUBW     -> List(InstrType.R,OpRType.SUBW,OpType.SUB),
        RV64IInstr.MRET     -> List(InstrType.R,OpRType.MRET,OpType.ADD),
        //B 
        RV64IInstr.BEQ      -> List(InstrType.B,OpBType.BEQ,OpType.ADD),
        RV64IInstr.BNE      -> List(InstrType.B,OpBType.BNE,OpType.ADD),
        RV64IInstr.BLT      -> List(InstrType.B,OpBType.BLT,OpType.ADD),
        RV64IInstr.BLTU     -> List(InstrType.B,OpBType.BLTU,OpType.ADD),
        RV64IInstr.BGE      -> List(InstrType.B,OpBType.BGE,OpType.ADD),
        RV64IInstr.BGEU      -> List(InstrType.B,OpBType.BGEU,OpType.ADD)
    )
    val InstrT = 0
    val InstrN = 1
    val OpT = 2
}

object func{
    def SignExt(imm : UInt , bit : Int)  = Cat(Fill(parm.REGWIDTH-bit,imm(bit-1)),imm(bit-1,0))
    def UsignExt(imm : UInt , bit : Int) = Cat(Fill(parm.REGWIDTH-bit,"b0".U),imm(bit-1,0))
    def SignExtWidth(width : Int,imm : UInt , bit : Int)  = Cat(Fill(width-bit,imm(bit-1)),imm(bit-1,0))
    def UsignExtWidth(width : Int,imm : UInt , bit : Int) = Cat(Fill(width-bit,"b0".U),imm(bit-1,0))
    def Mask (imm: UInt, mask : UInt) = imm & mask
    def EcallMstatus (localmstatus : UInt) : UInt ={
        val mstatus = localmstatus
        //printf(p"mstatus=0x${Hexadecimal(mstatus)} \n")
        val mstatusMIE = mstatus|parm.MPIE.U(parm.REGWIDTH.W)
        //printf(p"mstatus=0x${Hexadecimal(mstatusMIE)} \n")
        val mstatusNMIe = mstatus &(~ (parm.MPIE.U(parm.REGWIDTH.W)))
        //val nparmMPIE = ~ parm.MPIE.U
        //printf(p"mstatus=0x${Hexadecimal(mstatusNMIe)} \n")
        val MieFlag = ((mstatus & (parm.MIE.U)) =/= 0.U)
        val chosemstatus = Mux(MieFlag,mstatusMIE,mstatusNMIe)
        //mstatus & (parm.MIE.U)
        //printf(p"mstatus=0x${Hexadecimal(chosemstatus)} \n")
        val finalmstatus = chosemstatus & (~ parm.MIE.U(parm.REGWIDTH.W))
        //printf(p"mstatus=0x${Hexadecimal(finalmstatus)} \n")
        val realfinal = finalmstatus //| "x1800".U // 这一部也是nemu自己运行时需要的
        //printf(p"mstatus=0x${Hexadecimal(realfinal)} \n")
        //mstatus := mstatus & (~ parm.MIE.U)
        //mstatus := mstatus | "x1800".U
        return realfinal
    }  
    def MretMstatus (localmstatus : UInt) : UInt ={
        val mstatus = localmstatus
        //printf(p"mstatus=0x${Hexadecimal(mstatus)} \n")
        val mstatusMIE = mstatus|parm.MIE.U(parm.REGWIDTH.W)
        //printf(p"mstatus=0x${Hexadecimal(mstatusMIE)} \n")
        val mstatusNMIe = mstatus &(~ (parm.MIE.U(parm.REGWIDTH.W)))
        //val nparmMPIE = ~ parm.MPIE.U
        //printf(p"mstatus=0x${Hexadecimal(mstatusNMIe)} \n")
        val MieFlag = ((mstatus & (parm.MPIE.U(parm.REGWIDTH.W))) =/= 0.U)
        val chosemstatus = Mux(MieFlag,mstatusMIE,mstatusNMIe)
        //mstatus & (parm.MIE.U)
        //printf(p"mstatus=0x${Hexadecimal(chosemstatus)} \n")
        val finalmstatus = chosemstatus | ( parm.MPIE.U(parm.REGWIDTH.W))
        //printf(p"mstatus=0x${Hexadecimal(finalmstatus)} \n")
        val realfinal = finalmstatus //& "xFFFFFFFFFFFFE7FF".U   // 这里的实现与nemu不一样，去掉这一个可以通过diff
        //而nemu自己运行时，需要进行该操作
        //printf(p"mstatus=0x${Hexadecimal(realfinal)} \n")
        //mstatus := mstatus & (~ parm.MIE.U)
        //mstatus := mstatus | "x1800".U
        return realfinal
    } 
    def Mcause (Mcauseflag : UInt, localmcause : UInt): UInt ={
        val mcause  = localmcause
        //val eflag = ((NO <= 19.U) || (NO === "xffffffffffffffff".U))
        //val eflagmcause=11.U
        val finalmcause = MuxCase(localmcause,Seq(
            Mcauseflag(0) -> parm.EcallFromM.U, 
            Mcauseflag(1) -> parm.CountInter.U
        ))
        /*
        val finalmcause = MuxLookup(Mcauseflag, 0.U ,Seq(  
                            ->   parm.EcallFromM.U,          
            //parm.MEPC.U     ->"b00000001".U(parm.CSRNUMBER.W),
            //parm.MCAUSE.U   ->"b00000010".U(parm.CSRNUMBER.W),
            //parm.MTVEC.U    ->"b00000100".U(parm.CSRNUMBER.W),
            parm.MSTATUS.U  ->"b00001000".U(parm.CSRNUMBER.W),
            parm.CSRMIE.U   ->"b00010000".U(parm.CSRNUMBER.W),
            parm.CSRMIP.U   ->"b00100000".U(parm.CSRNUMBER.W)
        ))
        */
        return finalmcause
    }
}