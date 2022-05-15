#include <stdio.h>

void main ()
{
	printf("Implemente um programa que indique se um numero é positivo (>=0) ou negativo!\n");
	int x;
	printf("Digite um numero: ");
	scanf("%d", &x);

	if (x>=0)
		printf("O numero é positivo\n");
	else
		printf("O numero é negativo!\n");
}
