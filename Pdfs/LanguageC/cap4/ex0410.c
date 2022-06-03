#include <stdio.h>
void main ()
{
	int numero ;

	printf("Digite um numero para que eu possa verificar se ele está ou não entre 0 e 100: ");
	scanf("%d", &numero);

	if (numero<=100 && numero>0)
		printf ("O numero digitado foi: %d e ele está entre 0 e 100!", numero);
	else
		printf ("O numero digitado %d não está entre 0 e 100!", numero);
}
