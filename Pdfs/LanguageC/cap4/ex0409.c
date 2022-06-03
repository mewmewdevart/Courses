#include <stdio.h>

void main ()
{
	char numeroAlfa, qnt, alfa;

	printf("Digite um numero: ");
	scanf("%c", &numeroAlfa);

	for (qnt='A'; qnt<=numeroAlfa; qnt++)
	{
		for (alfa='A'; alfa<=qnt; alfa++)
		{
			printf("%c", alfa);
		}
	putchar('\n');
	}
}
