#include <stdio.h>

void main ()
{
	//Um programa que apresente um menu com as opções CLientes, Fornecedores, Encomendas e Sair

	char opcao;
	do
	{
		printf("\t M E N U  P R I N C I P A L \n");

		printf("\n\n\tClientes");
		printf("\n\n\tFornecedores");
		printf("\n\n\tEncomendas");
		printf("\n\n\tSair");
		printf("\n\n\n\t\tOpção: ");
		scanf(" %c", &opcao);

		fflush(stdin); //Limpar o buffer do teclado
		switch (opcao)
			{
				case 'c':
				case 'C': puts("Opção clientes!"); break;
				case 'f':
				case 'F': puts("Opção fornecedores!"); break;
				case 'e':
				case 'E': puts("Opção  encomendas!"); break;
				case 's':
				case 'S': break; //Nao faz nada
				default : puts("OPÇÃO INVALIDA!!!");
			}
			getchar(); //Parar na tela
	}
	while (opcao != 's' && opcao != 'S');
}
