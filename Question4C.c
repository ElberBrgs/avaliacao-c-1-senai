#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	char aluno[1][200];
	int notas[1][4],i,j,soma=0;
	float media;
	
	for(i=0;i<1;i++){
		printf("Digite seu nome:\n");
		scanf("%s",&aluno[i]);
		
		for(j=0;j<4;j++){
			printf("Digite a %dª nota:\n",j+1);
			scanf("%d",&notas[i][j]);
			soma+=notas[i][j];
		}
	}
	
	for(i=0;i<1;i++){
		printf("Aluno: %s\n",aluno);
		
		for(j=0;j<4;j++){
		printf("%dª Nota: %d\n",j+1,notas[i][j]);
		}
	}
	
	media= soma/4;
	printf("Média: %.1f\n",media);
	
	if(media>=7){
		printf("Aprovado.");
	}else if(media>=5){
		printf("Recuperação.");
	}else{
		printf("Reprovado.");
	}
	
	return 0;
}
