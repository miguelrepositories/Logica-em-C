/* Secao 07 - Exerc�cio 3
 *
 *Elabore um programa que gera e escreve os n�meros �mpares dos
 *n�meros entre 100 e 200.
 */

#include <stdio.h>

int main(){
	//Processamentos
	for(int i = 100; i <= 200;i++){
		if(i % 2 != 0){
			printf("%d\n", i);
		}
	}
}
