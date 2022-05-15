#include <stdio.h>

void main ()
{
	int x;
	printf("Implemente um programa que indique se o inteiro lido é zero ou nao!\n");
	printf("Digite um numero inteiro: ");
	scanf("%d", &x);
	if(x!=0)
		printf("%d não é zero!!!\n", x);
	else
		printf("%d é zero!!!\n", x);
}
