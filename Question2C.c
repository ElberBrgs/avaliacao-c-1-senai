#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	
	int i=0,numero,soma=0;
	float media;
	
	do{
		soma+=numero;
		printf("Digite um n�mero: ");
		scanf("%d",&numero);
		if(numero>=0){
			i++;
		}
			
	}while(numero>=0);
	
	media = soma/i;
	
	printf("M�dia: %.1f",media);
	
	return 0;
}
