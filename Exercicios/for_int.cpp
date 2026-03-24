#include <stdio.h>

int main(){
	int j = 1;
	int nota[5];
	float media;
	for(int i = 0; i<5; i++){
		printf("Digite a %d nota: ",j);
		scanf("%d", &nota[i]);
			j++;
	}
	printf("%d %d %d %d %d \n",nota[0],nota[1],nota[2],nota[3],nota[4]);
	media = (float) (nota[0]+nota[1]+nota[2]+nota[3]+nota[4])/5;
	printf("a media do aluno e: %f. \n ",media);	
	if(media >=7){
		printf("\n Aprovado!");
	}else{
		printf("Se lascou! Boa sorte na prova!");
	}
}
