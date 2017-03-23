//斐波拉切序列，除1,2项外，每一项都是前两项之和；
#include "stdio.h"
int main(void)
{
	int n, i;
	int f1 = 1, f2 = 2, f3;
	printf("请输入需要输入的项:\n");
	scanf("%d", &n);
	if (1==n)
		f3 = 1;
	else if (2==n)
		f3 = 2;
	else
	{
		for (i=3; i<=n; i++)
		{
		  f3 = f1 + f2;
		  f1 = f2;
		  f2 = f3;
		}
	}
	printf("%d\n", f3);
	return 0;
}