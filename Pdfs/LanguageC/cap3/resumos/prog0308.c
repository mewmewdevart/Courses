#include <stdio.h>

void main ()
{
	int a, b;
	printf("Introduza dois numeros: ");
	scanf("%d%d", &a, &b);
	printf("O valor atribuido a A =  %d e a B =  %d!\n", a,b);
	if(a>=0)
		{ if(b>10)
			printf("B é muito grande!\n");
		}
	else
		printf("A tem um valor negativo!\n");
}
