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
#define immS() do { *imm = (SEXT(BITS(i, 31, 25), 7) << 5) | BITS(i, 11, 7); } while(0)
#define immJ() do { *imm = (SEXT(BITS(i, 31, 31),1)<<19)|(SEXT(BITS(i, 19, 12), 8)<<11)|(SEXT(BITS(i, 20, 20), 1)<< 10)|BITS(i, 30, 21); *imm = *imm << 1; } while(0)
#define immB() do { *imm = (SEXT(BITS(i, 31, 31),1)<<11)|(SEXT(BITS(i, 7, 7), 1)<<10)|(SEXT(BITS(i, 30, 25), 6)<< 4)|BITS(i, 11, 8); *imm = *imm << 1; } while(0)
#define CUT(a,bit) (a=(a<<(64-bit)>>(64-bit))) //将64位的a 截断为 bit 位


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
//addi 要在li之前实现，防止被识别为li
//mv 被解释为addi 0
  INSTPAT("0000000 00000 ????? 000 ????? 00100 11", mv     , I, R(dest) = src1);
  INSTPAT("??????? ????? ????? 000 ????? 00100 11", addi   , I, R(dest) = SEXT(imm,12)+src1);
//s否则会识别为srai shamt bits[25:20]
  INSTPAT("010000? ????? ????? 101 ????? 00100 11", srai   , I, word_t shamt=imm; CUT(shamt,6);R(dest) = src1 >> shamt);//  
  INSTPAT("??????? ????? ????? 111 ????? 00100 11", andi   , I, R(dest) = src1 & imm);
  //li 被解释为 lui (U) slli(I) addi(I)
  //INSTPAT("??????? ????? ????? ??? ????? 00100 11", li     , I, R(dest) = imm);// Load Immediate x(rd) = sexr(imm)
  INSTPAT("??????? ????? ????? 010 ????? 00000 11", lw     , I, word_t val = Mr(src1+imm,4);val = SEXT(val,32);CUT(val,32);R(dest) = val);//字加载指令x[rd] = sext(M(x[rs1]+sext(offset)[31:0]))
  //移位指令目前实现有问题
  INSTPAT("000000? ????? ????? 001 ????? 00100 11", slli   , I, word_t shamt=imm;CUT(shamt,6);R(dest) = src1 << shamt);
  INSTPAT("000000? ????? ????? 101 ????? 00100 11", srli   , I, word_t shamt=imm;CUT(shamt,6);R(dest) = src1 >> shamt);
  INSTPAT("??????? ????? ????? 000 ????? 00110 11", addiw  , I, word_t val = SEXT((src1+SEXT(imm,12)),64);CUT(val,32);R(dest) = val);//结果截断为32位
  INSTPAT("??????? ????? ????? 100 ????? 00000 11", lbu    , I, word_t val = Mr(src1 + imm, 1);val = SEXTU(val,8);R(dest)=val);
  INSTPAT("??????? ????? ????? 100 ????? 00100 11", xori   , I, imm = SEXT(imm,12);R(dest) = src1^imm);
  INSTPAT("??????? ????? ????? 001 ????? 00000 11", lh     , I, word_t temp = Mr(src1+imm,2);R(dest) =SEXT(temp,16));
  INSTPAT("??????? ????? ????? 101 ????? 00000 11", lhu    , I, word_t temp = Mr(src1+imm,2);R(dest) =SEXT(temp,16));
//ret 被解释为jalr    I-type pc = (src1+offset)&~1(最低有效位设为0)  原pc+4 写入rd 
//这里中文的指令集有问题 应该为000
  INSTPAT("??????? ????? ????? 000 ????? 11001 11", jalr    , I, R(dest) = s->pc+0x4;imm=SEXT(imm,12);s->dnpc = ((src1+imm)&~1));
//无符号数小于立即数则置位 比较时 有符号扩展的立即数视为无符号数
//seqz 被扩展为 src1<1  等于0置位 
  INSTPAT("??????? ????? ????? 011 ????? 00100 11", sltiu  , I, imm = SEXT(imm,12); R(dest) = (src1<imm));

//J
  //INSTPAT("??????? ????? ????? ??? ????? 11011 11", j      , J, s->dnpc=imm+s->pc);  // pc+=sext(offset)//等同于jal
  //dnpc 是动态指令 对于跳转指令，用dnpc更新下一条指令,并且dnpc本来就指向下一条指令
  //因此更新时要先-4 返回当前指令，再进行+-来跳转 
  //或者直接在当前指令上来操作
  //jal 首先对20bits宽的imm*2后，在进行符号扩展，然后将符号扩展的值与pc相加
  //这里是由于J型指令的表示方法造成的，imm[20:1] 默认最低位为0,因此在最地位补上一个0，即左移一位，就是x2
  INSTPAT("??????? ????? ????? ??? ????? 11011 11", jal   , J, R(dest) = s->pc+0x4;imm = SEXT(imm,12);s->dnpc =imm+s->pc);//x[rd]=pc+4, pc+=sext(offset)

//R
  INSTPAT("0000000 ????? ????? 000 ????? 01110 11", addw  , RI, word_t val = src1+src2;val = SEXT(val,32); CUT(val,32);R(dest)=val); 
  INSTPAT("0100000 ????? ????? 000 ????? 01100 11", sub   , RI, R(dest) = src1-src2); 
  INSTPAT("0000000 ????? ????? 000 ????? 01100 11", add   , RI, R(dest) = src1+src2);
  //snez 被扩展为sltu rd 0 src2 目前有问题
  INSTPAT("0000000 ????? ????? 011 ????? 01100 11", sltu  , RI, R(dest) = (src1<(src2)));
  //逻辑左移字 src1的低32位左移 src2[4:0] 低五位 其高位被忽略
  INSTPAT("0000000 ????? ????? 001 ????? 01110 11", sllw  , RI, CUT(src2,5);src1 =SEXT((src1<<src2),32);R(dest) = src1);
  INSTPAT("0000000 ????? ????? 110 ????? 01100 11", or    , RI, R(dest) = src1|src2 );
  INSTPAT("0000000 ????? ????? 111 ????? 01100 11", and   , RI, R(dest) = src1&src2 );
  //slt 目前有问题 // 还是不理解为什么用Int 进行强制类型转化就对的， 用int64_t就步行
  INSTPAT("0000000 ????? ????? 010 ????? 01100 11", slt   , RI, int rs1= src1;int rs2 = src2 ;R(dest) = rs1<rs2);
  INSTPAT("0000001 ????? ????? 000 ????? 01110 11", mulw  , RI, word_t val = src1*src2;CUT(val,32);val = SEXT(val,32);R(dest)= val);//截断为32
  INSTPAT("0000001 ????? ????? 100 ????? 01110 11", divw  , RI, CUT(src1,32);CUT(src2,32);int32_t rs1 = src1;int32_t rs2 = src2;int32_t val=rs1/rs2;R(dest) = SEXT(val,32));
  INSTPAT("0000001 ????? ????? 110 ????? 01110 11", remw  , RI, CUT(src1,32);CUT(src2,32);int32_t rs1 = src1;int32_t rs2 = src2;int32_t val=rs1%rs2;R(dest) = SEXT(val,32));
//B
  //beqz 是=0分支    src2 = 0
  INSTPAT("??????? ????? ????? 000 ????? 11000 11", beq    , B, imm = SEXT(imm,12);s->dnpc = (src1==src2)?s->pc+imm:s->pc+0x4);
  INSTPAT("??????? ????? ????? 001 ????? 11000 11", bne    , B, imm = SEXT(imm,12);s->dnpc = (src1!=src2)?s->pc+imm:s->pc+0x4);
//bge src1 与src2 均视为二进制补码
  INSTPAT("??????? ????? ????? 101 ????? 11000 11", bge    , B, int rs1 = src1;int rs2 = src2;imm = SEXT(imm,12);s->dnpc = (rs1>=rs2)?s->pc+imm:s->pc+0x4);
// blt 有问题，因该是比较时视为二进制补码没有实现好
//if-else 程序31步 判断s2 与a5的大小可以看出来  这里判断的时候还是按照无符号数来的 但是无符号数的加减法等同于
//这里直接用Int 转化了   可能会有问题，因为src是64位的 int 是32位的
//但是这样转化后，blt slt 可以正常运行，可能还没碰到极端情况
  INSTPAT("??????? ????? ????? 100 ????? 11000 11", blt    , B, int rs1 = src1;int rs2 = src2;imm = SEXT(imm,12);s->dnpc = ((rs1)<rs2)?s->pc+imm:s->pc+0x4);
//S
  INSTPAT("??????? ????? ????? 001 ????? 01000 11", sh     , S, imm = SEXT(imm,12);Mw(src1 + imm, 2, src2));
  INSTPAT("??????? ????? ????? 000 ????? 01000 11", sb     , S, imm = SEXT(imm,12);Mw(src1 + imm, 1, src2));
  INSTPAT("??????? ????? ????? 010 ????? 01000 11", sw     , S, imm = SEXT(imm,12);Mw(src1 + imm, 4, src2));


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
