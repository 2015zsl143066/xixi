#include "stdio.h"
#include "malloc.h"
int main(void)
{
	int a[5];//���intռ4���ֽڣ����������20���ֽڣ�ÿ4���ֽڱ�����һ�����ͱ���
    int len;
	int * pArr;
	int i;
	printf("��������Ҫ��ŵ�Ԫ�ظ���:\n");
	scanf("%d", &len);
	pArr = (int *)malloc(4 * len);
	for (i=0; i<len; i++)
	scanf("%d", &pArr[i]);
	for (i=0; i <len; i++)
		printf("%d\n", pArr[i]);


	return 0;
}