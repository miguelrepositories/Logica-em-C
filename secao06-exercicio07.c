/* Secao 06 - Exerc�cio 7
 *
 *Desenvolva um algoritmo que:
 *a) Leia 4 (quatro) n�meros;
 *b) Calcule o quadrado de cada um;
 *c) Se o valor resultante do quadrado do terceiro for >= 1000, imprima-o e finalize;
 *d) Caso contr�rio, imprima os valores lidos e seus respectivos quadrados.
 */

#include <stdio.h>
#include <conio.h>

int main(){
	//Variaveis
	int numeros[4], quadrados[4], i;

	//Entradas
	printf("Digite a seguir 4 (quatro) n�meros\n");

	for(i = 0; i < 4; i++)
	{
	printf("Digite o %d� n�mero: ", i+1);
	fflush(stdout);
	scanf("\n%d", &numeros[i]);
	}

	//Processamentos
	for(i = 0; i < 4; i++)
	{
		quadrados[i] = numeros[i]*numeros[i];
	}

	//Sa�das
	if(quadrados[2] >= 1000){
		printf("\nO resultado do quadrado do terceiro n�mero digitado � %d\n", quadrados[2]);
		printf("Aplica��o encerrada.");
	}else{
		for(i = 0; i < 4; i++){
			printf("\nO quadrado de %d � %d;\n", numeros[i],quadrados[i]);
		}
	}
}
