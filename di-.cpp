#include "stdio.h"
#include "malloc.h"
int main(void)
{
	int i = 5;
	int * p = (int *)malloc(4);
	free(p);
	printf("ͬ־�Ǻ�!\n");
	return 0;
}