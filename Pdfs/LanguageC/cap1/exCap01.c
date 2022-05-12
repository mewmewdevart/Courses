#include <stdio.h>
void main()
{
	printf("1- Qual a funcao que deve estar presente em todas as funeções C\?\n");
	printf("O main()\n");

	printf("2- Como devem terminar todas as instruções em C\?\n");
	printf("Com o ;\n");

	printf("3- Como é delimitado um bloco em C\?\n");
	printf("Com {}\n");

	printf("4- A função printf é parte integrante das linguagem C\?\n");
	printf("Não, ela percente a biblioteca stdio.h\n");

	printf("5- Para que serve a linha #include <stdio.h> em um programa?\n");
	printf("Para chamar a biblioteca stdio.h dentro da linguagem C\n");

	printf("6- A extensão .h indica que o arquivo correspondente é composto por ..\?\n");
	printf("Header, um cabeçalho!\n");

	printf("7- Os arquivos com extensão .h são também conhecidos como?\n");
	printf("Cabeçalhos!\n");

	printf("8- Por quê razão nao se utilizou a linha #include <stdio.h> no programa prog0101.c\?\n");
	printf("Porquê o programa estava exibindo a linguagem C \"pura\" sem ter uma biblioteca inserida!\n");

	printf("9- Dentro de uma string pode-se usar letras maiusculas\? Justifique.\n");
	printf("Sim porquê as letras maiusculas dentro de uma string inserida dentro de um comando de instruções, nao altera os comandos!\n");

	printf("10 -Qual é o significado de Stdio\n");
	printf("Standart Ouput e Input, algo assim para dizer que aquela biblioteca possui funções que aceitarão comandos de entradas e saidas\n");

	printf("~~~~~~~~~~\n");
	printf("11- Identifique os erros de compilacao que seriam detectados nos seguintes programas:");
	printf("11.1 : O main está escrito com a letra maiuscula!\n");
	printf("11.2 : O main nao está declarado como função ()\n");
	printf("11.3 : Está faltando o F do Printf\n");
	printf("11.4 : Existem duas instrucoes sendo declaradas dentro de uma função\n");
	printf("11.5 : Os comentarios estao escritos de forma errada1\n");
	printf("11.6 : Os comentarios estao escritos de forma errada2\n");
	printf("11.7 : A string nao possui aspas duplas\n");
	printf("11.8 : A instrução nao é finalizada com ; \n");
	printf("11.9 : O include nao está sendo declarado com as hashtags!\n");
	printf("11.10 : As instruções da string estao dentro de aspas simples inves de duplas\n");

	printf("~~~~~~~\n");
	printf("12- Os comentarios devem ser escritos:");
	printf("d) Sempre que o programador ache necessario ou conveniente\n");
	printf("13- Um programa em C, que tenha comentarios no seu codigo, é em relação a outro que nao os tenha..\n");
	printf("d) Executado a mesma velocidade, pois os comentarios sao simplesmente ignorados pelo compilador nao havendo qualquer reflexo deles no tempo de execucação!\n");	
	printf("14- INdique se sao verdadeiras ou falsas as seguintes afirmacoes: \n");
	printf("Os comentarios: F, V, F, V, V, F, F\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("15= Escreva um programa que coloque na tela a seguinte frase: \n" );
	printf("Bem-vindos ao  /Mundo\\ da programacao em \"C\"\n");
	printf("~~~~~~~~~~~\n");
	printf("Desenhe uma arvore de natal: \n");
	printf("  *\n");
	printf(" *** \n");
	printf("*****\n");
	printf("~~~~~~\n");
	printf("\n");

	printf("Escreva um programa que coloque na tela as seguintes saidas: \n");
	printf("Total\t=\t100%%\n");
	printf("IVA\t=\t17%%\n");
	printf("IRS\t=\t15%%\n");
	printf("-------------\n");
	printf("Liq.\t=\t68%%\n");

	printf("~~~~~~~\n");
	printf("Experimente a função puts para escrever o hello world  e indique qual é a diferença dela para o printf:\n");
	puts("Hello World");
	printf("Observação: Ela serve apenas para exibir as palavras na tela, porquê ela nao respeita os comandos que sao inseridos dentro dela \n");
}
