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
ָ�� ���ǵ�ַ����ַ����ָ�롣
��ַ���ڴ浥Ԫ�ı�ţ�
int * p������p�����������int *����int ���͵ĵ�ַ��
ָ���ָ������ַ��
*/