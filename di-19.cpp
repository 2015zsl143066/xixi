#include "stdio.h"
int main()
{
	int i;
	i = (3,2,5,6);
	printf("%d\n",i);


	return 0;
}
//逗号表达式从左至右执行，最终表达式的值为最后一项的值；