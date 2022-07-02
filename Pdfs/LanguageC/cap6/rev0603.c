#include <stdio.h>

void main()
{
	//Calculo de media
	float nota[3] = {0};
	float total, media;

	/* printf("Digite a primeira nota! ");
	scanf("%d", &nota[0]);

	printf("Digite a segunda nota! ");
	scanf("%d", &nota[1]);

	printf("Digite a terceira nota! ");
	scanf("%d", &nota[2]);

	total = nota[0]+nota[1]+nota[2];
	media = total/3;

	printf("A media do aluno é de: %d", media); */

	printf("Digite 3 notas: ");

	for (int i=0; i<3; i++)
		scanf("%f", &nota[i]);


	for (int i=0; i<3; i++)
		total += nota[i];

	media = total/3;
	printf("A media do aluno é %2.0f", media); 
}
