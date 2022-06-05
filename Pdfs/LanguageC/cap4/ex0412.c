#include <stdio.h>

void main ()
{
	int number1, number2, ex;
	printf("Digite um numero entre 0 e 255: ");
	scanf("%d", &number1);

	printf("Digite outro numero entre 0 e 255: ");
	scanf(" %d", &number2);

	if (number1<=number2)
	{
		for(ex=number1; ex<=number2; ex++ )
		{
			printf("%3d --> %3c", ex, (char)ex);
			putchar('\n');
		}
	}else
	{
		for(ex=number2; ex<=number1; ex++)
		{
			printf("%3d --> %3c", ex, (char)ex);
			putchar('\n');
		}
	}


}
