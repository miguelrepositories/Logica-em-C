/* Secao 07 - Exerc�cio 1
 *
 *Fa�a um algoritmo que determine o maior entre N n�meros.
 *A condi��o de parada � a entrada de um valor 0, ou seja, o algoritmo
 *deve ficar calculando o maior at� que a entrada seja igual a 0 (ZERO).
 */

#include <stdio.h>

int main(){
	//Variaveis
	int numero, maior = 0;

	//Entrada
	printf("Digite um n�mero inteiro: ");
	fflush(stdout);
	scanf("%d", &numero);

	//Processamentos
	while(numero != 0){
		if(numero > maior){
			maior = numero;
		}
		//Entradas
		printf("Digite um n�mero inteiro: ");
		fflush(stdout);
		scanf("%d", &numero);
	}
	printf("\nO maior n�mero � %d", maior);
}
