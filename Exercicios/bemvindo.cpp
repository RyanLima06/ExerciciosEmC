#include <stdio.h>
#define texto "Entrada e saida de dados strings" //criar uma constante!!!!!!!!!!
int main(){
	printf("%s\n", texto);
	char nome[50];
	
	printf("Escreva o seu nome: \n");
	scanf("%s", &nome);
	
	printf("Ola %s ! Seja bem vindo ao meu aprendizado em C",nome);
}
