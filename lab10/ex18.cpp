#include <stdio.h>
#include <stdlib.h>

struct mercadoria{
  	char nome[30];
  	int id;
  	float preco;
};

int main(){
  	int *vetor, **matriz;
  	char **str;
  	
  	struct mercadoria *merc;

  	vetor = (int *)malloc(256*sizeof(int));
  	matriz = (int **)malloc(10 * sizeof(int *));
  	
  	for (int i = 0; i < 10; i++){
   		matriz[i] = (int *)malloc(10 * sizeof(int));
  	}

  	str = (char **)malloc(100*sizeof(char *));
  	
  	for (int i = 0; i < 80; i++){
    	str[i] = (char *)malloc(80*sizeof(char));
  	}
  
  	merc = (struct mercadoria *)malloc(50*sizeof(struct mercadoria));
  	
  	system("pause");
  	return 0;
}
