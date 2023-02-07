#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  	double *vetor;
  	int x;

  	do{
    	printf("Quantos valores armazenar (min 10)? ");
    	scanf("%d", &x);
    
    	if(x < 10){
      		printf("Valor invalido.");
      	}
  	}while(x < 10);

  	vetor = (double *)malloc(x * sizeof(double));

  	srand(time(NULL));

  	for (int i = 0; i < x; i++){
    	vetor[i] = (rand() % 100);
    	printf(" %.0f ", vetor[i]);
  	}
  	
  	system("pause");
  	return 0;
}
