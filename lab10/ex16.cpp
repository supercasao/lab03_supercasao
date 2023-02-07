#include <stdio.h>
#include <stdlib.h>

int main(){
  	int x, y, **matriz, **matriztrans;
  	
  	printf("Digite N: ");
  	scanf("%d", &x);
  	
 	printf("Digite M: ");
  	scanf("%d", &y);

  	matriz = (int **)malloc(x * sizeof(int *));
  	
  	for (int i = 0; i < x; i++){
    	matriz[i] = (int *)malloc(y * sizeof(int));
  	}

  	for (int i = 0; i < x; i++){
    	for (int j = 0; j < y; j++){
      		printf("Posicao[%d][%d]: ", i, j);
      		scanf("%d", &matriz[i][j]);
    	}
  	}
  
  	matriztrans = (int **)malloc(y * sizeof(int *));
  	
  	for (int i = 0; i < y; i++){
    	matriztrans[i] = (int *)malloc(x * sizeof(int));

	    for (int j = 0; j < x; j++){
	      	matriztrans[i][j] = matriz[j][i];
	    }
  	}
  
  	printf("Matriz: \n");
  	
  	for (int i = 0; i < x; i++){
    	for (int j = 0; j < y; j++){
      		printf(" %d ", matriz[i][j]);
    	}
  	}

  	printf("Matriz Transposta: \n");
  	
  	for (int i = 0; i < y; i++){
    	for (int j = 0; j < x; j++){
      		printf(" %d ", matriztrans[i][j]);
    	}
  	}
  	
  	system("pause");
  	return 0;
}
