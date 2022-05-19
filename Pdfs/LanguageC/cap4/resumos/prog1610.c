#include <stdio.h>

void main ()
{
	//Escreva um programa que solicite ao usuario um numero e escreva simultaneamente a sequencia crescente e decrescente entre 1 e esse numero

	int i, j, n;
	printf("Introd. um numero: ");
	scanf("%d", &n);

	for (i=1, j=n; i<=n ; i++, j--)
		printf("%d %d\n", i,j);
}
