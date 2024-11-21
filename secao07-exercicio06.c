/* Secao 07 - Exerc�cio 6
 *
 *Desenvolva um gerador de tabuada, capaz de gerar a tabuada de
 *qualquer n�mero inteiro entre 1 a 10. O usu�rio deve informar
 *de qual n�mero ele deseja ver a tabuada. A sa�da deve ser
 *conforme o exemplo abaixo:
 *
 *Tabuada de 5:
 *5 x 1 = 5
 *5 x 2 = 10
 *...
 *5 x 10 = 50
 */

#include <stdio.h>

int main(){
	//Vari�veis
	int n, boolean = 1;

	while(boolean == 1){
		//Entrada
		printf("Informe um n�mero inteiro entre 1 a 10: ");
		fflush(stdout);
		scanf("%d", &n);

		//Processamentos
		if(n >= 1 && n <= 10){
			printf("Tabuada de %d:\n", n);
			for(int i = 1; i <= 10;i++){
				printf("%d x %d = %d\n", n, i, (n*i));
			}
			break;
		}
		else{
			printf("Erro! Por favor, informe um n�mero inteiro entre 1 a 10.\n");
		}
	}
}
