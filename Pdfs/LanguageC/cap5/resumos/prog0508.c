#include <stdio.h>

void linha ();

void main ()
{
	linha();
	printf("Hello World!\n");
	linha();
}

void linha()
{
	int i;
	for(i=1; i<=20; i++)
		printf("*");

	putchar('\n');
}
