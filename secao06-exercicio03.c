/* Secao 06 - Exerc�cio 3
 *
 *Ler um n�mero e verificar se ele � par ou �mpar. Quando for par armazenar
 *esse valor em 'p' e quando for �mpar armazen�-lo em 'i'.
 *Exibir 'p' e 'i' no final do processamento.
 */

#include <stdio.h>

int main(){
	//Declara��o de vari�veis
	int n, p, i;

	//Entrada
	printf("Digite um n�mero inteiro: ");
	fflush(stdout);
	scanf("%d", &n);

	//Processamento
	if(n % 2 == 0){
		p = n;
		printf("Este � um n�mero par, portanto p = %d", p);
	}else if(n % 2 != 0){
		i = n;
		printf("Este � um n�mero �mpar, portanto i = %d", i);
	}
}
