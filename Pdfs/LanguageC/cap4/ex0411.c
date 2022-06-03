#include <stdio.h>

void main()
{
	int numero;

	for (numero=1; numero<=255; numero++)
	{
		printf("%d --> %c \n", numero, (char)numero);
	}

}
