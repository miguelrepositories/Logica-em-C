/* Secao 06 - Exerc�cio 5
 *
 *Jo�o da Silva, pescador, comprou um microcomputador para controlar o rendimento di�rio de seu trabalho.
 *Toda vez que ele traz um peso de peixes maior que o estabelecido pelo regulamento de pesca do estado
 *de S�o Paulo (50 Kg) deve pagar uma multa de R$ 4,00 por Kg excedente. Jo�o precisa que voc� fa�a um
 *algoritmo que leia a vari�vel 'p' (peso de peixes) e verifique se h� excesso. Se houver gravar na
 *vari�vel 'e' (excesso) e na vari�vel 'm' o valor da multa que Jo�o dever� pagar. Caso contr�rio mostrar
 *tais vari�veis com o conte�do 'zero'.
 *
 */

#include <stdio.h>

int main(){
	//Declara��o de vari�veis
	float p, e = 0 , m = 0;

	//Entrada
	printf("Digite o peso(Kg) total de peixes: ");
	fflush(stdout);
	scanf("%f", &p);

	//Processamento
	if(p > 50){
		e = p - 50;
		m = e * 4;
		//Sa�da
		printf("Voc� excedeu o limite de peso em %.2f Kg,\nPortanto pagar� R$ %.2f de multa.", e, m);
	}
	else{
		//Sa�da
		printf("Sua excess�o de peso foi %.2f Kg e sua multa tem valor %.2f.", e, m);
	}
}
