/* Secao 06 - Exerc�cio 6
 *
 *Elabore um algoritmo que leia as vari�veis 'c' e 'n', respectivamente c�digo
 *e n�mero de horas trabalhadas de um oper�rio. Calcule o sal�rio sabendo-se que
 *ele ganha R$ 10,00 por hora. Quando o n�mero de horas exceder a 50 calcule o
 *excesso de pagamento armazenando-o na vari�vel 'e'. Caso contr�rio zerar tal
 *vari�vel, sal�rio total e o sal�rio excedente.
 */

#include <stdio.h>

int main(){
	//Declara��o de vari�veis
	float c, n = 0, t = 0, e = 0, salario = 0, extra = 0, salarioTotal = 0;

	//Entrada
	printf("Digite o c�digo: ");
	fflush(stdout);
	scanf("%f", &c);
	gets(stdin); //Correcao de bug
	printf("Digite o n�mero total de horas trabalhadas: ");
	fflush(stdout);
	scanf("%f", &n);

	//Processamento
	if( n > 50){
		e = n - 50;
		n = n - e;
		t = e + n;
		extra = e * 20;
		salario = n * 10;
		salarioTotal = salario + extra;
	}else{
		salario = n * 10;
		t = n;
		extra = 0;
		salarioTotal = salario + extra;
	}

	//Sa�da
	printf("Voc� trabalhou: %2.f horas\nSeu sal�rio �: R$ %2.f \nSeu sal�rio extra �: R$ %2.f \nSeu sal�rio total �: R$ %2.f", t, salario, extra, salarioTotal);
}
