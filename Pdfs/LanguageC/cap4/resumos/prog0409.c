#include <stdio.h>

void main()
{
	//Escreva um programa que coloque na tela aos cinco primeiras tabuadas, parando a tela depois de cada uma delas ser escrita
	int i, j;

	for (i=1; j<=5; i++)
		{
			for (j=1; j<=10; j++)
				printf("%2d * %2d = %2d\n", i, j, i*j);

			if (i!=5) //para nao parar na ultima
			{
				printf("Pressione <ENTER> paa continuar...");
				getchar();
			}
		}
}
