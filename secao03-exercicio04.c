/* Secao 03 - exerc�cio 04
 *
 * Fa�a um algoritmo que pe�a dois n�meros e
 * imprima a soma.
 */

#include <stdio.h>

int main(){
	//Declara��o de vari�veis
	int num1, num2, soma;

	//Entradas
	printf("Informe o primeiro n�mero: ");
	fflush(stdout);
	scanf("%d", &num1);

	printf("Informe o segundo n�mero: ");
	fflush(stdout);
	scanf("%d", &num2);

	//Processamentos
	soma = num1 + num2;

	//Sa�das
	printf("A soma � %d", soma);
}
