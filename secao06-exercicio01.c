/* Secao 06 - Exerc�cio 1
 *
 *Ler uma vari�vel n�merica n e imprimi-la somente se a mesma
 *for maior que 100, caso contr�rio imprimi-la com o valor zero.
 */

#include <stdio.h>

int main(){
	//Declara��o de vari�veis
	int n;

	//Entrada
	printf("Digite uma vari�vel n�merica: ");
	fflush(stdout);
	scanf("%d", &n);

	//Processamento
	if(n > 100){
		printf("%d", n);
	}else{
		n = 0;
		printf("%d", n);
	}
}
