#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

int salario(int x);//protótipo da função, tem que ser chamado sempre que a função ficar depois do main.

int main(){
	setlocale(LC_ALL,"Portuguese");
	int qtde_vendidos, valor;
	
	printf("Quantas unidades foram vendidas pelo vendedor x? \n");
	scanf("%d", &qtde_vendidos);
	fflush(stdin);
	
	valor = salario(qtde_vendidos);//função "salario" recebe parametro "qtde_vendidos", produz o resultado/saida e devolve pra variável "valor"
	
	printf("O vendedor x vendeu: %d", qtde_vendidos);
	printf("\nE o seu salário foi de: %d ",valor);
}


int salario(int vendidos){//toda a função salario
	int meta = 100;
	int salarioFixo = 1800;
	if(vendidos>meta){
		return salarioFixo*1.25;
	}else{
		return salarioFixo;
	}
}
