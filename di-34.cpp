#include "stdio.h"
int f()
{
	return 10.5;
}
int main()
{
	int i = 99;
	double x = 6.6;
	x = f ();
	printf("%f", x);

	return 0;
}