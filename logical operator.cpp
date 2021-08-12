#include <stdio.h>

main()
{
	int a = 6;
	int b =15;
	int c ;
	
	if ( a && b )
	{
		printf("line 1 - condition is true\n");
	}
	if ( a || b)
	{
		printf("line 2 - condition is true\n");
	}
	a = 3;
	b = 10;
	if ( a && b)
	{
		printf("line 3 - condition is true\n");
	}
	else
	{
	    printf("line 3 - condition is not true\n");	
	}
	if ( !(a && b) )
	{
		printf("line 4 - condition is true\n");
	}	
}