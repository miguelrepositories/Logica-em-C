/* Secao 07 - Exerc�cio 2
 *
 *Fa�a um algoritmo que conte de 1 a 100 e a cada m�ltiplo de 10
 *emita uma mensagem: "M�ltiplo de 10".
 */

#include <stdio.h>

int main(){
	//Processamentos
	for(int i = 1; i <= 100; i++){
		if (i % 10 == 0){
			//Sa�da
			printf("%d � M�ltiplo de 10,\n", i);
		}
		else if(i != 100){
			//Sa�da
			printf("%d, ", i);
		}
	}
}
