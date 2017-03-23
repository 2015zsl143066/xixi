#include "stdio.h"
int mian(void)
{
	int i = 5;
	 int * p;
	 p = &i;
	 *p = i;
	 printf("%d\n", *p);
	return 0;
}