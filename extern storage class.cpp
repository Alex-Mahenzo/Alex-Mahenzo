#include <stdio.h>

int count;
extern void write_extern();

main()
{
	count = 6;
	write_extern();
}

#include <stdio.h>

extern int count;
void write_extern(void)
{
	printf("count is %d\n",count);
}