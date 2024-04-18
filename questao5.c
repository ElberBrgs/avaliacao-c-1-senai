#include <stdio.h>
#include <locale.h>
#include <limits.h>

int main(){
	setlocale(LC_ALL,"");
	
	int numero,menorNumero = INT_MAX,maiorNumero = INT_MIN;
	int quantidade = 0;
	
	do{
		quantidade ++;
		printf("Digite um número: ");
		scanf("%d",&numero);
		
		if(numero<menorNumero){
			menorNumero = numero;
		}
		if(numero>maiorNumero){
			maiorNumero = numero;
		}
	}while(quantidade<=5);
	
	printf("Menor número: %d\n",menorNumero);
	printf("Maior número: %d\n",maiorNumero);
	
	return 0;
}
