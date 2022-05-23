#include <stdio.h>

void main ()
{
	int linhas;
	char ramos, galhos;

	printf("Digite uma letra do alfabeto: ");
	scanf("%c", &ramos);


	for(galhos='A'; galhos<=ramos; galhos++)
	{
		for(linhas='A'; linhas<=galhos; linhas++)
		printf("%c", ramos);

		putchar('\n');
	}
}
