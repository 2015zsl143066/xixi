#include "stdio.h"
int main()
{
	float i;
	float sum = 0.0;
	for (i=1; i<=100; i++)
	{
		sum = sum +1 / i;
	}
    printf("sum = %f\n", sum);
	return 0;
}
/*
��һ�������ͱ���x������ж�x��ֵ�Ƿ�Ϊ�㣻
if(|x-0.000001|<0.000001)
     ��
else
     ��


  */