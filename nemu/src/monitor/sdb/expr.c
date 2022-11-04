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

#include <isa.h>

/* We use the POSIX regex functions to process regular expressions.
 * Type 'man regex' for more information about POSIX regex functions.
 */
#include <regex.h>

enum {
  TK_NOTYPE = 256, TK_EQ,TK_HEX,TK_DEX,TK_REGNAME,TK_UNEQ,TK_AND,TK_OR
  ,TK_BEQ,TK_LEQ,TK_LSHIFT,TK_RSHIFT,TK_POINT,TK_SUB
  /* TODO: Add more token types */

};

static struct rule {
  const char *regex;
  int token_type;
} rules[] = {

  /* TODO: Add more rules.
   * Pay attention to the precedence level of different rules.
   */

  {" +", TK_NOTYPE},    // spaces
  {"\\+", '+'},         // plus
  {"==", TK_EQ},        // equal
  {"\\*", '*'},         //multiply
  {"\\*", TK_POINT},    //指针
  {"/", '/'},            //div
  {"-",'-'},             //minus
  {"-",TK_SUB},          // 复数
  {"0x[0-9,a-f,A-F]+", TK_HEX}, // HEX 十六进制在十进制之前
  {"[0-9]+", TK_DEX},   //DEX
  //{"\\$[a-z]{2,3}",TK_REGNAME},
  {"gpr\\[[0-9]+\\]",TK_REGNAME},
  {"!=", TK_UNEQ},      //UNEQ !=放在非前，防止被识别为！
  {"&&",TK_AND},        //AND
  {"\\|\\|",TK_OR},     //OR
  {"!",'!'},            //NOR
  {"\\(",'('},           //bra
  {"\\)",')'},          //ket
  {">=",TK_BEQ},
  {"<=",TK_LEQ},
  {"<<",TK_LSHIFT},
  {">>",TK_RSHIFT},
  {">",'>'},             //biger
  {"<",'<'}               //less
};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
void init_regex() {
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i ++) {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0) {
      regerror(ret, &re[i], error_msg, 128);
      panic("regex compilation failed: %s\n%s", error_msg, rules[i].regex);
    }
  }
}

typedef struct token {
  int type;
  char str[256];
} Token;

static Token tokens[256] __attribute__((used)) = {};
static int nr_token __attribute__((used))  = 0;

static bool make_token(char *e) {
  int position = 0;
  int i;
  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0') {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i ++) {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0) {
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;
        //strncpy(tokens[nr_token].str,substr_start,substr_len);
        //tokens[nr_token].str[substr_len] = '\0';
        Log("match rules[%d] = \"%s\" at position %d with len %d: %.*s",
            i, rules[i].regex, position, substr_len, substr_len, substr_start);

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */
        tokens[nr_token].type = rules[i].token_type;
        //printf("nr_token : %d type : %d \n",nr_token,tokens[nr_token].type);
        switch (rules[i].token_type) {
          //case TK_NOTYPE: ;
          case TK_NOTYPE : break;
          case '+'  : strncpy(tokens[nr_token].str,substr_start,substr_len);tokens[nr_token].str[substr_len] = '\0'; nr_token++;break;
          case TK_EQ: strncpy(tokens[nr_token].str,substr_start,substr_len);tokens[nr_token].str[substr_len] = '\0'; nr_token++;break;
          case '*'  : strncpy(tokens[nr_token].str,substr_start,substr_len);tokens[nr_token].str[substr_len] = '\0'; nr_token++;break;
          case '/'  : strncpy(tokens[nr_token].str,substr_start,substr_len);tokens[nr_token].str[substr_len] = '\0'; nr_token++;break;
          case '-'  : strncpy(tokens[nr_token].str,substr_start,substr_len);tokens[nr_token].str[substr_len] = '\0'; nr_token++;break;
          case TK_SUB  : strncpy(tokens[nr_token].str,substr_start,substr_len);tokens[nr_token].str[substr_len] = '\0'; nr_token++;break;
          case TK_HEX  : strncpy(tokens[nr_token].str,substr_start,substr_len);tokens[nr_token].str[substr_len] = '\0'; nr_token++;break;
          case TK_DEX  : strncpy(tokens[nr_token].str,substr_start,substr_len);tokens[nr_token].str[substr_len] = '\0'; nr_token++;break;
          case TK_UNEQ : strncpy(tokens[nr_token].str,substr_start,substr_len);tokens[nr_token].str[substr_len] = '\0'; nr_token++;break;
          case TK_AND  : strncpy(tokens[nr_token].str,substr_start,substr_len);tokens[nr_token].str[substr_len] = '\0'; nr_token++;break;
          case TK_OR   : strncpy(tokens[nr_token].str,substr_start,substr_len);tokens[nr_token].str[substr_len] = '\0'; nr_token++;break;
          case '!'  : strncpy(tokens[nr_token].str,substr_start,substr_len);tokens[nr_token].str[substr_len] = '\0'; nr_token++;break;
          case '('  : strncpy(tokens[nr_token].str,substr_start,substr_len);tokens[nr_token].str[substr_len] = '\0'; nr_token++;break;
          case ')'  : strncpy(tokens[nr_token].str,substr_start,substr_len);tokens[nr_token].str[substr_len] = '\0'; nr_token++;break;
          case TK_BEQ  : strncpy(tokens[nr_token].str,substr_start,substr_len);tokens[nr_token].str[substr_len] = '\0'; nr_token++;break;
          case TK_LEQ  : strncpy(tokens[nr_token].str,substr_start,substr_len);tokens[nr_token].str[substr_len] = '\0'; nr_token++;break;
          case TK_LSHIFT  : strncpy(tokens[nr_token].str,substr_start,substr_len);tokens[nr_token].str[substr_len] = '\0'; nr_token++;break;
          case TK_RSHIFT  : strncpy(tokens[nr_token].str,substr_start,substr_len);tokens[nr_token].str[substr_len] = '\0'; nr_token++;break;
          case '>'  : strncpy(tokens[nr_token].str,substr_start,substr_len);tokens[nr_token].str[substr_len] = '\0'; nr_token++;break;
          case '<'  : strncpy(tokens[nr_token].str,substr_start,substr_len);tokens[nr_token].str[substr_len] = '\0'; nr_token++;break;
          default: break;
        }

        break;
      }
    }

    if (i == NR_REGEX) {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}
word_t vaddr_read(vaddr_t addr, int len);
int eval(int p,int q);
word_t expr(char *e, bool *success) {
  if (!make_token(e)) {
    *success = false;
    return 0;
  }

  /* TODO: Insert codes to evaluate the expression. */
  //printf("nr_token: %d\n", nr_token);
  
  for (size_t i = 0; i < nr_token; i++)
  {
    //判断负号
    if (tokens[i].type == '-')
    {
      
      if (i==0||tokens[i-1].type == '+' || \
            tokens[i-1].type == '-' || \
            tokens[i-1].type == '*' || \
            tokens[i-1].type == '/' || \
            tokens[i-1].type == TK_SUB ||\
            tokens[i-1].type == '('||\
            tokens[i-1].type == TK_BEQ || \
            tokens[i-1].type == TK_LEQ || \
            tokens[i-1].type == TK_UNEQ|| \
            tokens[i-1].type == '>' || \
            tokens[i-1].type == '<' || \
            tokens[i-1].type == TK_AND|| \
            tokens[i-1].type == TK_OR || \
            tokens[i-1].type == '!' || \
            tokens[i-1].type == TK_LSHIFT || \
            tokens[i-1].type == TK_RSHIFT )
      
     /*
      if (i==0||(tokens[i-1].type != TK_DEX && \
      tokens[i-1].type != TK_HEX && \
      tokens[i-1].type != TK_REGNAME ))
      */
      {
        tokens[i].type = TK_SUB;
      }
      
    }
    if (tokens[i].type == '*')
    {
       if (i==0||tokens[i-1].type == '+' || \
            tokens[i-1].type == '-' || \
            tokens[i-1].type == '*' || \
            tokens[i-1].type == '/' || \
            tokens[i-1].type == TK_SUB ||\
            tokens[i-1].type == '('||\
            tokens[i-1].type == TK_BEQ || \
            tokens[i-1].type == TK_LEQ || \
            tokens[i-1].type == TK_UNEQ|| \
            tokens[i-1].type == '>' || \
            tokens[i-1].type == '<' || \
            tokens[i-1].type == TK_AND|| \
            tokens[i-1].type == TK_OR || \
            tokens[i-1].type == '!' || \
            tokens[i-1].type == TK_LSHIFT || \
            tokens[i-1].type == TK_RSHIFT )
      {
        tokens[i].type = TK_POINT;
      }
      
    }
    
  }
  
  return eval(0,nr_token-1);

  return 0;
}

//括号匹配函数
bool check_parentheses(int p , int q ){
  int i = 0;
  int flag = 0;
  if (tokens[p].type!='('|| tokens[q].type!=')') return false;
  for (i = p; i <= q; i++)
  {
    if (tokens[i].type == '(')
    {
      flag++;
    }
    else if (tokens[i].type == ')')
    {
      flag--;    
    }
    if (flag == 0 && i < q)
    {
      return false ;
    }
    //(1+2)*(3+4) 也是错的
  }
  if (flag != 0)
  {
    return false;
  }
  
  return true;
}
//同一个括号内的情况
//操作符优先级函数
//越小优先级越高
int prior (int type)
{
  int pir = -1;
  switch (type)
  {
    case TK_NOTYPE  :       break;
    case '+'        :   pir = 4;    break;
    case TK_EQ      :   pir = 2;    break;
    case '*'        :   pir = 3;    break;
    case '/'        :   pir = 3;    break;
    case '-'        :   pir = 4;    break;
    case TK_SUB     :   pir =-1;    break;
    case TK_HEX     :   pir =-2;    break;
    case TK_DEX     :   pir =-2;    break;
    case TK_UNEQ    :   pir = 2;    break;
    case TK_AND     :   pir = 1;    break;
    case TK_OR      :   pir = 1;    break;
    case '!'        :   pir = 0;    break;
    case '('        :       break;
    case ')'        :       break;
    case TK_BEQ     :   pir = 2;    break;
    case TK_LEQ     :   pir = 2;    break;
    case TK_LSHIFT  :   pir = 0;    break;
    case TK_RSHIFT  :   pir = 0;    break;
    case '>'        :   pir = 2;    break;
    case '<'        :   pir = 2;    break; 
  
  default: break;
  }
  return pir;
}
//主操作数寻找函数
//返回主操作数的位置
//括号外相对括号里的是主操作符
//符号的优先级越高 要先计算 就不是主操作符
//主操作符应该是优先级最低的
int dominant_operator(int p , int q){
  int dompos = p, pair = 0;
  int pr = -2;
  for (size_t i = p; i <= q; i++)
  {  
    //确定符号在括号之外
    if (tokens[i].type == '(')
    {
      pair ++;
      //printf("ind:tokens[%ld].type: %d\n",i,tokens[i].type);
      while (1)
      {
        i++;
        if (tokens[i].type == '(')   pair++;
        else if (tokens[i].type == ')') pair--;
        //printf("ind:tokens[%ld].type: %d\n",i,tokens[i].type);
        if (pair == 0)
        {
          break;
        }
      }
      if (i>q)
      {
        break;
      }
    }
    //目前只实现了加减乘除
    else if ( tokens[i].type == TK_DEX || tokens[i].type == TK_HEX|| tokens[i].type== TK_REGNAME)
    {
      //printf("tokens[%ld].type: %d\n",i,tokens[i].type);
      continue;
    }
    //越小优先级越高
    //越不是主操作符
    //同一优先级 在前面的 要先计算所以不是主操作符
    //主操作符应该是最后计算的
    //这里要写成= 同一优先级后面来的后计算 是主操作符
    else if (prior(tokens[i].type) >= pr)
    {
      //printf("gen: tokens[%ld].type: %d",i,tokens[i].type);
      pr = prior(tokens[i].type);
      //printf("pr:%d tokens[%ld].type: %d",pr,i,tokens[i].type);
      dompos = i;
    }
  }
  return dompos;
}
//表达式求值函数
int eval (int p , int q) {
  if (p > q)
  {
    assert("Bad expression");
  }
  else if (p == q)
  {
    int number ;
    if (tokens[p].type == TK_HEX)
    {
      sscanf(tokens[p].str,"%x",&number);
    }
    else if (tokens[p].type == TK_DEX)
    {
      sscanf(tokens[p].str,"%d",&number);
      //printf("tempval: %d\n",number);
    }
    else if (tokens[p].type == TK_REGNAME)
    {
      char strtemp[3];
      int chari = 4;
      while (tokens[p].str[chari]!=']'&&chari<=6)
      {
        strtemp[chari-4] = tokens[p].str[chari];
        chari++;
      }
      strtemp[chari-4] = '\0';
      sscanf(strtemp,"%d",&number);
    }
    return number;
  }
  else if (check_parentheses(p,q) == true)
  {
    return eval(p+1,q-1);
  }
  else {
    int op = dominant_operator(p,q);
    //printf("start: %d end: %d dominator : %d \n",p,q,op);
    int val1 = eval (p,op-1);
    int val2 = eval (op+1,q);
    //printf("op_pos: %d\n",op);
    switch (tokens[op].type)
    {
    case '+' : /*printf("tempval+: %d %d %d\n",val1,val2,val1+val2);*/return val1+val2; break;
    case '-' : /*printf("tempval-: %d %d %d\n",val1,val2,val1-val2);*/return val1-val2; break;
    case '*' : /*printf("tempval*: %d %d %d\n",val1,val2,val1*val2);*/return val1*val2; break;
    case '/' : 
      if (val2 == 0)
      {
          assert("Invalid expression for 0 as mother");
      }
      else {
        /*printf("tempval/: %d %d %d\n",val1,val2,val1/val2);*/
        return val1/val2; 
      break;}
    case TK_SUB: /*printf("tempval: %d %d %d\n",val1,val2,-val2);*/return -val2; break; 
    case TK_AND: return val1&&val2;break;
    case TK_OR : return val1||val2;break;
    case TK_EQ : return val1 == val2;break;
    case TK_UNEQ : return val1!=val2;break;
    case '!'  : return !val2;break;
    case TK_POINT: return vaddr_read(val2,4);
    default: assert(0);break;
    }
  }
  return 0;
}