/* Secao 03 - exerc�cio 02
 *
 * Fa�a um algoritmo que converta metros para cent�metros
 */

#include <stdio.h>

int main(){
	//Declara��o de vari�veis
	float metros, cm;

	//Entradas
	printf("Digite a quantidade de metros: ");
	fflush(stdout);
	scanf("%f", &metros);

	//Processamentos
	cm = metros*100;

	//Sa�das
	printf("%.f Metros corresponde a %.f cent�metros", metros, cm);
}
