#include "stdio.h"
#include "malloc.h"
int main(void)
{
    int i = 5;//分配了4个字节，静态分配；
	int * p = (int *)malloc(4);/*1.要使用malloc函数，必须添加malloc.h这个头文件
	2.malloc函数只有一个形参，并且是整数
	3.malloc（4）中的4表示请求系统为本程序分配4个字节
	4.malloc函数只能返回第一个字节的地址
	5.12行分配了8个字节，p变量占4个，是静态分配，p变量指向的内存也占4个字节，是动态分配；
	*/
   
	return 0;
}