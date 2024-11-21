/*Sec��o 08 - Exerc�cio 6
 *
 *Fa�a um programa que receba um c�digo n�merico inteiro e um
 *vetor de cinco posi��es de n�meros reais. Se o c�digo for zero,
 *termine o programa. Se o c�digo for 1, mostre o vetor na ordem
 *direta. Se o c�digo for 2, mostre o vetor na ordem inversa.
 */

#include <stdio.h>

int main(){
	//Vari�veis
	int cod;
	double vetor1[5];

	//Entradas
	for(int i=0;i<5;i++){
		printf("Digite um n�mero real para %d/5: ", (i+1));
		fflush(stdout);
		scanf("%lf", &vetor1[i]);
	}
	printf("\nEscolha uma das op��es a baixo: \n");
	printf("1- Mostrar o vetor na ordem direta\n");
	printf("2- Mostrar o vetor na ordem inversa\n");
	printf("0- Sair\n");
	printf("Digite sua escolha: ");
	fflush(stdout);
	scanf("%d", &cod);
	printf("\n");
	switch(cod){
		case 1:
			for(int i=0;i<4;i++){
				printf("%.2lf, ", vetor1[i]);
			}
			printf("%.2lf", vetor1[4]);
			break;
		case 2:
			for(int i=4;i>=1;i--){
				printf("%.2lf, ", vetor1[i]);
			}
			printf("%.2lf", vetor1[0]);
			break;
		case 0:
			printf("Aplica��o Encerrada...");
			break;
	}
}
