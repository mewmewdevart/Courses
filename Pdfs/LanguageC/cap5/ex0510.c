#include <stdio.h>

int Entre(int x, int lim_inf, int lim_sup);

void main ()
{
	int num, entre1, entre2;

	printf("Digite um numero: \n");
	scanf("%d", &num);

	printf("Digite dois numeros: ");
	scanf("%d %d", &entre1, &entre2);

	printf("O numero %d está entre %d e %d ?: ", num, entre1, entre2);
	Entre(num, entre1, entre2);
}

int Entre(int x, int lim_inf, int lim_sup)
{
	if ( x>= lim_inf && x <= lim_sup)
		return printf("Sim!");
	else
		return printf("Nao!");
}
