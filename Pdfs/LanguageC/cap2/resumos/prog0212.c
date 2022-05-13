#include <stdio.h>

void main ()
{
	char ch1, ch2;
	printf("Introduza um numero: ");
	scanf("%c", &ch1);
	printf("Introduza outro numero: ");
	scanf(" %c", &ch2);
	printf("Os caracteres introduzidos foram '%c' e '%c' \n", ch1, ch2);
}
