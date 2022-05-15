#include <stdio.h>

void main ()
{
	int n_horas;
	long res;
	char tipo;

	printf("Numero de horas: ");
	scanf("%d", &n_horas);

	printf("O que deseja mostrar? M para Minutos, S para Segundos e D para Milessimos de segundos!\n");
	scanf(" %c", &tipo);

	res = n_horas;
	switch(tipo)
	{
		case 'd':
		case 'D': res = res *10;

		case 's':
		case 'S': res = res *60;

		case 'm':
		case 'M': res = res *60;
	}
	printf("%dh --> %ld%c\n", n_horas, res, tipo);
}
