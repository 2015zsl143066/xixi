#include "stdio.h"
#include "malloc.h"
void f(int * q)
{
	*q =  200;
//	return 0;

}
int main()
{
	int * p = (int *)malloc(sizeof(int));//sizeof(int)����ֵ��int��ռ���ֽ���
	*p = 10;
	printf("%d\n", *p);
	f(p);
	printf("%d\n", *p);


	return 0;
}