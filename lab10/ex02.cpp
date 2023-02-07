#include <stdio.h>
#include <stdlib.h>

int main(){
  	int *vetor, x;

  	printf("Quantos numeros digitar? ");
  	scanf("%d", &x);
  	
  	vetor = (int *) malloc(x*sizeof(int));
  	
  	for (int i = 0; i < x; i++){
    	printf("Digite o %do valor: ", i+1);
    	scanf("%d", &vetor[i]);
  	}

  	printf("Os valores digitados foram: ");
  	
  	for (int i = 0; i < x; i++){
    	printf(" %d ", vetor[i]);
  	}
  	
  	system("pause");
  	return 0;
}
