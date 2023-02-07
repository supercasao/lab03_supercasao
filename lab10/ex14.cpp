#include <stdio.h>
#include <stdlib.h>

int main(){
  	int **matriz;
  	int linhas, colunas;

  	printf("Digite a quantidade de linhas: ");
  	scanf("%d", &linhas);
  	
  	printf("Digite a quantidade de colunas: ");
  	scanf("%d", &colunas);

  	matriz = (int**)malloc(linhas * sizeof(int *));
  	
  	for (int i = 0; i < linhas; i++){
    	matriz[i] = (int *)malloc(colunas * sizeof(int ));
  	}

  	for (int i = 0; i < linhas; i++){
    	for (int j = 0; j < colunas; j++){
      		printf("Valor da posicao[%d][%d]: ", i, j);
      		scanf("%d", &matriz[i][j]);
    	}
  	}

  	for (int i = 0; i < linhas; i++){
    	for (int j = 0; j < colunas; j++){
      		printf(" %d ", matriz[i][j]);
    	}
  	}
  	
  	system("pause");
  	return 0;
}
