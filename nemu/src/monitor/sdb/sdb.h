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

#ifndef __SDB_H__
#define __SDB_H__

#include <common.h>
#include <elf.h>
word_t expr(char *e, bool *success);

typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  char expre[256]; //表达式字符串
  word_t value; //表达式数值
  /* TODO: Add more members if necessary */
} WP;

//ftrace
union var8
{
    char p[8];
    int64_t i;
};
union var4
{
    char p[4];
    int32_t i;
};
union var2
{
    char p[2];
    int16_t i;
};
union var1
{
    char p;
    int8_t i;
};
char elf_logfile[] = "/home/yangli/ysyx-workbench/nemu/build/ftrace-log.txt";
int symblenumber ;//记录符号的表的符号个数
//static int maxsymbolnumber = 4096;
Elf64_Sym allsymble[4096];//最多4096个

void init_ftrace(char * elf_file);
//接受地址，判断其是否属于函数
void log_ftrace(paddr_t addr,char* elf_file);


#endif
