/* Secao 03 - exerc�cio 02
 *
 * Fa�a um algoritmo para "calcular o estoque medio de uma pe�a".
 * sendo que:
 * estoque_medio = (quantidade_minima + quantidade_maxima) / 2
 */

#include <stdio.h>

int main(){
	//Declara��o de vari�veis
	int qtde_min, qtde_max;
	float estoque_medio;

	//Entradas
	printf("Digite por favor, a quantidade m�nima da pe�a: ");
	fflush(stdout);
	scanf("%d", &qtde_min);

	printf("Digite por favor, a quantidade m�xima da pe�a: ");
	fflush(stdout);
	scanf("%d", &qtde_max);

	//Processamentos
	estoque_medio = (qtde_min + qtde_max) / 2;

	//Sa�das
	printf("O estoque m�dio para essa pe�a � %.2f", estoque_medio);
}
