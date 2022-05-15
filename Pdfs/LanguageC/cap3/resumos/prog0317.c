#include <stdio.h>

void main ()
{
	int num1, num2, rest=0;
	char op;
	printf("Escreva uma expressao: ");
	scanf("%d %c %d", &num1, &op, &num2);

	switch(op)
	{
		case '+' : rest = num1+num2;
		break;
		case '-' : rest = num1-num2;
		break;

		case '*':
		case 'x':
		case 'X': rest = num1*num2;
		break;

		case '/' :
		case '\\':
		case ':' : rest = num1/num2;
		break;
	}

	printf("%d %c %d = %d\n", num1, op, num2, rest);
}
