/* Secao 07 - Exerc�cio 5
 *
 *Fa�a um programa que leia um nome de usu�rio e a sua senha e n�o
 *aceite a senha igual ao nome do usu�rio, monstrando uma mensagem
 *de erro e voltando a pedir as informa��es.
 */

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	//Vari�veis
	char usuario[9], senha[9];
	int resultado;

	//Entradas
	printf("Digite o nome de usu�rio: ");
	fflush(stdout);
	gets(usuario);

	printf("Digite sua senha: ");
	fflush(stdout);
	gets(senha);


	//Processamentos
	resultado = strcmp(usuario, senha);
	if(resultado == 0){
			do {
			printf("Por favor, digite uma senha diferente do nome de usu�rio.\n");
			printf("Nome de usu�rio: ");
			fflush(stdout);
			gets(usuario);
			printf("Senha: ");
			fflush(stdout);
			gets(senha);
			resultado = strcmp(usuario, senha);
		} while(resultado == 0);
	}
}

