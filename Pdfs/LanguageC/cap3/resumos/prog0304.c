#include <stdio.h>
void main ()
{
	float salario;
	printf("Implemente um programa que adicione $1.000,00 ao salario de um individuo, caso este seja inferior a $100000,00!\n");
	printf("Qual é o salario? ");
	scanf("%f", &salario);
	if (salario <= 100000)
		salario = salario + 1000;
	printf("Salario final: %.2f\n", salario);
}
