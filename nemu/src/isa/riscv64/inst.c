/***************************************************************************************
* Copyright (c) 2014-2022 Zihao Yu, Nanjing University
*
* NEMU is licensed under Mulan PSL v2.
* You can use this software according to the terms and conditions of the Mulan PSL v2.
* You may obtain a copy of Mulan PSL v2 at:
*          http://license.coscl.org.cn/MulanPSL2
*
* THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
* EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
* MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
*
* See the Mulan PSL v2 for more details.
***************************************************************************************/

#include "local-include/reg.h"
#include <cpu/cpu.h>
#include <cpu/ifetch.h>
#include <cpu/decode.h>

#define MTVEC   0x305
#define MCAUSE  0x342
#define MSTATUS 0x300
#define MEPC    0x341
#define R(i) gpr(i)
#define Mr vaddr_read
#define Mw vaddr_write

enum {
  TYPE_I, TYPE_U, TYPE_S,
  TYPE_N, // none
  TYPE_J,
  TYPE_RI,
  TYPE_B,
};
//SEXT 就是手册里面的sext 把立即数扩展到64位，有符号就进行符号扩展，无符号就进行无符号扩展,最后都是返回一个无符号的数
//SEXRU 是自己写的 ，对一个数扩展到64位，高位补0   即进行0扩展
#define src1R() do { *src1 = R(rs1); } while (0)
#define src2R() do { *src2 = R(rs2); } while (0)
#define immI() do { *imm = SEXT(BITS(i, 31, 20), 12); } while(0)
#define immU() do { *imm = SEXT(BITS(i, 31, 12), 20) << 12; } while(0)
#define immS() do { *imm = (SEXT(BITS(i, 31, 25), 7) << 5) | SEXTU(BITS(i, 11, 7),5); } while(0)
//这一部分的移位还是有点问题
#define immJ() do { *imm = (SEXT(BITS(i, 31, 31),1)<<19)|(SEXTU(BITS(i, 19, 12), 8)<<11)|(SEXTU(BITS(i, 20, 20), 1)<< 10)|SEXTU(BITS(i, 30, 21), 10); *imm = *imm << 1;} while(0)
#define immB() do { *imm = (SEXT(BITS(i, 31, 31),1)<<11)|(SEXTU(BITS(i, 7, 7), 1)<<10)|(SEXTU(BITS(i, 30, 25), 6)<< 4)|SEXTU(BITS(i, 11, 8), 4); *imm = *imm << 1; } while(0)
#define CUT(a,bit) (a=(a<<(64-bit)>>(64-bit))) //将64位的a 截断为 bit 位
//目前感觉是cut操作出了问题，因为截断会导致符号位被截掉，采用移位的操作进行截断，原来的负数会变成正数，再理解以下位域的表示，
//通过位于操作来进行截断 其实SEXT直接进行了截断操作以及符号位扩展，直接使用即可，不要用CUT,这样自可以过load-store
#define low32(a) (a&0x00000000FFFFFFFF)   // 返回一个数的低32位
word_t isa_raise_intr(word_t NO, vaddr_t epc);
void log_ftrace(paddr_t addr,bool jarlflag, int rd ,word_t imm, int rs1,word_t src1);
static void decode_operand(Decode *s, int *dest, word_t *src1, word_t *src2, word_t *imm, int type) {
  uint32_t i = s->isa.inst.val;
  int rd  = BITS(i, 11, 7);
  int rs1 = BITS(i, 19, 15);
  int rs2 = BITS(i, 24, 20);

  *dest = rd;
  //printf("%d\n",rd);
  switch (type) {
    case TYPE_I: src1R();          immI(); break;
    case TYPE_U:                   immU(); break;
    case TYPE_S: src1R(); src2R(); immS(); break;
    case TYPE_J:                   immJ(); break;
    case TYPE_RI: src1R(); src2R();        break;
    case TYPE_B: src1R(); src2R(); immB(); break;
  }
  //printf("%lx\n",*imm);
}
void csrrw_inst(word_t csr, word_t src1,Decode *s,bool z_imm,bool read) {
  uint32_t i = s->isa.inst.val;
  uint64_t zimm = SEXTU(BITS(i, 19, 15), 5);
  int rd = BITS(i,11,7);
  word_t t;
  word_t realsrc = z_imm?zimm:src1;
  switch (csr)
  {
    case MTVEC  :   t = cpu.mtvec  ;cpu.mtvec = read?(realsrc|t):realsrc;  R(rd) = t;break;
    case MSTATUS:   t = cpu.mstatus;cpu.mstatus = read?(realsrc|t):realsrc;R(rd) = t;break;
    case MEPC   :   t = cpu.mepc   ;cpu.mepc = read?(realsrc|t):realsrc;   R(rd) = t;break;
    case MCAUSE :   t = cpu.mcause ;cpu.mcause = read?(realsrc|t):realsrc; R(rd) = t;break;
    default:
      break;
  }
}
static int decode_exec(Decode *s) {
  int dest = 0;
  word_t src1 = 0, src2 = 0, imm = 0;
  s->dnpc = s->snpc;

#define INSTPAT_INST(s) ((s)->isa.inst.val)
#define INSTPAT_MATCH(s, name, type, ... /* execute body */ ) { \
  decode_operand(s, &dest, &src1, &src2, &imm, concat(TYPE_, type)); \
  __VA_ARGS__ ; \
}

  INSTPAT_START();
  INSTPAT("??????? ????? ????? ??? ????? 00101 11", auipc  , U, R(dest) = s->pc + imm);
  INSTPAT("??????? ????? ????? 011 ????? 00000 11", ld     , I, R(dest) = Mr(src1 + imm, 8));
  INSTPAT("??????? ????? ????? 011 ????? 01000 11", sd     , S, Mw(src1 + imm, 8, src2));
//U
  INSTPAT("??????? ????? ????? ??? ????? 01101 11", lui  , U, R(dest) =imm);


//I

//mv 被解释为addi 0
  INSTPAT("??????? ????? ????? 001 ????? 11100 11", csrrw  , I, csrrw_inst(imm,src1,s,0,0));
  INSTPAT("??????? ????? ????? 010 ????? 11100 11", csrr   , I, csrrw_inst(imm,src1,s,0,1));
  INSTPAT("0000000 00000 00000 000 00000 11100 11", ecall  , I, s->dnpc = isa_raise_intr(R(17),s->pc));
  INSTPAT("0000000 00000 ????? 000 ????? 00100 11", mv     , I, R(dest) = src1);
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(dest) = SEXT(imm,12)+src1);
  INSTPAT("??????? ????? ????? 000 ????? 00000 11", lb     , I, R(dest) = SEXT((Mr(src1 + imm, 8)),8));
  INSTPAT("??????? ????? ????? 010 ????? 00100 11", slti   , I, /*printf("rs1:%ld imm:%ld cmp:%d\n",(int64_t)src1,imm,(int64_t)src1 < imm);*/R(dest) = ((int64_t)src1 < (int64_t)imm));
//s否则会识别为srai shamt bits[25:20]
  //srai(w) 右移，高位用src1的31或者最高位填充，这里是自动实现的，
  //在C++中对于负数右移是符号位右移，高位自动补1,对于正数，高位自动补0；这里先转化为有符号数即可
  INSTPAT("010000? ????? ????? 101 ????? 00110 11", sraiw  , I, int32_t rs1 = low32(src1);word_t shamt=SEXT(imm,6);R(dest) = SEXT((rs1 >> shamt),32));
  INSTPAT("010000? ????? ????? 101 ????? 00100 11", srai   , I, int64_t rs1 = src1;word_t shamt=SEXT(imm,6);R(dest) = rs1 >> shamt);//  
  INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(dest) = src1 & imm);
  INSTPAT("??????? ????? ????? 110 ????? 00100 11", ori   , I, R(dest) = src1|imm );
  //li 被解释为 lui (U) slli(I) addi(I)
  //INSTPAT("??????? ????? ????? ??? ????? 00100 11", li     , I, R(dest) = imm);// Load Immediate x(rd) = sexr(imm)
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, word_t val = Mr(src1+imm,4);val = SEXT(val,32);R(dest) = val);//字加载指令x[rd] = sext(M(x[rs1]+sext(offset)[31:0]))
  INSTPAT("??????? ????? ????? 110 ????? 00000 11", lwu    , I, word_t val = Mr(src1+imm,4);R(dest) = (uint64_t)val);
  //移位指令目前实现有问题
  INSTPAT("000000? ????? ????? 001 ????? 00100 11", slli   , I, word_t shamt=SEXTU(imm,6);R(dest) = src1 << shamt);
  INSTPAT("000000? ????? ????? 001 ????? 00110 11", slliw   , I, word_t shamt=SEXTU(imm,6);R(dest) = SEXT((src1 << shamt),32));
  INSTPAT("000000? ????? ????? 101 ????? 00100 11", srli   , I, word_t shamt=SEXT(imm,6);R(dest) = src1 >> shamt);
  INSTPAT("000000? ????? ????? 101 ????? 00110 11", srliw   , I, uint32_t rs1 = low32(src1);word_t shamt=SEXT(imm,6);R(dest) = SEXT((rs1 >> shamt),32));

  INSTPAT("??????? ????? ????? 000 ????? 00110 11", addiw  , I, word_t val = SEXT((src1+SEXT(imm,12)),64);val = SEXT(val,32);R(dest) = val);//结果截断为32位
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, word_t val = Mr(src1 + imm, 1);val = SEXTU(val,8);R(dest)=val);
  INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, R(dest) = src1^imm);
  INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh     , I, word_t temp = Mr(src1+imm,2);R(dest) =SEXT(temp,16));
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu    , I, word_t temp = Mr(src1+imm,2);R(dest) =SEXTU(temp,16));
  //好像区分了整数寄存器与浮点寄存器，要先理解一下
  INSTPAT("??????? ????? ????? 011 ????? 00001 11", fld    , I, double temp = Mr(src1+imm,8);R(dest) =temp);
//ret 被解释为jalr    I-type pc = (src1+offset)&~1(最低有效位设为0)  原pc+4 写入rd 
//这里中文的指令集有问题 应该为000
  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr    , I, R(dest) = s->pc+0x4;imm=SEXT(imm,12);s->dnpc = ((src1+imm)&~1);
#ifdef CONFIG_MTRACE 
  uint32_t i = s->isa.inst.val;
  //printf("pc:%lx: inst:%08x \n",cpu.pc,i);
  int rs1 = BITS(i, 19, 15);
  
  log_ftrace(s->dnpc,1,dest,imm,rs1,src1)
#endif 
  );
//无符号数小于立即数则置位 比较时 有符号扩展的立即数视为无符号数
//seqz 被扩展为 src1<1  等于0置位 
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, R(dest) = (src1<imm));

//J
  //INSTPAT("??????? ????? ????? ??? ????? 11011 11", j      , J, s->dnpc=imm+s->pc);  // pc+=sext(offset)//等同于jal
  //dnpc 是动态指令 对于跳转指令，用dnpc更新下一条指令,并且dnpc本来就指向下一条指令
  //因此更新时要先-4 返回当前指令，再进行+-来跳转 
  //或者直接在当前指令上来操作
  //jal 首先对20bits宽的imm*2后，在进行符号扩展，然后将符号扩展的值与pc相加
  //这里是由于J型指令的表示方法造成的，imm[20:1] 默认最低位为0,因此在最地位补上一个0，即左移一位，就是x2
  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal   , J, R(dest) = s->pc+0x4;s->dnpc =imm+s->pc;
#ifdef CONFIG_MTRACE 
   log_ftrace(s->dnpc,0,dest,imm,src1,src1)
#endif 
  );//x[rd]=pc+4, pc+=sext(offset)

//R
  INSTPAT("0000000 ????? ????? 000 ????? 01110 11", addw  , RI, word_t val = src1+src2;val = SEXT(val,32); R(dest)=val); 
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub   , RI, R(dest) = src1-src2); 
  INSTPAT("0100000 ????? ????? 000 ????? 01110 11", subw  , RI, word_t val = src1-src2;val = SEXT(val,32);R(dest) = val); 
  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add   , RI, R(dest) = src1+src2);
  //snez 被扩展为sltu rd 0 src2 目前有问题
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu  , RI, R(dest) = (src1<(src2)));
  //逻辑左移字 src1的低32位左移 src2[4:0] 低五位 其高位被忽略
  INSTPAT("0000000 ????? ????? 001 ????? 01110 11", sllw  , RI, src2 = SEXTU(src2,5);src1 =SEXT((src1<<src2),32);R(dest) = src1);
  INSTPAT("0000000 ????? ????? 001 ????? 01100 11", sll  , RI, src2 = SEXTU(src2,6);src1 =src1<<src2;R(dest) = src1);
  INSTPAT("0100000 ????? ????? 101 ????? 01110 11", sraw  , RI, int32_t  rs1 = low32(src1);src2 = SEXTU(src2,5);R(dest) = SEXT((rs1>>src2),32));
  INSTPAT("0000000 ????? ????? 101 ????? 01110 11", srlw  , RI, uint32_t rs1 = low32(src1);src2 = SEXTU(src2,5);R(dest) = SEXT((rs1>>src2),32));
  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or    , RI, R(dest) = src1|src2 );
  INSTPAT("0000000 ????? ????? 100 ????? 01100 11", xor   , RI, R(dest) = src1^src2 );
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and   , RI, R(dest) = src1&src2 );
  //slt 目前有问题 // 还是不理解为什么用Int 进行强制类型转化就对的， 用int64_t就步行
  INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt   , RI, int rs1= src1;int rs2 = src2 ;R(dest) = rs1<rs2);
  INSTPAT("0000001 ????? ????? 000 ????? 01100 11", mul   , RI, word_t val = src1*src2;R(dest)= val);
  INSTPAT("0000001 ????? ????? 000 ????? 01110 11", mulw  , RI, word_t val = src1*src2;val = SEXT(val,32);R(dest)= val);//截断为32
  INSTPAT("0000001 ????? ????? 100 ????? 01110 11", divw  , RI, src1 = SEXT(src1,32);src2 = SEXT(src2,32);int32_t rs1 = src1;int32_t rs2 = src2;int32_t val=rs1/rs2;R(dest) = SEXT(val,32));
  INSTPAT("0000001 ????? ????? 101 ????? 01100 11", divu  , RI, word_t rs1 = src1;word_t rs2 = src2;word_t val=rs1/rs2;R(dest) = val);
  INSTPAT("0000001 ????? ????? 101 ????? 01110 11", divuw , RI, src1 = SEXTU(src1,32);src2 = SEXTU(src2,32);word_t rs1 = src1;word_t rs2 = src2;word_t val=rs1/rs2;R(dest) = val);
  INSTPAT("0000001 ????? ????? 111 ????? 01100 11", remu  , RI, src1 = SEXT(src1,32);src2 = SEXT(src2,32);word_t rs1 = src1;word_t rs2 = src2;word_t val=rs1%rs2;R(dest) = val);
  INSTPAT("0000001 ????? ????? 110 ????? 01110 11", remw  , RI, src1 = SEXT(src1,32);src2 = SEXT(src2,32);int32_t rs1 = src1;int32_t rs2 = src2;int32_t val=rs1%rs2;R(dest) = SEXT(val,32));
  INSTPAT("0000001 ????? ????? 111 ????? 01110 11", remuw  , RI, src1 = SEXT(src1,32);src2 = SEXT(src2,32);word_t rs1 = src1;word_t rs2 = src2;int32_t val=rs1%rs2;R(dest) = SEXT(val,32));
  INSTPAT("1111001 00000 ????? 000 ????? 10100 11", fmv.d.x, RI, src1 = SEXT(src1,32);int rs1 = src1;R(dest) = rs1);
//B
  //beqz 是=0分支    src2 = 0
  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, s->dnpc = (src1==src2)?s->pc+imm:s->pc+0x4);
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, s->dnpc = (src1!=src2)?s->pc+imm:s->pc+0x4);
//bge src1 与src2 均视为二进制补码
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , B, int rs1 = src1;int rs2 = src2;s->dnpc = (rs1>=rs2)?s->pc+imm:s->pc+0x4);
// blt 有问题，因该是比较时视为二进制补码没有实现好
//if-else 程序31步 判断s2 与a5的大小可以看出来  这里判断的时候还是按照无符号数来的 但是无符号数的加减法等同于
//这里直接用Int 转化了   可能会有问题，因为src是64位的 int 是32位的
//但是这样转化后，blt slt 可以正常运行，可能还没碰到极端情况
  INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt    , B, int rs1 = src1;int rs2 = src2;s->dnpc = ((rs1)<rs2)?s->pc+imm:s->pc+0x4);
  INSTPAT("??????? ????? ????? 110 ????? 11000 11", bltu   , B, s->dnpc = ((src1)<src2)?s->pc+imm:s->pc+0x4);
  INSTPAT("??????? ????? ????? 111 ????? 11000 11", bgeu   , B, s->dnpc = ((src1)>=src2)?s->pc+imm:s->pc+0x4);

//S
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, Mw(src1 + imm, 2, src2));
  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, Mw(src1 + imm, 1, src2));
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, Mw(src1 + imm, 4, src2));
  INSTPAT("??????? ????? ????? 011 ????? 01001 11", fsd    , S, /*printf("rs1:%lx rs2:%lx imm:%lx\n",src1,src2,imm);*/Mw(src1 + imm, 8, src2));

  INSTPAT("0000000 00001 00000 000 00000 11100 11", ebreak , N, NEMUTRAP(s->pc, R(10))); // R(10) is $a0
  INSTPAT("??????? ????? ????? ??? ????? ????? ??", inv    , N, INV(s->pc));
  INSTPAT_END();

  R(0) = 0; // reset $zero to 0

  return 0;
}

int isa_exec_once(Decode *s) {
  s->isa.inst.val = inst_fetch(&s->snpc, 4);
  return decode_exec(s);
}
