#include <stdio.h>
#include <locale.h>

#define NUMEROS 6

int main(){
	setlocale(LC_ALL,"");
	
	int numero[NUMEROS],pares=0,impares=0,i;
	
	for(i=0;i<NUMEROS;i++){
		printf("Digite um n�mero: ");
		scanf("%d",&numero[i]);
		
		if(numero[i] % 2==0){
			pares++;
		}else{
			impares++;
		}
		
	}
	
	for(i=0;i<NUMEROS;i++){
		printf("%d� n�mero inserido: %d\n",i+1,numero[i]);
	}
	
	printf("Pares: %d\n",pares);
	printf("�mpares: %d\n",impares);
	
	return 0;
}
