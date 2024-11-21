/* Secao 06 - Exerc�cio 4
 *
 *Tendo como dados de entrada a altura e o sexo de uma pessoa, construa
 *um algoritmo que calcule seu peso ideal, utilizando as seguintes f�rmulas:
 *Para homens: (72.7 * altura) - 58
 *Para mulheres: (62.1 * altura) - 44.7
 */

#include <stdio.h>
#include <ctype.h>

int main(){
	//Declara��o de vari�veis
	float altura, pesoIdeal;
	char sexo;

	//Entrada
	printf("Digite a sua altura: ");
	fflush(stdout);
	scanf("%f", &altura);
	gets(stdin); //Correcao de bug
	printf("Digite seu sexo (m/f): ");
	fflush(stdout);
	scanf("%c", &sexo);

	//Processamento
	if(tolower(sexo) == 'm'){
		pesoIdeal = (72.7 * altura) - 58;
		printf("Seu peso ideal � %.2f", pesoIdeal);
	}
	if(tolower(sexo) == 'f'){
		pesoIdeal = (62.1 * altura) - 44.7;
		printf("Seu peso ideal � %.2f", pesoIdeal);
	}
	if(tolower(sexo) != 'm' && tolower(sexo) != 'f'){
		printf("Por favor, digite 'm' para Masculino ou 'f' para Feminino.");
	}
}
