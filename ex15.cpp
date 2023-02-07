#include <stdio.h>
#include <stdlib.h>

void imprimeArray(int *vet){
  	for (int i = 0; i < 5; i++){
    	printf("Posicao %d: %d\n", i, *vet);
    	vet++;
  	}
}

int main(){
    int vet[5] = {1, 2, 3, 4, 5};

  	imprimeArray(&vet);
    
	system("pause");
    return 0;
}
