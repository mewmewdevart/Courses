#include <stdio.h>

void main ()
{
	//Escreva um programa que solicite um salario ao utilizador e mostre o imposto a pagar.
	float salario;
	printf("Qual o salario: ");
	scanf("%f", &salario);
	if (salario <=0)
		printf("Salario invalido!\n");
	else
		if(salario>1000)
			printf("Imposto de 10%%: %.2f\n", salario*0.10);
		else
			printf("Imposto de 5%%: %.2f\n", salario*0.05);
}
