/*Se��o 08 - Exerc�cio 1
 *
 *Fa�a um algoritmo que carregue um vetor de 5 elementos inteiros e
 *em seguida armazena em um vetor apenas os n�meros pares maiores
 *que 0 (zero). No final deve mostrar os elementos do vetor na tela.
 */

#include <stdio.h>

int main(){
	//Variaveis
	int vet1[5], vet2[5], j=1;

	//Processamentos e Entradas
	printf("Informe logo a baixo 5 n�meros inteiros. \n");
	for (int i=0;i<5;i++){
		printf("Digite o %d� n�mero: ", j);
		fflush(stdout);
		scanf("%d", &vet1[i]);

		if(vet1[i] % 2 == 0 && vet1[i] > 0){
			vet2[i] = vet1[i];
			j++;
		}
		else{
			j++;
			vet2[i] = 0;
		}
	}
	//Sa�das
	for (int i=0;i<5;i++){
		if(vet2[i] > 0){
			printf("\nVetor[%d] = %d\n", i, vet2[i]);
		}
	}
}
