#include <stdio.h>

int imPar(int x);

void main ()
{
	int num;
	printf("Digite um numero para verificarmos se ele é impar ou par: ");
	scanf("%d", &num);

	imPar(num);
}

int imPar(int x)
{

	if(x%2==0)
		return printf("Par");
	else
		return printf("Impar");
}
