#include <stdio.h>
#include <math.h>

int main(){
	
	int saida;
	int v1;
	int v2;
	int v;
	int i = 0;
	int soma, sub, mult, div;
	char resp;
	do{
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
}
	while(resp == 'n'||resp =='N');
		printf("rai timbora carnica!");
	}
	

