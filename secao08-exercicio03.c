/*Sec��o 08 - Exerc�cio 3
 *
 *Fa�a um programa que carregue um vetor com dez n�meros
 *inteiros. Mostre o vetor na ordem inversa a que foi digitado.
 */

#include <stdio.h>

int main(){
	//Vari�veis
	int vetor[10];

	//Entradas
	for(int i=0;i<10;i++){
		printf("Digite um n�mero inteiro para o Vetor[%d]: ", i);
		fflush(stdout);
		scanf("%d", &vetor[i]);
	}
	printf("\n");

	for(int i=9;i>=0;i--){
		printf("Vetor[%d] = %d\n", i, vetor[i]);
	}
}
