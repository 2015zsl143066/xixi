#include "stdio.h"
int main()
{
	int i, pre;
	float ave, sum = 0.0;
	for (i=1; i<=100; i++)
	{
		if (i%2!=0)
		{
			pre = pre + 1;
			sum = sum +i;
		}
		
			
	}
	ave = sum / pre;
	printf("ave = %f\n", ave);	


	return 0;
}