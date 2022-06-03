#include <stdio.h>

void main ()
{
	int i;
	i = 1;

	while(i<=20)
	{
		if(i==0)
			continue;
		else
		printf("%2d\n", i);

		i++;
	}
}
