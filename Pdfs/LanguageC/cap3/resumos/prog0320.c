#include <stdio.h>

void main()
{
	//Refazendo o mesmo enunciado mas utilizando switch
	int n_horas;
	long res;
	char tipo;

	printf("Numero de horas? ");
	scanf("%d", &n_horas);
	printf("O que deseja mostrar? Sendo M de Minutos, S de Segundos e D de milessimos de segundos: ");
	scanf(" %c", &tipo);

	switch(tipo)
	{
		case 'M':
		case 'm': res = n_horas * (long)60; break;

		case 's':
		case 'S': res = n_horas *(long)3600; break;

		case 'd':
		case 'D': res = n_horas *(long)36000; break;
	}
	printf("%dh --> %ld%c\n", n_horas, res, tipo);
}
