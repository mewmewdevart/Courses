#include <stdio.h>

void main()
{
	//Escreva um programa que verifique se um ano bissexto ou nao.
	int ano;
	printf("Digite um ano: ");
	scanf("%d", &ano);

	if (ano%4==0)
		if (ano%100==0)
			if(ano%400==0)
				printf("O ano %d é bissexto, tem 366 dias!\n", ano);
	else
		printf("O ano %d não é um ano bissexto, tem 365 dias!\n", ano);
}
