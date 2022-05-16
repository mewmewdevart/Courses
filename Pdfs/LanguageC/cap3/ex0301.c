#include <stdio.h>

void main ()
{
	//Escreva um programa, de quatro formas distintas, que leia um inteiro e indique se esse inteiro é ou nao igual a zero
	int number1, number2, number3, number4;
	printf("16.01 : Digite um numero inteiro: ");
	scanf("%d", &number1);
		if (number1==0)
			printf("IF : Esse inteiro %d é igual a zero!\n", number1);
		else
			printf("ELSE : Esse inteiro %d não é igual a zero!\n", number1);

	printf("16.02 : Digite outro numero inteiro: ");
	scanf("%d", &number2);
		if (number2 > 0 | number2 < 0)
			printf("Esse inteiro %d não é igual a zero!\n", number2);
		else
			printf("Esse inteiro %d é igual a zero!\n", number2);
	printf("16.03 : Digite outro numero inteiro: ");
	scanf(" %d", &number3);
		if (number3!=0)
			printf("Esse inteiro %d é diferente de zero!\n", number3);
		else
			printf("Esse inteiro %d é igual a zero!\n", number3);	
}
