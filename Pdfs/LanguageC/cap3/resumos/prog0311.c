#include <stdio.h>

void main ()
{
	//Implemente um programa que, dada uma letra, indique qual o estado civil de uma pessoa.
	char Est_Civil;

	printf("Responda o seu estado civil sendo S de Solteiro, C de Casado, D de Divorciado e V de viuvo!\n");

	puts("Qual é o estado civil: ");
	Est_Civil = getchar();

	if (Est_Civil=='S'||Est_Civil=='s')
		printf("Solteiro!\n");
	else
		if (Est_Civil=='C'||Est_Civil=='c')
			printf("Casado!\n");
		else
			if(Est_Civil=='D'||Est_Civil=='d')
				printf("Divorciado!\n");
			else
				if(Est_Civil=='V'||Est_Civil=='v')
					printf("Viuvo!\n");
				else
					printf("Estado civil invalido!\n");
}
