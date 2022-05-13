#include <stdio.h>

void main ()
{
	/* Escreva um programa que calcule o perimetro e a area de uma circunferencia. */
	float raio, perimetro;
	double Pi = 3.1415927, area;

	printf("Introduza o raio da circunferencia: ");
	scanf("%f", &raio);
	area = Pi * raio * raio;
	perimetro = 2 * Pi * raio;

	printf("Area = %f\nPerimetro = %f\n", area, perimetro);
}
