#include "stdio.h"
int mian()
{
	int val, sum = 0;
	int m;
	printf("��������Ҫ�жϵ�����:\n");
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