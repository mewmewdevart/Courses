#include <stdio.h>

void main ()
{
	/*
		Escreva um programa que calcule o salario bruto, salario liquido e o imposto a pagar se guindo a regra:
			Salario 		Taxa
			<1000			5%
			>=1000 e <5000		11%
			>=5000			35%
	*/
	float salario, taxa;
	printf("Qual o salario: ");
	scanf("%f", &salario);
		if(salario<1000)
			taxa=.05;
		else
			if(salario<5000)
			taxa=.11;
			else
			taxa=.35;
	printf("Salario: %.2f Imposto: %.2f Liquido: %2.f\n", salario, salario*taxa, salario*(1.0-taxa));
}
