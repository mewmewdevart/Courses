#include <stdio.h>

void main()
{
	//Escreva um programa que solicite ao usuario um numero e um caractere. EM seguida, terá que preencher n linhas, cada uma delas com n caracteres
	int i, n;

	printf("Introd. um numero: ");
	scanf("%d", &n);

	for (i=n; ;i++) //Laço infinito 
		{
		if (i%10==0) //Multiplo de 10
			break;
		else
			if (i%3==0)
				continue;
			printf("%d\n", i);
		}
}
