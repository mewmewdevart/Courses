#include <stdio.h>

/*Enquanto o caractere for digito, ele será escrito na tela caso ao contrario nao*/
int x_isdigit(char c);

void main()
{
	char c;
	while(1) //Termina com ctrl c
	{
		c=getchar();
		if (!x_isdigit(c)) //Se nao for digito
		putchar(c);
	}
}

int x_isdigit(char ch)
{
	return (ch>='0' && ch<='9');
}
