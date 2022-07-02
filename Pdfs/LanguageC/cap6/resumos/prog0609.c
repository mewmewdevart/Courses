/*
        Escreva um programa que permita gerar uma jogada para um tipo de sena, indicando os numeros a apostar, os quais 
                deverao ser criados aleatoriamente
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUMS 49 //Total de Nºs do Jogo
#define MIN_APOSTA 6 //APosta minima -6 Nºs
#define NUM_LIN 7 //Nº de nºs  apres. por linha no volante

//Declaracao de Funcoes
void Inic_Random();
void Inic(int v[NUMS]);
int Ler_Ns_Apostar();
void Gerar(int *v, int n);
void Apresentar(int res[]);

//Inicia o gerador de numeros aletorios com um nº que depende da hora que se executa a função
void Inic_Random() 
{
	long ultime;
	time(&ultime);
	srand((unsigned) ultime);
}

//Inic. com zero o vetor de controle dos numeros selecionados
void Inic(int v[])
{
	int i;
	for(i=0; i<NUMS;i++)
		v[i]=0;
}

// Lê o numero de numeros a apostar. Aceita valores entre MIN_APOSTA e NUMS.
// Aceita o valor zero para indicar que se quer terminar a prog.
int Ler_Ns_Apostar()
{
	int n;

	do
	{
		printf("Quandos numeros quer apostar ( 0 - Terminar ): ");
		scanf("%d", &n);
	}while ((n<MIN_APOSTA || n>NUMS) && n!=0);
	return n;
}

// Gera n numeros aleat. e coloca a respectiva posicao no vetor
// com valor 1 que indica que esse numero foi selecionado
void Gerar(int *v,  int n)
{
	int i, indice;
	for(i=1; i<n; i++)
		{
			indice = rand()%NUMS; //Devolve nº aleatorios entre 0 e NUMS-1

			if(v[indice]==0) //Nao foi selecionado
				v[indice]=1;
			else //Este numero ja tinha sido selecionado
				i--; //Decrementa ele
					//Calcula-se mais uma vez o i-ésimo numero aleatorio
		}
}

//Apresenta o formato do volante colocar XX nos numeros selecionados para apostar
void Apresentar(int res[])
{
	int i;
	for (i=0; i<NUMS;i++)
	{
		if (res[i]==0)
			printf(" %2d", i+1);
		else
			printf(" XX");
		if((i+1)%NUM_LIN==0)
			putchar('\n');
	}
}

void main ()
{
	int vetor[NUMS];
	int n_nums;//Nº de numeros para jogar no jogo 6..49

	Inic_Random();
	while(1)
	{
		Inic(vetor);
		if((n_nums = Ler_Ns_Apostar())==0)break;

		Gerar(vetor, n_nums); //Gerar numeros de aposta
		Apresentar(vetor);
	}

}


/*
rand()sem parametros, devolve um numero aleatorio entre O e Rand_MAX


*/
