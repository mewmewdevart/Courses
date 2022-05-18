#include <stdio.h>

void main()
{
	//Escreva um programa que calcule a soma e o produto dos n primeiros numeros naturais
	int n, num, soma, produto;
	printf("Introduza um numero: ");
	scanf("%d", &num);

	for (soma = 0, n = produto = 1; n <= num ; n=n+1)
		{
			soma = soma +n;
			produto = produto * n;
		}
		printf("Soma = %d\n Produto= %d\n", soma, produto);
}
