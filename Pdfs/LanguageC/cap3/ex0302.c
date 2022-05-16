#include <stdio.h>

void main()
{	int number1;
	printf("Digite um numero inteiro: ");
	scanf("%d", &number1);

	switch (number1)
		{
			case 0: printf("O numero %d é igual a zero!\n", number1);break;
		/*	case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9: printf("O numero %d é diferente de zero!\n", number1);break; 
		*/
			default : printf("O numero %d é diferente de zero!\n", number1);
		}
}
