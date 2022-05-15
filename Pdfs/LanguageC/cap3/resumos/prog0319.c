#include <stdio.h>

void main ()
{
	int n_horas;
	long res;
	char tipo;

	printf("Numero de horas: ");
	scanf("%d", &n_horas);
	printf("O que deseja mostrar? (m/s/d) sendo M de minutos, S de segundos e D de Decimos de segundos!\n");
	scanf(" %c", &tipo);
		if (tipo=='m'||tipo=='M')
			res = n_horas < 0 ? 0 : n_horas *(long)60;
		else
			if(tipo=='s'||tipo=='S')
				res =  n_horas < 0 ? 0 : n_horas *(long)3600;
			else
				if(tipo=='D'||tipo=='d')
					res = n_horas < 0 ? 0 : n_horas *(long)36000;

	printf("%dh --> %ld%c\n", n_horas, res, tipo);
}
