#include <stdio.h>

void main ()
{
	/*
		Escreva um programa que solicite ao usuario uma determinada data e mostre em seguida no formato dd/mm/aaaa
	*/
	int dd, mm, aaaa;
	printf("Digite o dia: ");
	scanf("%d", &dd);
	printf("Digite o mês: ");
	scanf("%d", &mm);
	printf("Digite o ano: ");
	scanf("%d", &aaaa);
	
	printf(" A data digitada foi: %d/%d/%d. \n", dd, mm,aaaa);
}
