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
有一个浮点型变量x，如何判断x的值是否为零；
if(|x-0.000001|<0.000001)
     是
else
     否


  */