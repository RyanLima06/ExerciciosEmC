#include <stdio.h>

int main(){
	int pedido;
	int cont = 1;
	int soma = 0;
	
	printf("Seja bem vindo a lanchonete tech!, escolha o seu pedido: \n");
	printf(" 1- Hamburguer (20 reais)\n 2- pizza (25 reais)\n 3- Fanta (5 reais)\n");	
	for(int i=0; i<5; i++){
		printf("Escolha seu %d pedido---> ",cont);
		scanf("%d", &pedido);
		
		switch(pedido){
			case 1:
				soma += 20;
				break;
			
			case 2:
				soma += 25;
				break;
			
			case 3:
				soma += 5;
				break;
			
		}
		cont++;
	}

	printf("A conta deu: %d", soma);
}
