#include "stdio.h"
#include "malloc.h"
int main(void)
{
	int a[5];//如果int占4个字节，本数组包含20个字节，每4个字节被当作一个整型变量
    int len;
	int * pArr;
	int i;
	printf("请输入你要存放的元素个数:\n");
	scanf("%d", &len);
	pArr = (int *)malloc(4 * len);
	for (i=0; i<len; i++)
	scanf("%d", &pArr[i]);
	for (i=0; i <len; i++)
		printf("%d\n", pArr[i]);


	return 0;
}