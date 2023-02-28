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

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>
#include <string.h>

// this should be enough
static char buf[65536] = {};
static char code_buf[65536 + 128] = {}; // a little larger than `buf`
static char *code_format =
"#include <stdio.h>\n"
"int main() { "
"  unsigned result = %s; "
"  printf(\"%%u\", result); "
"  return 0; "
"}";
int addpos = 0;
int choose(int n) {return rand()%n;}
static void gen(char a){
  //char str[2];
  //str[0] = a;
  //str[1] = '\0';
  //printf("%d %s\n",addpos,str);
  buf[addpos] = a;
  buf[addpos+1] = '\0';
  addpos++;
  int randn = choose(100);
  while (randn--)
  {
    if (choose(10) == 0)
    {
      buf[addpos] = ' ';
      buf[addpos+1] = '\0';
      addpos++;
    }
  }
}
static void gen_num(){
  int num = rand()%10;
  if (addpos>0)
  {
    while (num == 0)
    {
      int temppos = addpos-1;
      while (buf[temppos] == '('&&temppos>0)
      {
        temppos--;
      }
      if (buf[temppos] == '/')
      {
        num = choose(10);
      }
      else break;
    }
  }
  
  char s[13] ;
  switch (choose(1))
  {
  case 0:   snprintf(s,sizeof(s),"%d",num);   break;
  case 1:   snprintf(s,sizeof(s),"%x",num);  break;
  default:   snprintf(s,sizeof(s),"%d",num);  break;
  }
  for (int i = 0; s[i]!='\0'; i++)
  {
    gen(s[i]);
  }
}
static void gen_rand_op(){
  switch (choose(4))
  {
  case 0: gen('+');break;
  case 1: gen('-');break;
  case 2: gen('*');break;
  case 3: gen('/');break;
  default: gen('+');break;
  }
}
static void gen_rand_expr() {
  
  switch (choose(3))
  {
    case 0: gen_num(); break;
    case 1: gen('(');gen_rand_expr();gen(')');break;
    case 2: gen_rand_expr();gen_rand_op();gen_rand_expr();break;
    //case 3: gen(' ');gen_rand_expr();
    default: gen_rand_expr();gen_rand_op();gen_rand_expr();break;
  }
}

int main(int argc, char *argv[]) {
  buf[0] = '\0';
  int seed = time(0);
  srand(seed);
  int loop = 1;
  if (argc > 1) {
    sscanf(argv[1], "%d", &loop);
  }
  int i;
  for (i = 0; i < loop; i ++) {
    strcpy(buf,"");
    addpos = 0;
    buf[0] = '\0';
    gen_rand_expr();

    sprintf(code_buf, code_format, buf);

    FILE *fp = fopen("/tmp/.code.c", "w");
    assert(fp != NULL);
    fputs(code_buf, fp);
    fclose(fp);

    int ret = system("gcc /tmp/.code.c -o /tmp/.expr");
    if (ret != 0) continue;

    fp = popen("/tmp/.expr", "r");
    assert(fp != NULL);

    int result;
    fscanf(fp, "%d", &result);
    pclose(fp);

    printf("%u %s\n", result, buf);
  }
  return 0;
}
