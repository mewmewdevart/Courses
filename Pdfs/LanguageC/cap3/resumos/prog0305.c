#include <stdio.h>

void main ()
{
	int x, y, number;
	printf("Escreva um programa que leia dois numeros e os apresente por ordem crescente. \n");
	printf("Escreva um numero: ");	
	scanf("%d",&x);
	printf("Escreva outro numero: ");
	scanf("%d", &y);

	if (x>y) // Se x for maior que y  efetuasse a troca de valores sem o numero se misturar
	{
		number = x;
		x = y;
		y = number;
	}
	printf("%d %d\n", x, y);
}
