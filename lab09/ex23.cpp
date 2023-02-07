#include <stdio.h>
#include <stdlib.h>

void checaMaior(int *vet, int *maior){
  	int *inic = vet;
  	
  	for (int i = 0; i < 6; i++){
    	if(i == 0 || *vet > *maior){
      		*maior = *vet;
    	}
    	vet++;
  	}
}

int main(){
    int vet[6], k, maior;

  	for (int i = 0; i < 6; i++){
    	printf("Digite o %do numero: ", i+1);
    	scanf("%d", &vet[i]);
  	}

  	checaMaior(&vet, &maior);
  	
  	printf("Digite a quantidade de elementos por linha: ");
  	scanf("%d", &k);
  
  	for (int i = 0; i < 6; i++){
    	printf(" %d ", vet[i]);
    	
    	if((i+1)%k == 0 && i != 0){
      	printf("\n");
    	}
  	}
  	
  	printf("\nO maior elemento foi: %d", maior);
  	
  	system("pause");
    return 0;
}
