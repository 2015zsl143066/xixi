//经典指针题：两个数值的互换
#include "stdio.h"
int main(void)
{
	int a = 3;
	int b = 5;
	int * p;
	int * q;
	int * t;
	p = &a;
	q = &b;
	p = t;
	t = q;
	q = p;
	printf("a = %d, b = %d\n", a, b);

	return 0;
}
