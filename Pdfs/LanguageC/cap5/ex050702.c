#include <stdio.h>

long int num(int n_horas, char tipo);

void main ()
{
	int horas;
	char letra;

	printf("Digite as horas: ");
	scanf("%d", &horas);

	printf("Digite o tipo H para hora, M para minutos e S para segundos");
	scanf(" %c", &letra);
	printf("%ld", num(horas, letra));
}

long int num (int n_horas, char tipo)
{
	switch (tipo)
		{
			case 'h':
				return (long) n_horas;
				break;
			case 'm':
				return (long) n_horas*60;
				break;
			case 's':
				return (long) n_horas*3600;
				break;
		}
}
