#include <stdio.h>

void main ()
{
	float num;
	printf("Introduza um numero real: ");
	scanf("%f",&num);
	printf("Parte inteira: %d\n",(int)num);
	printf("Parte fracionaria: %f\n", num - ((int)num));
}
