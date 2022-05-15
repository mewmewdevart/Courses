#include <stdio.h>

void main ()
{
	printf(" Implemente um programa que solicite ao utilizador dois inteiros, e em seguida, aplique todos os operadores relacionas de C aos inteiros lidos.\n");
	printf("~~~~~~~~~~\n");	
	printf("Introduza 2 inteiros: \n");
	printf("~~~~~~~~~~\n");
	int x, y;
	printf("Digite um numero: ");
	scanf("%d", &x);
	printf("Digite outro numero: ");
	scanf(" %d", &y);
	printf("Igualdade: %d == %d = %d\n", x,y, x==y);
	printf("Maior que: %d > %d = %d\n", x, y, x>y);
	printf("Maior ou igual a: %d >= %d = %d\n", x, y, x>=y);
	printf("Menor que: %d < %d = %d\n", x,y, x<y);
	printf("Menor ou igual a: %d <= %d = %d\n",x,y,x<=y);
	printf("Diferente de: %d != %d = %d\n",x,y,x!=y);
}
