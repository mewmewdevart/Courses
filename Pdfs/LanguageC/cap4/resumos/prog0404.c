#include <stdio.h>

void main ()
{
	int number, base;

	number = 1;
	while(number<=5)
	{
		base=1;
		while (base<=10)
			{
				printf("%2d * %2d = %2d\n", number, base, number * base);
				base++;
			}

	//Passar pra proxima tabuada
	number++;
	}
}
