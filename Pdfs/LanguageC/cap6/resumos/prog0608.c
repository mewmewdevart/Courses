#include <stdio.h>

const int n = 10;

/* Escreva um programa que declare um vetor com n=10 numeros reais e coloque na i-esima posição o resultado de i*(n-1) */

/* char * memset(char *[], char ch, int n)
{
	int i;

	for(i=0; i<n;i++)
		v[i] = ch;

	return v;
} */
void main ()
{
	float v[n];
	int i;

	//memset(v);
	for(i=0; i<n;i++)
		v[i]=i*(n-1);

	for(i=0; i<n;i++)
		printf("%f\n", v[i]);
}
