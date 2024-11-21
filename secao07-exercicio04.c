/* Secao 07 - Exerc�cio 4
 *
 *Construa um algoritmo que leia 10 valores inteiros e positivos e:
 *a) Encontre o maior valor
 *b) Encontre o menor valor
 *c) Calcule a m�dia dos n�meros lidos
 */

#include <stdio.h>

int main(){
	//Vari�veis
	int valor[10], j = 1, maior = 0, menor;
	float n, media, soma = 0;

	//Entradas
	printf("Digite abaixo 10 n�meros inteiros e positivos.\n");

	for(int i=0;i<10;i++){
		printf("Digite o %d� n�mero: ", j);
		fflush(stdout);
		scanf("%f", &n);

		if(n == (int)n && n > 0){
			valor[i] = n;
			j++;
		}
		else{
			printf("Por favor, digite um n�mero inteiro e positivo.\n");
			i--;
		}
	}
	menor = valor[0];

	//Processamentos
	for(int i=0;i<10;i++){
		soma += valor[i];
		if (valor[i]>maior){
			maior = valor[i];
		}
		if (valor[i]<menor){
			menor = valor[i];
		}
	}

	media = soma/10;

	//Sa�das
	printf("\na) O maior valor entre todos os n�meros �: %d\n", maior);
	printf("b) O menor valor entre todos os n�meros �: %.d\n", menor);
	printf("c) A m�dia aritm�tica dos n�meros �: %.2f", media);
}
