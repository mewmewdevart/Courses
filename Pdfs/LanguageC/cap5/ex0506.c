#include <stdio.h>

long int n_segundos(int n_horas);

void main ()
{
/* 	int n_horas, n_segundos, cont;

	printf("Digite as horas que deseja converter: ");
	scanf("%d", &n_horas);

	for (cont=0, n_segundos=0; n_horas > cont;cont++)
	{
		n_segundos = n_horas*3600;
	}

	printf("A quantidade de horas %d foi convertida em %d segundos!", n_horas, n_segundos);
*/

	int n_horas, n_cont, n_segundo;

	printf("Digite as horas que deseja converter: ");
	scanf("%d", &n_horas);

	n_segundos(n_segundo);

	printf("A quantidade de horas %d foi convertida em %d segundos!", n_horas, n_segundo);

}

long int n_segundos (int n_horas)
{
	int n_cont, n_segundo;

	for (n_cont = 0,n_segundo = 0; n_horas >= n_cont; n_cont++)
	{
		n_segundo=n_horas*3600;
	}
}
