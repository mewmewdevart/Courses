#include <stdio.h>

#define DIM 3
#define ESPACO ' '

void inic(char s[ ][DIM])
{
	int i, j;
	for(i=0; i<DIM;i++)
		for(j=0;j<DIM;j++)
			s[i][j]=ESPACO;
}

void mostra(char s[DIM][DIM])
{
	int i, j;
	for (i=0; i<DIM;i++)
	{
		for(j=0; j<DIM;j++)
			printf("%c %c", s[i][j], j==DIM-1?' ':'|');
		if(i!=DIM-1)
			printf("\n----------\n");
			putchar('\n');
	}
}

void main ()
{
	char Velha[DIM][DIM];
	int posx, posy;
	char ch='0'; //Caractere para jogar
	int n_jogadas=0;

	inic(Velha);
	while(1)
	{
		mostra (Velha);
		printf("Introduza a posição de Jogo linha e coluna: ");
		scanf("%d %d", &posx, &posy);

		posx--;
		posy--; //Pois os indices de um vetor começam em 0

		if(Velha[posx][posy]==ESPACO)//Casa Livre
			{
				Velha[posx][posy] = ch = (ch == '0') ? 'x' : '0';
				n_jogadas++;
			}
		else
			printf("Posicao já ocupada\n Jogue NOvamente!!!\n");
		if(n_jogadas==DIM*DIM)
			break;//Acabar o programa
	}
	mostra(Velha);
}
