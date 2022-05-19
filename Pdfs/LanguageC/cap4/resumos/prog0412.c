#include <stdio.h>

void main ()
{
	int i;
	for (i=1; i<=100; i++)
		if (i==30)
			break;
		else
			printf("%2d\n", 2*i);
	printf("FIM DO LAÇO!\n");
}
