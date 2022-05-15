#include <stdio.h>

void main ()
{
	float salario, imposto = 0.0;
	char sexo;
	printf("Introduza o seu salario: ");
	scanf("%f", &salario);
	printf("Introduza a letra inicial do seu sexo sendo F para Feminino e M para Masculino: ");
	scanf(" %c", &sexo);

	switch (sexo)
	{
		case 'f':
		case 'F': imposto = 0.10; break;

		case 'm':
		case 'M': imposto = 0.15; break;
	}
	printf("Imposto %.2f\n", salario*imposto);
}
