/* Secao 03 - Exerc�cio 06
 *
 * Fa�a um algoritmo que pergunte quanto voc� ganha,
 * por hora e o n�meros de horas trabalhadas no m�s.
 * Calcule e mostre o total do seu sal�rio no referido
 * m�s.
 */

#include <stdio.h>

int main(){
	//Declara��o de vari�veis
	float valor, salario;
	int horas_trabalhadas;

	//Entradas
	printf("Quanto voc� ganha por hora: ");
	fflush(stdout);
	scanf("%f", &valor);

	printf("Quantas horas voc� trabalhou neste m�s: ");
	fflush(stdout);
	scanf("%d", &horas_trabalhadas);

	//Processamentos
	salario = valor*horas_trabalhadas;

	//Sa�das
	printf("O seu sal�rio neste m�s � %.2f", salario);
}
