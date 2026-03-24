#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

#define TAM 3

 struct Pessoa{
 	char nome[50];
 	int idade;
 	char time[50];
 };

int main(){	
	setlocale(LC_ALL,"Portuguese");
	
	typedef struct Pessoa pes;
	
	pes lista[TAM];
	
	for(int i=0; i<TAM; i++){
		printf("Digite o nome da %d pessoa: \n", i+1);
		scanf("%50[^\n]s", lista[i].nome);
		fflush(stdin);
		
		printf("digite a idade: \n");
		scanf("%d", &lista[i].idade);
		fflush(stdin);
		
		printf("Digite o time que torce: \n");
		scanf("%50[^\n]s", lista[i].time);
		fflush(stdin);
	}
	system("cls");
		printf("Dados:\n");
	for(int i=0; i<TAM; i++){
	
		printf("--------------p%d-----------\n", i+1);
		printf("nome: %s\n", lista[i].nome);
		printf("idade: %d\n", lista[i].idade);
		printf("Time que torce: %s\n", lista[i].time);
	}
}
