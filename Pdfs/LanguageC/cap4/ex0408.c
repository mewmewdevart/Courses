#include <stdio.h>

void main()
{
	int N_ramos, qnt, asterisco;

	printf("Digite um numero: ");
	scanf("%d", &N_ramos);

	for(qnt=1; qnt<=N_ramos; qnt++)
	{
		for(asterisco = 1; asterisco<=qnt; asterisco++)
		{
			printf("*");
		}
		putchar('\n');
	}
}
