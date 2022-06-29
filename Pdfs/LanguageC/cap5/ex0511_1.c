#include <stdio.h>
#include <ctype.h> // Funcoes sobre o tipo char (ctype = char type)

int isdigit(char c);
int isalpha(char c);
int isalnum(char c);
int islower(char c);
int isupper(char c);
int isspace(char c);
char tolower(char c);
char toupper(char c);

void main ()
{

}

int isdigit (char c) //Verdade caso c seja um digito. Falso caso ao contrario
{
	return (c>='0' && c<='9');
}

int isalpha(char c) //Verdade caso c seja uma letra do alfabeto, maiuscula ou minuscula. Falso, caso ao contrario
{
	return (c>='a' && c<='z' || c>='A' && c<='Z');
}

int isalnum (char c)  //Verdade caso c seja um digito ou uma letra do alfabeto. Falso, caso contrario
{
	return isalpha(c) || isdigit(c);
}

int islower(char c)//Verdade caso c seja uma letra minuscula. Faso caso ao contrario
{
	return (c>='a' && c<='z');
}

int isupper (char c) //Verdade caso c seja um espaço ou um TAB. Falso, caso contrario.
{
	return (C>='A' && C<='Z');
}

int isspace (char c) // Verdade caso c seja um espaço ou um TAB. Falso, caso  contrario.
{
	return c==' ' || c=='\t'; /*Espaço ou tab */
}

char tolower(char c) // Devolve o valor do caractere c transformado em minusculas
{
	if isupper(c)
		return c + 'a' - 'A';
	else
		return c;
}

char toupper(char c) //Devolve o valor do caractere c transformado em maiusculas
{
	if islower(c)
		return c +'A' - 'Z';
	else
		return c;
}
