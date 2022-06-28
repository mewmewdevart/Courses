#include <stdio.h>

long int num(int n_horas, char tipo);

void main()
{
	int numero;
	char letra;

	printf("Digite as horas e o tipo sendo H para horas, M para minutos e S para segundos!\n");
	scanf("%d", &numero);
	scanf(" %c", &letra);
	printf("%ld", num(numero, letra));
}


long int num(int n_horas, char tipo)
{
	if (tipo=='h'|| tipo=='H')
		return (long) n_horas;
	if (tipo=='m' || tipo == 'm')
		return (long) n_horas*60;
	if (tipo=='s' || tipo =='s')
		return (long) n_horas*3600;
}
