#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main(){
	setlocale(LC_ALL, "Portuguese");
	char key[N] = {"senha"};  
	char senha[N];
	char nome[N];
	int saida;
	int v1;
	int v2;
	int v;
	int i = 0;
	int soma, sub, mult, div;
	char resp;
	int ok;
	int check_condition = 0;
	char resp_fim;
	printf("Digite seu nome: ");
	fgets(nome, 50, stdin);
	
	printf("Olá %s ", nome);
	
	printf("Digite a senha para entrar na calculadora:");
	gets(senha);
	

		do{
	ok = strcmp(key, senha);
	
	if(ok == 0){
	
		
		
		do{
		printf("Seja bem-vindo %s", nome);
			
	printf("Bem vindo a calculadora, o que vai fazer?\n 1- somar\n 2- subtrair\n 3- multiplicar\n 4- dividir\n");
	scanf("%d", &saida);
	switch(saida){
		case 1:
			printf("Digite o primeiro numero: ");
			scanf(" %d", &v1);
			printf("Digite o segundo numero: ");
			scanf(" %d", &v2);
			soma = v1+v2;
			printf("A soma dos numeros e: %d \n\n", soma);
			printf("Desejar continuar somando emcima desse resultado? (s/n) \n  ");
			scanf(" %c", &resp);
			
			while(resp == 's'||resp == 'S'){
			
				printf("Digite o proximo numero: ");
				scanf(" %d", &v);
				
				printf("A soma e: %d \n", soma += v);
				
				printf("Desejar continuar somando emcima desse resultado? (s/n) \n  ");
				scanf(" %c", &resp);
				};
			break;
			
		case 2:
			printf("Digite o primeiro numero: ");
			scanf(" %d", &v1);
			printf("Digite o segundo numero: ");
			scanf(" %d", &v2);
			sub = v1-v2;
			printf("A subtracao dos numeros e: %d \n\n", sub);
			printf("Desejar continuar subtraindo emcima desse resultado? (s/n) \n  ");
			scanf(" %c", &resp);
			
			while(resp == 's'||resp == 'S'){
			
				printf("Digite o proximo numero: ");
				scanf(" %d", &v);
				
				printf("O resultado e: %d \n", sub -= v);
				
				printf("Desejar continuar subtraindo emcima desse resultado? (s/n) \n  ");
				scanf(" %c", &resp);
				};
			break;
		case 3:
			printf("Digite o primeiro numero: ");
			scanf(" %d", &v1);
			printf("Digite o segundo numero: ");
			scanf(" %d", &v2);
			mult = v1*v2;
			printf("O resultado da multiplicacao e: %d \n\n", mult);
			printf("Desejar continuar multiplicando emcima desse resultado? (s/n) \n  ");
			scanf(" %c", &resp);
			
			while(resp == 's'||resp == 'S'){
			
				printf("Digite o proximo numero: ");
				scanf(" %d", &v);
				
				printf("O resultado e: %d \n", mult *= v);
				
				printf("Desejar continuar multiplicando emcima desse resultado? (s/n) \n  ");
				scanf(" %c", &resp);
				};
			break;
		case 4:
			printf("Digite o primeiro numero: ");
			scanf(" %d", &v1);
			printf("Digite o segundo numero: ");
			scanf(" %d", &v2);
			div = v1/v2;
			printf("A divisao dos numeros e: %d \n\n", div);
			printf("Desejar continuar dividindo emcima desse resultado? (s/n) \n  ");
			scanf(" %c", &resp);
			
			while(resp == 's'||resp == 'S'){
			
				printf("Digite o proximo numero: ");
				scanf(" %d", &v);
				
				printf("O resultado e: %d \n", div += v);
				
				printf("Desejar continuar dividindo emcima desse resultado? (s/n) \n  ");
				scanf(" %c", &resp);
				};
			break;
	};
		printf("Deseja sair da calculadora? (s/n)\n ");
	scanf(" %c", &resp);
	}while(resp == 'n'||resp =='N');
		break;
	}else{
		printf("senha incorreta, tente novamente! \n");
		printf("Deseja sair da calculadora? (s/n)\n ");
		scanf(" %c", &resp_fim);
		
	}
	}while(resp_fim == 'n'|| resp_fim=='N');
		
}
//	char s[N]={"Lógica de "};
//	char s2[N]={"programação."};
//	
//	strcat(s,s2);//concatenar strings(arrays)
//	
//	puts(s);
//

//	char origem[N] = {"Hello world!"};
//	char destino [N];
//	
//	puts(origem);
//	puts(destino);
//	
//	strcpy(destino, origem);
//	printf("Depois do cpy: \n");
//	
//	puts(origem);
//	puts(destino);
	


//int main(){
//	char frase[20];
//	int contador=0;
//	char letra;
//	printf("Digite uma frase: \n");
//	fgets(frase, 19, stdin);
////	scanf("%19[^\n]s",frase);
//	fflush(stdin);//stdin significa teclado, na linguagem c, já o fflush é pra limpar o lixo do teclado, evitando bugs.
//	
//	printf("Digite uma letra que quer contar: \n");
//	scanf(" %c", &letra);
//	fflush(stdin);
//	
//	for (int i=0;i<=strlen(frase);i++){
//		if(letra==frase[i]){
//		contador += 1;
//		};
//	};
//	printf("Resultado: %d", contador);
//	
//}

//strcpy = função que muda o valor de uma string, bblioteca string.h!
//strlen = mostra o tamaho da string
//strcmp = compara se a string 1 é igual a string 2, se for igual da 0, se for diferente aparece um diferente de zero.

//biblioteca locale.h: serve para aparecer acentos
//setLocale(LC_ALL, "Portuguese");

//	char criptografia[11];
//
//	printf("Digite seu nome e ele sera criptografado: (10 caracteres) \n");
//	scanf("%10[^\n]s", criptografia);
//
//	
//	for(int i =0; i<strlen(criptografia); i++){
//		printf("Vou mexer na letra: %c que esta no indice %d\n", criptografia[i], i);
//
//		criptografia[i] = criptografia[i+1];	
//	};
//	printf("%s ",criptografia);
