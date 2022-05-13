#include <stdio.h>

void main ()
{
	int n_segundos;//segundos
	printf("Digite a quantidade de segundos: ");
	scanf("%d", &n_segundos);
	/* printf("A conversao transforma os segundos em %d hora, %d minutos e %d segundos", segundos/3600, segundos/60, segundos*60);*/
	printf("Horas : %d\n", (int) n_segundos/3600);
	printf("Minutos : %d\n", (int) (n_segundos%3600/60));
	printf("Segundos : %d\n", (int) n_segundos%60);
}
