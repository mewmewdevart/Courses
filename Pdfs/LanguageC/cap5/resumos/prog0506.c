#include <stdio.h>

int linha (int num, char ch)
{
	int i;
	for (i=1; i<=num; i++)
		putchar(ch);
	putchar('\n');
}
void main ()
{
	linha(3, '+');
	linha(6, '-');
	linha(9, '*');
	linha(5, '2');
}
