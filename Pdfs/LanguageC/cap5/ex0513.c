#include <stdio.h>

int Minus(int Valor);

void main ()
{
	int numero;

	printf("Digite um numero: ");
	scanf("%d", &numero);

	printf("%d", Minus(numero));
}

int Minus(int Valor)
{
	return -Valor;
}
