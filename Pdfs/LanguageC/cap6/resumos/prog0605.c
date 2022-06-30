#include <stdio.h>

const int num = 10;

void inic(int s[])
{
	int i;
	for (i=0; i<num; i++)
		s[i]=0; // 1. s[0] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9}
}

void main()
{
	int v[num], i;

	inic(v);

	for(i=0; i<num; i++) // [0 - 10]
		v[i]=i; // 2. v[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9}


	for(i=num-1; i>=0; i--)
		printf("%d\n", v[i]); // v[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0}
}
