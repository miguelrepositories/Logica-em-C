/* Secao 06 - Exerc�cio 8
 *
 *Fa�a um algoritmo que leia um n�mero inteiro e mostre uma mensagem
 *indicando se este n�mero � par ou �mpar, e se � positivo ou negativo.
 */

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	//Variaveis
	int numero, i;
	char a[6], b[9];

	//Entradas
	printf("Digite um n�mero inteiro: ");
	fflush(stdout);
	scanf("%d", &numero);

	//Processamentos
	if(numero % 2 == 0){
		strcpy(a, "Par");
		i = 1;
	}
	else{
		strcpy(a, "�mpar");
		i = 1;
	}
	if(numero > 0){
		strcpy(b, "Positivo");
		i = 1;
	}
	else{
		strcpy(b, "Negativo");
		i = 1;
	}
	if(numero == 0){
		i = 0;
	}

	//Sa�das
	if (i == 1){
	printf("O n�mero digitado � %s e %s.", a, b);
	}else{
	printf("\nZero � um n�mero neutro.");
	}
}
