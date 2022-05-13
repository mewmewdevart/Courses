#include <stdio.h>

void main ()
{
	/*Escreva um programa que realize a conversao de toneladas para quilos e gramas escrevendo o resultado em notacao tradicional (aaaa.bbb) e cientifica (aaa E+-bb)*/
	float quilos = 1.0E3; /* Uma tonelada são 1000 quilos */
	double gramas = 1.0e6; /* Uma tonelada sao 1 000 000 gramas */
	float n_toneladas;

	printf("Quantas toneladas comprou: ");
	scanf("%f", &n_toneladas);
	printf("Numero de Quilos = %f = %e\n", n_toneladas * quilos, n_toneladas * quilos);
	printf("Numero de Gramas = %f = %E\n", n_toneladas * gramas, n_toneladas * gramas);
}
