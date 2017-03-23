#include "stdio.h"
//void huhuan(int * p, int * q)
//{
	//int  t;
//	t = * p;
	//* p = * q;
	//* q = t;
//	return ;

//}
int main()
{
	int a = 3;
	int b = 5;
	int t;
	t = a;
	a = b;
	b = t;
	 
	//huhuan(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	return 0;
}