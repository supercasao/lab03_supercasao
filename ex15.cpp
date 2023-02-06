#include <stdio.h>
#include <stlib.h>
#include <string.h>

int main(){
	struct ingredientes{
	    char nome[25];
	    int quantidade;
	};
	
	struct receitas{
	    char nome[25];
	    int qIngredientes;
	    struct ingredientes ingredientes[15];
	};
	
	struct receitas r[2];
	
	char receitaP[25];
	int receitaLen, receitaRes;
	
	for (int i = 0; i < 2; i++){
	    printf("\n===== %do RECEITA =====\n", i + 1);
	    
	    printf("insira o nome da receita: ");
	    setbuf(stdin, NULL);
	    gets(r[i].nome);
	    
	    printf("insira a quantidade de ingredientes: ");
	    scanf("%d", &r[i].qIngredientes);
	    
	    for (int j = 0; j < r[i].qIngredientes; j++){
	      printf("insira o nome do %do ingrediente: ", j + 1);
	      setbuf(stdin, NULL);
	      gets(r[i].ingredientes[j].nome);
	      
	      printf("insira a quantidade do ingrediente: ");
	      scanf("%d", &r[i].ingredientes[j].quantidade);
	    }
	  }
	
	  do{
	    printf("Qual receita procurar? ");
	    setbuf(stdin, NULL);
	    gets(receitaP);
	    
	    receitaLen = strlen(receitaP);
	    
	    receitaRes = 0;
	    
	    for (int i = 0; i < 2; i++){
	      if(strcmp(receitaP,r[i].nome) == 0){
	        printf("\nReceita encontrada!\nNome: %s\nIngredientes: \n");
	        for (int j = 0; j < r[i].qIngredientes; j++){
	          printf("%d - %s\n", r[i].ingredientes[j].quantidade, r[i].ingredientes[j].nome);
	        }
	        
	        receitaRes++;
	        
	        break;
	      }
	    }
	    if(receitaRes < 1){
	      printf("Receita nao encontrada.\n");
	    }   
  	} while (receitaLen != 0);
  	
  	system("pause");
    return 0;
}
