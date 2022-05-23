#include <stdio.h>

void main ()
{
	//Escreva um programa que solicite um numero ao usuario ate que o valor deste esteja entre os valores 1 e 100
	int numero;

	printf("Digite um numero: ");
	scanf("%d", &numero);

	if (numero<=100 && numero>=1)
		printf("O numero escrito foi %d e ele está entre 1 e 100!\n", numero);
	else
		printf("Esse numero nao está entre 1 e 100\n");

}
