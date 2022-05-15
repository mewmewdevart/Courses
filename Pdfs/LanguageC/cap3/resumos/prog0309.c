#include <stdio.h>

void main()
{
	float salario;
	char est_civil;

	printf ("Qual é o seu salario: ");
	scanf ("%f", &salario);

	printf ("Qual é o seu estado civil? Digite S para Solteiro ou C para Casado: ");
	scanf (" %c", &est_civil);

	if (est_civil == 'c'||est_civil=='C')
		printf("Imposto de 9%%: %.2f\n", salario*0.09);
	else
		if(est_civil == 'S'||est_civil == 's')
			printf("Imposto de 10%%: %.2f\n", salario*0.10);
		else
			printf("Estado civil incorreto!!!\n");
}
