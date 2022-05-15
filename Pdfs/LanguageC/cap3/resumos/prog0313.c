#include <stdio.h>

void main ()
{
	char Est_Civil;
	printf("Digite o seu estado civil: ");
	Est_Civil = getchar();

	switch(Est_Civil)
	{
		case 'c':
		case 'C': printf("Casado!\n"); break;
		case 'd':
		case 'D': printf("Divorciado!\n"); break;
		case 'v':
		case 'V': printf("Viuvo!\n"); break;
		case 's':
		case 'S': printf("Solteiro!\n"); break;
	}
}
