#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[5];
  	int *ptr = vet;

  	for (int i = 0; i < 5; i++){
    	printf("Digite o valor da posicao %d: ", i);
    	scanf("%d", ptr);
   		ptr++;
  	}

  	ptr = vet;

  	for (int i = 0; i < 5; i++){
	    printf("Posicao %d: %d\n", i, *ptr*2);
	    ptr++;
  	}
    
	system("pause");
    return 0;
}
