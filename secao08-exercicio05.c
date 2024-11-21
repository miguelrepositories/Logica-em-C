/*Sec��o 08 - Exerc�cio 5
 *
 *Fa�a um programa que carregue um vetor com dez n�meros inteiros.
 *Calcule e mostre os n�meros superiores a 50 e suas respectivas posi��es.
 *Mostrar mensagem se n�o existir nenhum n�mero nesta condi��o.
 */

#include <stdio.h>

int main(){
	//Vari�veis
	int vetor1[10], boolean = 0;

	//Entradas
	for(int i=0;i<10;i++){
		printf("Digite um n�mero inteiro para %d/10: ", (i+1));
		fflush(stdout);
		scanf("%d", &vetor1[i]);
	}

	//Processamentos
	for(int i=0;i<10;i++){
		if(vetor1[i] > 50){
			//Sa�da
			printf("vetor1[%d] = %d\n", i, vetor1[i]);
			boolean++;
		}
	}
	//Sa�da
	if (boolean==0){
		printf("\nN�o existe nenhum n�mero maior que 50 neste vetor.");
	}
}
