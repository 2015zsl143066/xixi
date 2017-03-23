#include "stdio.h"
int main(void)
{
	int i = 1;
	int sum = 0;
	while (i<=100)
	{
		sum = sum + i;
		++i;

	}
		
	printf("sum = %d\n", sum);


	return 0;
}
//注意变量要赋初值，while 和 for 可以相互替换，但for的逻辑性更强；