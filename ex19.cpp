#include <stdio.h>
#include <stdlib.h>

void checaArray(int *vet, int *maior, int *cont){
  	int *inic = vet;
  	
  	for (int i = 0; i < 5; i++){
    	if(i == 0 || *vet > *maior){
      		*maior = *vet;
    	}
    	
    	vet++;
  	}

  	for (int i = 0; i < 5; i++){
    	if(*inic == *maior){
      		*cont += 1;
    	}
    	
    	inic++;
  	}
  
}

int main(){
    int vet[5], maior, cont = 0;

  	for (int i = 0; i < 5; i++){
    	printf("Posicao %d: ", i);
    	scanf("%d", &vet[i]);
  	}
  
  	checaArray(&vet, &maior, &cont);

  	printf("O maior valor foi %d e repetiu %d vezes.", maior, cont);
  	
  	system("pause");
    return 0;
}
