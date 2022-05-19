#include <stdio.h>

void main ()
{
	//Escreva um programa que solicite ao usuario um numero. EM seguida todos os numeros inteiros a partir desse numero, exceto os multiplos de 3. QUando encontrar o primeiro multiplo d 10 a execução termina.
	int i, n;
	printf("Introd. um numero: ");
	scanf("%d", &n);

	for(i=n; i++) //Laço infinito
	{
		if(i%10==0) //Multiplo de 10
			break;
		else
			if (i%3==0)
				continue;
			printf("%d\n", i);
	}
}
