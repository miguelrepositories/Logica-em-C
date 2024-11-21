/* Secao 06 - Exerc�cio 9
 *
 *A Secretaria de Meio Ambiente que controla o �ndice de polui��o mant�m 3
 *grupos de ind�strias que s�o altamente poluentes do meio ambiente. O �ndice de
 *polui��o aceit�vel varia de 0,05 at� 0,25. Se o �ndice sobe para 0,3 as ind�strias
 *do 1� grupo s�o intimadas a suspenderem suas atividades, se o �ndice crescer para 0,4
 *as industrias de 1� e 2� grupo s�o intimadas a suspenderem suas atividades, se o
 *�ndice atingir 0,5 todos os grupos devem ser notificados a paralisarem suas atividades.
 *Fa�a um algoritmo que leia o �ndice de polui��o medido e emita uma notifica��o
 *adequada aos diferentes grupos de empresas.
 */

#include <stdio.h>

int main(){
	//Variaveis
	float indiceDePoluicao;

	//Entradas
	printf("Digite o n�mero do �ndice de polui��o medido: ");
	fflush(stdout);
	scanf("%f", &indiceDePoluicao);

	//Processamentos
	if((indiceDePoluicao >= 0.3)&&(indiceDePoluicao < 0.4)){
		printf("Aten��o: Ind�strias do Grupo 1 devem suspender suas atividades.");
	}
	else if((indiceDePoluicao >= 0.4)&&(indiceDePoluicao < 0.5)){
		printf("Aten��o: Ind�strias do Grupo 1 e do Grupo 2 devem suspender suas atividades.");
	}
	else if(indiceDePoluicao >= 0.5){
		printf("Todos os grupos de ind�strias devem suspender as atividades.");
	}
	else {
		printf("N�veis aceit�veis.");
	}
}
