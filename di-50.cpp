#include "stdio.h"
void f(int * i, int * j)
{
	*i = 1;
	*j = 2;
  
}
int main()
{
	int a = 3, b = 5;
	f(&a, &b);
	//a = f(a, b);
	//b = f(a, b) ;

	printf("a = %d, b = %d\n", a, b);

	return 0;
}
//如何通过被调函数修改主调函数中实参的值
//1.实参必须为该普通变量的地址；
//2. 形参必须为指针变量；
//3. 在被调函数中通过 *形参名=。。。。就可以修改主调函数中的变量的值。