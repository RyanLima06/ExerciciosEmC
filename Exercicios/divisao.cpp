#include <stdio.h>

int main(){
	int num1;
	int num2;
	float divisao;
	printf("Digite o divisor: ");
	scanf("%d", &num1);
	
	printf("Digite o dividendo: ");
	scanf("%d", &num2);
	
	if(num2 == 0){
		printf("Não se pose dividir nenhum número por 0");
	}else{
	
	divisao = (float) num1/num2;
	
	printf("A divisao entre os numeros e: %lf",divisao);
	};
}
