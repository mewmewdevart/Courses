#include <stdio.h>

void main ()
{
	//Implemente um programa que calcule os aumentos de ordenado para o corrente ano. Se o ordenado for > 1000 deve ser aumentado em 5%, senao deve ser aumentado em 7%!
	float salario;

	printf("Qual o salario: ");
	scanf("%f", &salario);

	if (salario > 1000)
		salario = salario *1.05;
	else
		salario = salario *1.07;

	printf("Novo salario: %.2f\n", salario);
}
