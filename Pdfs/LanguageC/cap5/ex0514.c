#include <stdio.h>

int is_special(int x);

void main()
{
	int numero;

	printf("Devolve um valor logico que indica se o dobro de x é ou nao igual a x²: \n");
	scanf("%d", &numero);

	printf("%d", is_special(numero));
}


int is_special(int x)
{
	if ( x!=0 )
		return 1; //Verdadeiro
	else
		return 0; //Falso
}


