#include <stdio.h>

void main ()
{
	/*
		Escreva um programa que solicite ao usuario uma determinada data no formato aaaa-mm-dd e a mostre em seguida no formato dd/mm/aaa.
	*/
	int dd, mm, aaaa;
	printf("Digite o ano: ");
	scanf("%d", &aaaa);
	printf("Digite o mês: ");
	scanf("%d", &mm);
	printf("Digite o dia: ");
	scanf("%d", &dd);

	printf("A data digitada no formato aaaa-mm-dd foi %d-%d-%d. \n", aaaa, mm, dd);
	printf("E no formato dd/mm/aaaa é %d/%d/%d. \n", dd, mm, aaaa);
}
