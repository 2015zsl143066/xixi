#include "stdio.h"
int main()
{
	int i;
	int sum1 = 0;
	int sum2 = 0;
	for (i=1; i<=100; i++)
	{
		if (i%2!=0)
			sum1 = sum1 + i;
		else
			sum2 = sum2 + i;
	}
	printf("sum1 = %d, sum2 = %d\n", sum1, sum2);

	return 0;
}