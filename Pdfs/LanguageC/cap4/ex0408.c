#include <stdio.h>

void main ()
{
	//Escreva um programa que coloque na tela meia arvore de natal com asteriscos. O numero de ramos deverá ser introduzido pelo usuario.
	int ramos, galhos, linhas;
	char tipoC;
	printf ("Digite a quantidade de ramos: ");
	scanf ("%d", &ramos);
	printf("Digite o tipo de caractere que a arvore terá: ");
	scanf(" %c", &tipoC);

	for (galhos=1; galhos<=ramos; galhos++)
	{
		for (linhas=1; linhas<=galhos; linhas++)
		printf("%c", tipoC);

		putchar('\n');
	}
}
