#include <stdio.h>

int x_toupper(char ch)
{
	if (ch >='a' && ch <='z') //Se minuscula
		return ch + 'A' - 'a';
	else
		return ch;//Devolve a propria
}

void main ()
{
	char c;
	while (1) //Termina com ctrl c
	{
		c=getchar();
		putchar(x_toupper(c));
	}
}
