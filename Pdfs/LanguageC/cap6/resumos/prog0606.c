#include <stdio.h>

#define NUM 10 //SEM PONTO E VIRGULA PQ É UM DEFINE E NAO UMA CONSTANCIA

void inic(int s[])
{
	int i;
	for(i=0; i<NUM; i++)
		s[i]=0;
}

void main ()
{
	int v[NUM], i;

	inic(v);

	for(i=0; i<NUM;i++)
		v[i]=i;

	for(i=NUM-1; i>=0; i--)
		printf("%d\n", v[i]);
}
