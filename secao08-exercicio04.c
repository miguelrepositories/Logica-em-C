/*Sec��o 08 - Exerc�cio 4
 *
 *Escreva um algoritmo que leia e mostre um vetor de 20 elementos
 *inteiros, em seguida, mostre a soma de todos os elementos.
 */

#include <stdio.h>

int main(){
	//Vari�veis
	int vetor1[20], soma = 0;

	//Entradas
	for(int i=0;i<20;i++){
		printf("Digite um n�mero para Vetor[%d]: ", i);
		fflush(stdout);
		scanf("%d", &vetor1[i]);
	}

	//Processamentos
	for(int i=0;i<19;i++){
		printf("%d + ", vetor1[i]);
		soma += vetor1[i];
	}
	//Sa�das
	printf("%d", vetor1[19]);
	printf("\n = %d", (soma+vetor1[19]));
}
