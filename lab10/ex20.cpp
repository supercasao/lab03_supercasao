#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct city{
  	char nome[50];
  	int x, y;
};

int main(){
  	struct city *vetor;
  	int n, **distancia, xx, yy;

  	printf("Digite a quantidade de cidades: ");
  	scanf("%d", &n);

  	vetor = (struct city*)malloc(n * sizeof(struct city));
	
  	for (int i = 0; i < n; i++){
	    printf("Nome da cidade: ");
	    setbuf(stdin, NULL);
	    gets(vetor[i].nome);
	    setbuf(stdin, NULL);
	    
	    printf("X: ");
	    scanf("%d", &vetor[i].x);
	    
		printf("Y: ");
	    scanf("%d", &vetor[i].y);
	}
  
  	distancia = (int **)malloc(n * sizeof(int *));
  
  	for (int i = 0; i < n; i++){
    	distancia[i] = (int *)malloc(n * sizeof(int));
    	
    	for (int j = 0; j < n; j++){
      		distancia[i][j] = sqrt(((vetor[i].x - vetor[j].x)*(vetor[i].x - vetor[j].x)) + ((vetor[i].y - vetor[j].y)*(vetor[i].y - vetor[j].y)));
    	} 
  	}
  
	printf("Calcular distancia entre cidades: ");
	scanf("%d %d", &xx, &yy);
	
	printf("A distancia entre %s e %s eh: %d", vetor[xx].nome, vetor[yy].nome, distancia[xx][yy]);
  	
  	system("pause");
  	return 0;
}
