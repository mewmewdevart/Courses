v#include <stdio.h>

void main ()
{
	int  mes;
	printf(" Escreva a numeração do mês que você deseja saber! \n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n");
	printf("Janeiro : 1 | Fevereiro : 2 | Março : 3 | Abril : 4 | Maio : 5 | Junho : 6\n");
	printf("Julho : 7 | Agosto : 8 | Setembro : 9 | Outubro : 10 | Novembro : 11 | Dezembro : 12\n");
	scanf("%d", &mes);
			//31 Dias
		if (mes==1||mes==3||mes==5||mes==7||mes==8||mes==10||mes==12)
				printf("O mês %c tem 31 dias!\n", mes);
			//30 Dias
			if(mes==4||mes==6||mes==9||mes==11)
				printf("O mês %c tem apenas 30 dias!\n", mes);
			//28 DIas
			if(mes==2)
				printf("O mês %c tem apenas 28 dias!\n", mes);
		else
				printf("Mês informado invalido!\n");
}
