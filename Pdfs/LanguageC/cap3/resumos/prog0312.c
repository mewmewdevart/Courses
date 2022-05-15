#include <stdio.h>

void main ()
{
	char Est_Civil;
	printf("Qual o estado civil: ");
	Est_Civil = getchar();

	switch(Est_Civil)
	{
		case 'C':printf("Casado!\n");
		break;
		case 'S':printf("Solteiro!\n");
		break;
		case 'D':printf("Divorciado!\n");
		break;
		case 'V':printf("Viuvo!\n");
		break;

		default:printf("Estado civil incorreto!\n");

	}
}
