#include <stdio.h>

void main ()
{
	short int idade;
	int montante;
	long int n_conta;
	printf("Escreva um programa que solicite ao usuario a idade, o montante a depositar o e numero de conta em que se quer realizar o deposito, declarando as variaveis como short, int e long: \n");
	
	printf("Escreva a idade: ");
	scanf("%hd", &idade);
	printf("Escreva o montante a ser depositado na conta: ");
	scanf("%d", &montante);
	printf("Escreva a numeracao da conta: ");
	scanf("%ld", &n_conta);

	printf("Uma pessoa de %hd de idade, depositou %d na conta %ld\n", idade,montante,n_conta);
}
