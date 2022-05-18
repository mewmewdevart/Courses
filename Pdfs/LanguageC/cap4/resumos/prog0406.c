#include <stdio.h>

void main ()
{
	int base, number;

	while (base<=5)
	{
		number = 1;
		while(number<=10)
		{
			printf("%2d * %2d = %2d\n", base, number, base * number);
			number++;
		}
	printf("\n");
	base++;
	}
}
