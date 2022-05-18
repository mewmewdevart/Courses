#include <stdio.h>

void main ()
{
	int number;
	printf("Escreva um numero! ");
	scanf("%d", &number);

	while (number<=10)
	{
		printf("%d,  ", number);
		number++;
	}
}
