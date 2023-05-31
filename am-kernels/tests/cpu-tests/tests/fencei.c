/*************************************************************************
	> File Name: ../../../cpu-tests/tests/fencei.c
	> Author: yangli
	> Mail: 577647772@qq.com 
	> Created Time: 2023年05月26日 星期五 14时53分33秒
 ************************************************************************/

#include<stdio.h>
//#define NATIVE_H
#ifndef NATIVE_H 

void fenceitest(){
	asm volatile("fence.i");
}


int main() {
	int a[32];
	for (int i = 0 ; i < 32 ; i ++) {
		a[i] = i;
	}

	fenceitest();

	for (int i = 0 ; i < 32 ; i ++ ){
		a[i] = -i;
	}
	if (a[0] != 0 ) return -1 ;
	return 0 ;
}

#endif 
