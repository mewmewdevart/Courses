#include <stdio.h>

void main ()
{
	//Escreva um programa em C que escreva na tela toda a tabela ASCII (0..255 charS), escrevendo em cada linha o codigo ASCII e o caractere correspondente
	int  numero;

	for(numero=0; numero<=255; numero++)
	{
		printf("%3d --> %3c\n", numero, (char)numero);
	}
}
