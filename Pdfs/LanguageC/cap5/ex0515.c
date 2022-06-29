#include <stdio.h>

int IsVogal(char ch);

void main ()
{
	char ch;
	printf("Verifica se ch é uma das vogais do alfabeto (minuscula ou maiuscula): \n");
	scanf("%c", &ch);

	IsVogal(ch);
}

int IsVogal (char ch)
{
	if ( ch >='a' && ch<='z')
		printf("Minuscula");
	else
		printf("Maiuscula");
}
