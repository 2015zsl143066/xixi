#include "stdio.h"
int main()
{
	int i, pre = 0;
	float ave= 0.0, sum = 0.0;
	for (i=1; i<=100; i++)
	{
		if (i%2!=0)
		{
		
			sum = sum +i;
			pre = pre + 1;
		}
		
		
	}
	ave = sum  / pre;
	printf("ave = %f\n", ave);	


	return 0;
}