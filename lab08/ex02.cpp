#include <stdio.h>
#include <stdlib.h>

int main(){
	
	struct individuo{
		char nome[50], endereco[100];
		int idade;
	};
	
	struct individuo userx;
	
	printf("insira o nome: ");
	setbuf(stdin, NULL);
	gets(userx.nome);
	setbuf(stdin, NULL);
	  
	printf("insira a idade: ");
	scanf("%d", &userx.idade);
	  
	printf("insira o endereco: ");
	setbuf(stdin, NULL);
	gets(userx.endereco);
	
	printf("O nome: %s, idade: %d anos e endereço: %s.", userx.nome, userx.idade, userx.endereco);
	  
	system("pause");
    return 0;
}


