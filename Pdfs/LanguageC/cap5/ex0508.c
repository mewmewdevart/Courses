#include <stdio.h>

float max(float x, float y, float w);

void main ()
{
	float num1, num2, num3;

	printf("Digite três numeros diferentes e irei analisar o maior deles:  \n");
	scanf("%f %f %f", &num1, &num2, &num3);
	printf("%f", max(num1,num2,num3));
}


float max (float x, float y, float w)
{
	if ( x>y && x>w)
		return x;
	if ( y>x && y>w)
		return y;
	if (w>y && w>x)
		return w;
}
