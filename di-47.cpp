#include "stdio.h"
int main(void)
{
	int i = 5;
	int * p;
	p = &i;
	*p = i;
	printf("*p = %d\n", *p);
	return 0;
}
/*
指针 就是地址；地址就是指针。
地址是内存单元的编号；
int * p；其中p代表变量名，int *代表int 类型的地址；
指针可指向多个地址；
*/