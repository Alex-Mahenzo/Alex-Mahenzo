#include <stdio.h>

int main()
{
	int a =12;
	int b =23;
	int c =10;
	int d =a*b/c;
	int e =a+d-c;
	int f = b/c+d*e;
	printf("value of d:%d\n",d);
	printf("value of e:%d\n",e);
	printf("value of f:%d\n",f);
	return 0;
}