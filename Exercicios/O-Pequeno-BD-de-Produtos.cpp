#include <stdio.h>
#include <locale.h>
#include <string.h>
#include <stdlib.h>

struct Produto {
	char nome[30];
	float preco;
	int codigo;
};

FILE *arq;
 

int main(){
	char busca[30];
	setlocale(LC_ALL,"Portuguese");
	typedef struct Produto Produtos;
	Produtos P[3];
	
//	for(int i=0; i<3; i++){
//		printf("Digite o nome do %d° produto: \n",i+1);
//		fgets(P[i].nome, 29, stdin);
//		P[i].nome[strcspn(P[i].nome, "\n")] = 0;
//		fflush(stdin);
//		
//		printf("Digite o preço do %d° produto: \n",i+1);
//		scanf("%f", &P[i].preco);
//		fflush(stdin);
//		
//		printf("Digite o codigo do %d° produto: \n",i+1);
//		scanf("%d", &P[i].codigo);
//		fflush(stdin);
//	};

	arq = fopen("estoque.txt", "r"); // Abre para ler

	if (arq != NULL) {
    		int i = 0;
    		// Enquanto não chegar no Fim do Arquivo (EOF - End Of File)
    		while (fscanf(arq, "%s %f %d", P[i].nome, &P[i].preco, &P[i].codigo) != EOF) {
   	    	 i++;
   			};
    	fclose(arq);
		}
	
	system("cls");
		
		printf("Digite o nome de um protudo para a busca no banco de dados:\n");
		fgets(busca, 29, stdin);
		busca[strcspn(busca, "\n")] = 0;
		fflush(stdin);
		
	for(int i=0;i<3;i++){
		if(strcmp(busca, P[i].nome) == 0){
			printf("O preço do produto é: ");
			printf("%.2fR$.\n",P[i].preco);
		}
	};
//	
//	for(int i=0; i<3; i++){
//		printf("----------p%d---------\n",i+1);
//		printf("%s \n",P[i].nome);
//		printf("%.2fR$. \n",P[i].preco);
//		printf("%d \n\n",P[i].codigo);
//	};
}
