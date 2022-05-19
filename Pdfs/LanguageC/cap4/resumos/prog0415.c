#include <stdio.h>

void main ()
{
	//Escreva um programa em C que escreva na tela toda a tabela ASCII(0..255chars), escrevendo em cada linha o codigo ASCII e o caractere correspondente
	int i;

	for (i=0; i <= 255; i++)
		printf("%3d :  %c\n", i, (char)i);
}
