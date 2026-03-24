#include <stdio.h>
#include <string.h>
#include <locale.h>

struct Resultado {
	char letra;
	int quantidade;
};

	typedef struct Resultado res;
	
int main(){
	setlocale(LC_ALL, "Portuguese");
	
	res final;
	
	char frase[20];
	int contador=0;
	char letra;
	printf("Digite uma frase: \n");
	fgets(frase, 19, stdin);
//	scanf("%19[^\n]s",frase);
	fflush(stdin);//stdin significa teclado, na linguagem c, já o fflush é pra limpar o lixo do teclado, evitando bugs.
	
	printf("Digite uma letra que quer contar: \n");
	scanf(" %c", &final.letra);
	fflush(stdin);
	
	for (int i=0;i<=strlen(frase);i++){
		if(final.letra==frase[i]){
		contador += 1;
		final.quantidade = contador;
		};
	};
	printf("Resultado: %d\n", contador);
	printf("Letra desejada: %c\n", final.letra);
	printf("quantidade: %d",final.quantidade);
	
}
