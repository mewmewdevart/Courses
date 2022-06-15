#include <stdio.h>

//Devolve o resultado da soma
int soma(int a, int b)
{
	return a+b;
}

//Devolve o dobro
int dobro(int x)
{
	return 2*x;
}

void main()
{
	int n, i, total;
	printf("Digite dois numeros: ");
	scanf("%d%d", &n, &i);
	total = soma(n,i); //Atrib, do result de funcao a uma var

	printf("%d+%d=%d\n", n, i, total);
	printf("2*%d=%d e 2*%d=%d\n", n, dobro(n), i, dobro(i));
}
