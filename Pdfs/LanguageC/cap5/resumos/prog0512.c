/*
Exercicio de exame:

void tiro(int x)
{
	switch(x)
	{
		case 1: printf("\nEste teste é mesmo facil');
		case 2: printf("\nAi quem diga o contrario...");
			return;
		case 3: printf("\nEstou no tiro e x = %d", x);
			liro(x++);
			break;
			printf("Vou sair do tiro");
		default: printf("\nEntrei pelo default");
	}
}

void liro(int x)
{
	switch(x)
		case 2: return;
			printf("Olarailarlela");
			break;
		case 3: printf("Eu percebo himalais de C");
			break;
			printf("Sou mesmo bom!");
		case 4: printf("Aqui estou eu mais uma vez");
			liro(2);
			return;
		default : printf("Aqui estou eu mais uma vez");
			tiro(x--);
}

	//Qual a saida das seguintes chamadas
	a) tiro(1);
		Entrará no switch e exibirá a mensagem "Este teste é mesmo facil" e como nao possui um break para parar o programa, o codigo continuará exibindo as opções abaixo
	Exibirá na tela a mensagem do case 2 "Ai de que diga ao contrario..." e através do "return" a função será terminada
	b) tiro(3);
		Entra  no switch do case 3 e exibe na tela a mensagem "Estou no Tiro e x = 3" e em seguida é chamada a função liro(x++) (que seria tipo 4 mas só é incrementado o ++ depois, entao é 3).
	Na função liro(3) chama-se a mensagem "Eu percebo Himalais de C" e em seguida a função é finalizada através do break presente na função liro.
	c) liro(2);
		A função é simplesmente terminada
	d) liro(4);
		Entra no switch do case 4 da função liro, e exibe a mensagem "Nao percebo nada disto" e em seguida chama-se a mensagem escrita no case 2 da função,  e como  ela nao possui valor, a função é terminada
	e) liro(5);
		Entra no switch do case 5 da função liro, e exibe a mensagem "Aqui estou eu mais uma vez") em seguida chama-se a função tiro 5 e como nao tem 5 é executado a mensagem do default "Entrei pelo default" em seguida antra-se na função liro e chama o mesmo 5 que tinha retornado, fazendo assim um loop
*/
