/*Secao 02 - Exercicio 02
 * Fa�a um algoritmo para somar dois n�meros
 * e multiplicar o resultado pelo primeiro n�mero.
 */

#include <stdio.h>
// std = Standard (Padr�o)
// io = input/output (Entrada/Sa�da)

int main(){
	//Declaracao de variaveis
	int num1, num2, soma, multiplicacao;

	//Entradas
	printf("Informe o primeiro n�mero: ");
	fflush(stdout);
	scanf("%d", &num1);

	printf("Informe o segundo n�mero: ");
	fflush(stdout);
	scanf("%d", &num2);

	//Processamentos
	soma = num1 + num2;
	multiplicacao = soma * num1;

	//Sa�da
	printf("O resultado da multiplica��o � %d", multiplicacao);

}
