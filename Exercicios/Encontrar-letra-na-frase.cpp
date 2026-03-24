#include <stdio.h>
#include <string.h>
#include <locale.h>


int main(){
	char frase[20];
	int contador=0;
	char letra;
	printf("Digite uma frase: \n");
	fgets(frase, 19, stdin);
//	scanf("%19[^\n]s",frase);
	fflush(stdin);//stdin significa teclado, na linguagem c, já o fflush é pra limpar o lixo do teclado, evitando bugs.
	
	printf("Digite uma letra que quer contar: \n");
	scanf(" %c", &letra);
	fflush(stdin);
	
	for (int i=0;i<=strlen(frase);i++){
		if(letra==frase[i]){
		contador += 1;
		};
	};
	printf("Resultado: %d", contador);
	
}
