#include <stdio.h>
#include <stdlib.h>

int main(){
  	int *vetor;
  	
  	vetor = (int *)calloc(1500, sizeof(int));

  	for (int i = 0; i < 1500; i++){
    	if(vetor[i] != 0)
      		return printf("Valor diferente de 0!");
  	}

  	for (int i = 0; i < 1500; i++){
    	vetor[i] = i;
 	 }

  	printf("Primeiros 10 numeros: ");
  	
  	for (int i = 0; i < 10; i++){
    	printf(" %d ", vetor[i]);
  	}
  	
  	printf("\n Ultimos 10 numeros: ");
  	
  	for (int i = 0; i < 10; i++){
    	printf(" %d ", vetor[1499-i]);
  	}
  	
  	system("pause");
  	return 0;
}
