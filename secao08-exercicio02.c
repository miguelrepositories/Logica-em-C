/*Se��o 08 - Exerc�cio 1
 *
 *Escreva um algoritmo que leia dois vetores de 10 posi��es e fa�a a
 *soma dos elementos de mesmo �ndice, colocando o resultado em um
 *terceiro vetor. Mostre o vetor resultante.
 */

#include <stdio.h>

int main(){
	//Variaveis
	int vet1[10], vet2[10], vet3[10], n;

	//Entradas
	for (int i=0;i<10;i++){
		printf("Digite um n�mero para o Vetor1[%d]: ", i);
		fflush(stdout);
		scanf("%d", &n);
		vet1[i] = n;
	}
	printf("\n");
	for (int i=0;i<10;i++){
		printf("Digite um n�mero para o Vetor2[%d]: ", i);
		fflush(stdout);
		scanf("%d", &n);
		vet2[i] = n;
	}
	printf("\n");
	//Processamentos e Sa�das
	for (int i=0;i<10;i++){
		vet3[i] = vet1[i] + vet2[i];
		printf("Vetor3[%d] = %d\n", i, vet3[i]);
	}
}
