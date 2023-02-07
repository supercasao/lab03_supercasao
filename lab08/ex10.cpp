#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  	struct livrosInfo {
    	char nome[30], autor[15];
    	int ano;
	};

  	struct livrosInfo livros[5];
  	char livroProc[30];
  	for (int i = 0; i < 5; i++){
	    printf("insira o nome do livro %d: ", i);
	    setbuf(stdin, NULL);
	    gets(livros[i].nome);
	    
	    printf("insira o autor do livro %d: ", i);
	    setbuf(stdin, NULL);
	    gets(livros[i].autor);
	    
	    printf("insira o ano do livro %d: ", i);
	    setbuf(stdin, NULL);
	    scanf("%d", &livros[i].ano);
  }
  

  	printf("Procurar por qual livro? Digite o titulo: ");
  	setbuf(stdin, NULL);
  	gets(livroProc);

  	for (int i = 0; i < 5; i++){
	    if(strcmp(livroProc, livros[i].nome) == 0){
	      return printf("Livro encontrado! \n Nome: %s\n Autor: %s\n Ano: %d\n", livros[i].nome, livros[i].autor, livros[i].ano);
	    }
  	}
  
  	printf("Livro nao encontrado.");
  
  	system("pause");
    return 0;
}
