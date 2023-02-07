#include <stdio.h>
#include <stdlib.h>

int negativos(int *vet, int n){
  	int cont = 0;
  	for (int i = 0; i < n; i++){
    	if (*vet < 0){
      		cont++;
		}
    vet++;
  	}

  return cont;
}

int main(){
    int vet[5], size;
    
  	size = sizeof(vet)/sizeof(int);

  	for (int i = 0; i < size; i++){
    	printf("Digite o %do valor: ", i + 1);
    	scanf("%d", &vet[i]);
  	}

  	printf("Existem %d numeros negativos no array.", negativos(&vet, size));
  	
  	system("pause");
    return 0;
}
