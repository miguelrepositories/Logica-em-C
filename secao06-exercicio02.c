/* Secao 06 - Exerc�cio 2
 *
 *Elabore um algoritmo que leia um n�mero, se positivo armazene-o em 'a',
 *se for negativo, em 'b'. No final mostrar o resultado.
 */

#include <stdio.h>

int main(){
	//Declara��o de vari�veis
	int n, a, b;

	//Entrada
	printf("Digite um n�mero inteiro: ");
	fflush(stdout);
	scanf("%d", &n);

	//Processamento
	if(n > 0){
		a = n;
		printf("Este � um n�mero positivo, portanto a = %d", a);
	}else if(n < 0){
		b = n;
		printf("Este � um n�mero negativo, portanto b = %d", b);
	}
}
