#include "stdio.h"
int mian()
{
	int val, sum = 0;
	int m;
	printf("请输入需要判断的数字:\n");
	scanf ("%d", &val);
	m = val;
    while (m)
	{
		sum = sum * 10 + m % 10;
		m /= 10;
	}
	if (sum == val)
		printf("yes!\n");
	else 
		printf("no!\n");

	return 0;
}