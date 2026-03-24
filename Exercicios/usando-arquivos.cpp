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
	
	for(int i=0; i<3; i++){
		printf("Digite o nome do %d° produto: \n",i+1);
		fgets(P[i].nome, 29, stdin);
		P[i].nome[strcspn(P[i].nome, "\n")] = 0;
		fflush(stdin);
		
		printf("Digite o preço do %d° produto: \n",i+1);
		scanf("%f", &P[i].preco);
		fflush(stdin);
		
		printf("Digite o codigo do %d° produto: \n",i+1);
		scanf("%d", &P[i].codigo);
		fflush(stdin);
	};
	system("cls");
	arq = fopen("estoque.txt", "w"); // Abre para escrever

	if (arq != NULL) { // Sempre verifique se o arquivo abriu de verdade
    	for (int i = 0; i < 3; i++) {
    	    // Salva: Nome Preço Código (separados por espaço ou linha)
    	    fprintf(arq, "%s %f %d\n", P[i].nome, P[i].preco, P[i].codigo);
   	 	};
    	fclose(arq);
   		printf("Dados salvos com sucesso!");
	}
	arq = fopen("estoque.txt", "r"); // Abre para ler

	if (arq != NULL) {
    	int i = 0;
    	// Enquanto não chegar no Fim do Arquivo (EOF - End Of File)
    	while (fscanf(arq, "%s %f %d", P[i].nome, &P[i].preco, &P[i].codigo) != EOF) {
   	     i++;
   		};
    	fclose(arq);
}

}
