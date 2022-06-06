#include <stdio.h>

int linha ()
{
	int i;
	for(i=1; i<=20; i++)
		printf("*");
	putchar('\n');
}

void main ()
{
	int i;

	linha();
	printf("Numeros de 1 a 5: \n");
	linha();

	for(i=1; i<=5; i++)
		printf("%d\n", i);

	linha();
}
