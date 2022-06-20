#include <stdio.h>

float pot(float x, int n);

void main ()
{
	printf("%f %f %f", pot(2.0,4), pot(1.234,3), pot(3.0,0));
}

float pot(float x, int n)
{
	float res;
	int i;

	for(i=1, res=1.0; i<=n ; i++)
		res*=x; //res = res *x

	return res;
}

