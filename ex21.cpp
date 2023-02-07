#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[5];
  	int *p = vet;

  	for (int i = 0; i < 5; i++){
    	printf("Digite o %do valor: ", i+1);
    	scanf("%d", p);
    	
    	*p += 1;
    	p++;
  	}

  	printf("Novo array:");
  	
  	for (int i = 0; i < 5; i++){
    	printf(" %d ", vet[i]);
  	}
  	
  	system("pause");
    return 0;
}
