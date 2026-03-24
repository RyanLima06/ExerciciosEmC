#include <stdio.h>

int main(){
	int saida;
	
	do{
	printf(" 1- ver saldo\n 2- depositar\n 3- sacar\n 4- sair\n--->");
	scanf("%d", &saida);
	switch(saida){
		case 1:
			printf("%d\n", 150);
			break;
		case 2:
			printf("Depositado.\n");
			break;
		case 3:
			printf("dinheiro sacado.\n");
			break;
		case 4:
			printf("saindo...");
			break;
	}
	}while(saida !=4);
	printf("Ate a proxima!");
}
