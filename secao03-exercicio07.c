/* Secao 03 - Exerc�cio 07
 *
 * Tendo como dados de entrada a altura de uma pessoa,
 * construa um algoritmo que calcule seu peso ideal, usando
 * a seguinte f�rmula: (72.7 * altura) - 58
 */

#include <stdio.h>

int main(){
	//Declara��o de vari�veis
	float altura, pesoIdeal;

	//Entrada
	printf("Digite aqui a sua altura: ");
	fflush(stdout);
	scanf("%f", &altura);

	//Processamento
	pesoIdeal = (72.7 * altura) - 58;

	//Sa�da
	printf("O seu peso ideal � %.2f", pesoIdeal);
}
