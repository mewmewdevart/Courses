#include <stdio.h>

void main ()
{
	int a, b;
	
	printf("Introduza dois inteiros: ");
	scanf("%d%d",&a, &b);

	printf("%d + %d = %d\n", a, b, a+b);
	printf("%d - %d =  %d\n", a, b, a-b);
	printf("%d * %d = %d\n", a, b, a*b);
	printf("%d / %d = %d\n", a, b, a/b);
	printf("%d %% %d = %d\n", a, b, a%b);
}
