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

#include "sdb.h"

#define NR_WP 32
/*
typedef struct watchpoint {
  int NO;
  struct watchpoint *next;
  char expre[256]; //表达式字符串
  word_t value; //表达式数值

} WP;
*/
static WP wp_pool[NR_WP] = {};
static WP *head = NULL, *free_ = NULL;
//head 使用中的监视点
//free_ 空闲的监视点结构
void init_wp_pool() {
  int i;
  for (i = 0; i < NR_WP; i ++) {
    wp_pool[i].NO = i;
    wp_pool[i].next = (i == NR_WP - 1 ? NULL : &wp_pool[i + 1]);
  }

  head = NULL;
  free_ = wp_pool;
}

/* TODO: Implement the functionality of watchpoint */
//从free 链表中返回一个空闲的监视点结构
WP* new_wp(char *expre){
  assert (free_!= NULL);
  WP *temp = free_;
  free_ = free_->next;
  temp-> next = NULL;

  bool success = true ;
  strcpy(temp->expre,expre);
  temp->value = expr(expre,&success);
  assert(success);

  if (head == NULL)
  {
    head = temp;
  }
  else
  {
    WP *p = head;
    while (p->next)
    {
      p = p->next;
    }
    p->next = temp;
    
  }
  return temp;
  
}
//将wp归还到free_链表中
bool free_wp(WP *wp){
  if (wp == NULL)
  {
    printf("wrong input\n");
    return false;
  }
  if (wp == head)
  {
    head = head->next;
  }
  else{
    WP *temp = head;
    //找出wp所指的节点 将其从head中删去
    while (temp->next!=wp)
    {
      temp = temp->next;
    }
    temp->next = temp->next->next;
    
  }
  //把wp指到free的第一个位置
  //并且让free指向该节点
  wp -> next = free_;
  free_ = wp;
  return true;
}

bool delete_wp(int NO){
  WP* wp;
  if (head == NULL)
  {
    printf("NO watch point\n");
    return false;
  }
  wp = head;
  while (wp->NO != NO)
  {
    wp = wp->next;
  }
  if (wp != NULL)
  {
    return free_wp(wp);
  }
  else return false;
}
void print_wp()
{
  WP *wp = head;
  while (wp!=NULL)
  {
    printf("Watchpoint number: %d, exp: %s, value : %ld \n",wp->NO,wp->expre,wp->value);
    wp = wp->next;
  }
  return;
}
//对监视点进行遍历
bool test_change(){
  bool change = 0;
  WP *wp = head;

  if (wp == NULL)
  {
     //printf("%d\n",change);
    change = 0;
    return change;
  }
   //printf("%d\n",change);
   //printf("%d\n",change);
  while (wp->next!=NULL)
  {
    //printf("%d\n",change);
    //printf("jhjj\n");
    bool success = true;
    word_t newvalue = expr(wp->expre,&success);
    if (newvalue!=wp->value)
    {
      printf("old:%ld new:%ld\n",newvalue,wp->value);
      change = 1;
      break;
    }
    wp = wp->next;
  }
  
  return change;
  
}