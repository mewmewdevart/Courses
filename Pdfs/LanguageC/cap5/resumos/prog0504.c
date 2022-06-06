#include <stdio.h>

int linha3x()
{
	int i;
	for(i=1; i<=3; i++)
		printf("*");
	putchar('\n');
}

int linha6x()
{
	int i;
	for(i=1; i<=6; i++)
		printf("*");
	putchar('\n');
}

int linha9x()
{
	int i;
	for(i=1; i<=9; i++)
		printf("*");
	putchar('\n');
}

void main ()
{
	int i;
	linha3x();
	linha6x();
	linha9x();
	linha6x();
	linha3x();
}
