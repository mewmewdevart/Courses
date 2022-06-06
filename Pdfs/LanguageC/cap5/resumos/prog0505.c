#include <stdio.h>

int linha (int num)
{
	int i;
	for(i=1; i<=num; i++)
		printf("*");
	putchar('\n');
}
void main ()
{
	linha(3);
	linha(6);
	linha(9);
	linha(6);
	linha(3);
}
