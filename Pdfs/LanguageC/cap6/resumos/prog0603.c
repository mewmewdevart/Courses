#include <stdio.h>

void inic(int s[], int n) //int s[] recebe um vetor de inteiros sem indicar qual a sua dimensao, e o int n um inteiro que indica qual o numero de elemntos a iniciar
{
	int i;
	for (i=0; i<n; i++)
		s[i]=0;
}

void main ()
{
	int v[10];
	int x[20];

	inic(v, 10);
	inic(x, 20);
}
