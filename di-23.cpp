#include "stdio.h"
int main(void)
{
	int i, j;
	for (i=0; i<3; i++)
	{
		printf("1111!\n");
		for (j=2; j<5; ++j)
		{
			printf("222!\n");
			printf("333!\n");
		}
		printf("4444!\n");

	}	

	return 0;
}