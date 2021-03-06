#include <stdio.h>

void main ()
{
	/*
		01- Indique se sao verdadeiras ou falsas as seguintes afirmacoes:
			a) Uma função em C pode devolver simultaneamente mais do que um valor. [FALSO]
			b) Uma função em C pode não ter parametros. [VERDADEIRO]
			c) Uma função em C tem que devolver sempre um inteiro. [FALSO]
			d) Os parametros das funções podem do tipo void. [FALSO]
			e) A instrucao return termina a execução de uma função. [VERDADEIRO]
			f) Uma variavel local a uma funcao pode ter o mesmo nome que um parametro. [FALSO]
			g) A instrução return termina a execucao de uma funcao apenas se for a ultima instrucao da funcao em que se encontra.[FALSO]
			h) A instrucao return, quando executada dentro de qualquer funcao, termina o programa.[FALSO]
			i) A instrucao return, quando executada dentro da funcao main, termina o programa.[VERDADEIRO]
			j) O nome de uma funcao é opcional. [FALSO]
			k) Os parametros numa funcao sao opcionais. [VERDADEIRO]
			l) Uma funcao deve fazer o maior numero de tarefas possivel sem ocupar muito codigo. [FALSO]
			m) Uma funcao nao deve ter mais que 10 linhas [FALSO]
			n) O nome de uma funcao nao deve ter mais de 6 letras [FALSO]
			o) O nome de uma funcao nao pode ser uma palavra reservada do C. [VERDADEIRO]
			p) Sempre que for necessario devem ser utilizadas variaveis locais. [VERDADEIRO]
			q) Um prototipo nao é nada mais que a repetição do cabeçalho da função seguido de ; [VERDADEIRO]
			r) Em C, um procedimento nao é mais do que uma funcao "retorna void")  [VERDADEIRO]


		02- Indique os erros de compilação que seriam detectados nos seguintes programas.
			2.1 Ponto e virgula após chamar a função " f(int x, int y); "
			2.2 O valor retornado será -1 mas nao menciona em qual variavel ele será retornado se é no x ou no y
			2.3 A prototipagem está solicitando parametros do tipo void "void f(void);" inves de ser "void f(int x, int y);"
			2.4 A prototipagem nao está recendo o tipo da função "f(int x, int y)" seria "void f(int x, int y)"
			2.5 A funao nao possui um nome definido
			2.6 Os parametros na função nao estão sendo indificados "void f(int x, y)" deveria ser "void f(int x, int y)"


		03 - Exercicio de Exame
			a) Pong(3);  Nao tem saida
			b) Ping(-4); Entrará no default e printará na tela a mensagem 'Já passei em C' e em seguida entraria na função pong e exibiria a mensagem do default 'Ola'
			c) Ping(25); Ao entrar no case 25 do ping, é chamado o pong case 3 em que j=5 e recebe +1  (6) e encerrando a execução da função
			d) Pong(2);  Entra no case 2 da função pong, e em seguida entre no ping (2), ao entrar na função o processo passa pelo case 2 e case 3 da função, ping,  e  enquanto o i-- exibirá na tela  o calculo 1

		04 - Exercicio de exame
			int Abs(int x)
				Devolve o valor absolute de x
			Abs(-5) -> 5
			Abs(5)  -> 5

		--
			int Abs(int x)
			{
				if(x>=0)
					return x;
				else
					return -x;

		05 - Exercicio de exame
			float VAL(float x, int n, float)
				Devolve o Val(valor atual liqudio para n anos, a taxa de t é definido atraves da seguinte formula
				VAL = x/(1+t)+x/(1+t)²+x/(1+t)³+ ... + x/(1+t)n

			//Sugestao: Utilize a funao pot, implementada anteiormente
			}


	*/
}
