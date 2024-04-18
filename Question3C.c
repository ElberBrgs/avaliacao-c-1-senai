#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL,"");
	
	char nome[200],email[200],telefone[50];
	int idade,opcao;
	
	printf("Digite seu nome: \n");
	scanf("%s",&nome);
	printf("Digite sua idade:  \n");
	scanf("%d",&idade);
	printf("Digite seu e-mail: \n");
	scanf("%s",&email);
	printf("Digite seu telefone: \n");
	scanf("%s",&telefone);
	
	system("clear || cls");
	
	do{
		printf("1- Mostrar nome e idade.\n");
		printf("2- Mostrar nome e e-mail.\n");
		printf("3- Mostrar nome e telefone.\n");
		printf("4- Mostrar todas as informações.\n");
		printf("0- Sair do programa.\n");
	
		printf("Digite a opção:\n");
		scanf("%d",&opcao);
		
		if(opcao>5 || opcao <0){
			printf("Opção incorreta,tente novamente:\n");
		}
		
}while(opcao>5 || opcao <0);

	system("clear || cls");
	
	switch(opcao){
		case 1:
			printf("Nome: %s\n",nome);
			printf("Idade: %d\n",idade);
			break;	
		case 2:
			printf("Nome: %s\n",nome);
			printf("Email: %s\n",email);
			break;
		case 3: 
			printf("Nome: %s\n",nome);
			printf("Telefone: %s\n",telefone);
			break;
		case 4:
			printf("Nome: %s\n",nome);			
			printf("Idade: %d\n",idade);
			printf("Email: %s\n",email);
			printf("Telefone: %s\n",telefone);
			break;
		case 0:
			printf("Sair do programa.");
			break;			
			system("clear || cls");	
	}
	return 0;
}
