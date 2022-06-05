#include <stdio.h>
void main()
{
	/* 
	01. Indique quais afirmações são Falsas e quais são Verdadeiras!
		01.1 A condição dentro de um laço while e do..while tem que ser colocada sempre dentro de parenteses [VERDADE]
		01.2 Os laços while e for executam Sempre, pelo menos uma vez, o corpo do laço [FALSO]
		01.3 O laço do..while executa SEMPRE, pelo menos uma vez, o corpo do laço. [VERDADEIRO]
		01.4 As três componentes, dentro de parenteses, do laço for são todas obrigatorias. [FALSO]
		01.5 As três componenentes, dentro de parenteses, do laço for são todas facultativas. [VERDADEIRO]

		01.6 Quando um laço for se tem que realizar mais do que uma carga inicial ou mais do que um incremento, as diversas instruções, em cada um dos componentes, devem ser separadas por virgula e nao ponto-e-virgula, de forma a manter o formato do laço for. [VERDADEIRO]
		01.7 A instrução de um laço é sempre executada. [FALSO] Só é executada caso seja verdade a condição
		01.8 No laço for, o numero de vezes que as cargas iniciais sao executadas é sempre igual ao numero de iterações do laço.[FALSO]
		01.9 No laço for ou while, o numero de vezes que a condição é testada é sempre igual ao numero de iterações do laço. [FALSO] 
		01.10 No laço for, o numero de vezes que a instrucao é executada é sempre igual ao numero de vezes que é executada a pós-instrução [VERDADE]
		01.11 Um laço, quando está dentro de outro laço, necessita de chaves. [VERDADE]
		01.12 Nao ha limite para o numero de laços dentro de outros laços. [VERDADE]
		01.13 No laço do..while, a instrução é sempre executada pelo menos uma vez.. [VERDADE]
		01.14 Em todos os laços, a condição é sempre testada pelo menos uma vez. [VERDADE]
		01.15 Os laços while e do..while incrementam automaticamente a variavel de controle [FALSO]
		01.16 Os laços sao executados ate que a condição escrita se verifique.  [FALSO] Para os laços serem executados é necessario que a condição se verifique, e que seja verdadeira
		01.17 O laço do..while aparece escrito menos frequente do que qualquer dos outros. [VERDADE]
		01.18 UM break, quando presente dentro de um laço termina o programa [FALSO]
		01.19 NO laço while, antes de executar a instrução continue, deve-se atualizar a variavel de controle do laço [VERDADE]
		01.20 Qualquer dos laços pode ser sempre escrito a partir do laço while. [VERDADE]



		06. Break presente dentro de um for ou de while, servirá para parar a instrução mesmo após ser verdadeira
		07. Continue dentro de um for e um while, servirá para continuar a instrução mesmo após ser falsa


	13. Qual a diferença se existir entre as duas seguintes instruções: x = ++i e x=i++? De exemplos:
		Um incrementa +1 a variavel antes de passar para o outro  lado, por exemplo:
			i = 5;
			x = ++i;
			x = 6 e i=6
		x = ++i | O i será somado e o resultado dessa soma será repassada para o x
		Ja no oposto:
			i = 5;
			x= i++;
			x= 5 e i= 6;
		x = i++ | O valor de i é passado para o X e em seguida o i é somado sendo ambos valores diferentes.

	14. Se uma variavel se encontra isolada, ++x e x++ são equivalentes?
		Sim


	15. Pode-se utilizar operadores ++ e -- em constantes?
		Nao, esses operadores só podem ser usados em variaveis porquê os constantes possuem um numero fixo a eles.

	16. Qual é a diferença entre a=-2 e a-=2?
		a= -2 | a recebe o valor -2
		a-=2 | a = a - 2  : É a junção entre -= para formar uma equação;

	17. Qual o resultado do seguinte programa:
		n=0;
		do
		 {
			printf("...");
			n=n+1;
		 }
		while (n!=0);

		//  O 0 receberá o valor +1 e em seguida ele entra no laço while porquê a condição é verdadeira (n é diferente de 0) em seguida se entra em um loop onde o n será somado, e o loop sempre será executado e printado na tela

	18. Qual é a diferença entre os dois trechos de codigos?
		A diferença é a mesma citada acima, uma variavel é incrementada ao ser iniciada e  aoutra é iniciada antes de ser incrementada

	19.O que faz o seguinte codigo?
		for (i=1; i<=200; i++)
			printf("%d\n", i);

		O codigo printará na tela os numeros que estão entre 1 e 200 de forma crescente.

	20. Quantas vezes são executadas as instruções dos seguintes laços?
		20.1 20x
		20.2 10x
		20.3 40x
		20.4 5x

	21.Exercicio
		x = 5
		y = 10
		z = 7

	--
	x++		|	6	10	7	| 6
	y*=(z++ +2)	|	6	90	8	| y = y * (8 + 2) : 10 * 10 = 100 - 10 = 90
	y=!x		|	6	0	8	|
	z=(x%2)+ --y	|				| 7 = (5%2) + 9
	z=(x==y)	|	
	!z		|	
	z=x%8


	*/
}
