#include <stdio.h>
#include <stlib.h>
#include <string.h>

int main(){
	struct filme{
	    char nome[20];
	    int ano;
	    float duracao;
	};
	
	struct diretor{
	    char nome[20];
	    int qFilmes;
	    struct filme *filmes;
	};
	
	struct diretor dir[5];
	
	char nome[20];
	
	for (int i = 0; i < 5; i++){
	    printf("insira o nome %do do diretor: ", i + 1);
	    setbuf(stdin, NULL);
	    gets(dir[i].nome);
	    
	    printf("Quantos filmes tem o diretor? ");
	    scanf("%d", &dir[i].qFilmes);
	    
	    dir[i].filmes = (struct filme *)malloc(dir[i].qFilmes * sizeof(struct filme));
	
	    for (int j = 0; j < dir[i].qFilmes; j++){
	    	printf("insira o nome do %do filme: ", j + 1);
	      	setbuf(stdin, NULL);
	      	gets(dir[i].filmes[j].nome);
	      
	      	printf("insira o ano do %do filme: ", j + 1);
	      	scanf("%d", &dir[i].filmes[j].ano);
	      
	      	printf("insira a duracao do %do filme: ", j + 1);
	      	scanf("%d", &dir[i].filmes[j].duracao);
	    }
	}
	
	do{
	    printf("insira o nome do diretor que deseja procurar: ");
	    setbuf(stdin, NULL);
	    gets(nome);
	    
	    for (int i = 0; i < 5; i++){
		    if (strcmp(dir[i].nome, nome) == 0){
		        printf("O diretor %s fez os seguintes filmes: \n", nome);
		        
		        for (int j = 0; j < dir[i].qFilmes; j++){
		        	printf("%s - %d\n", dir[i].filmes[j].nome, dir[i].filmes[j].ano);
		        }
	    	}
	    }
	}while (nome[0] != '\0');
	
	system("pause");
    return 0;
}

