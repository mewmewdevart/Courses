#include <stdio.h>

void main ()
{
	int number, base;
	printf("Digite a tabuada que você deseja saber: ");
	scanf("%d", &number);

	base = 1;
	while(base<=10)
	{
		printf("%d * %d = %d\n", number, base, number*base);
		base++;
	}
}
