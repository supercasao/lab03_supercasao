#include <stdio.h>
#include <stdlib.h>

int main(){
    int vet[5];
  	int *ptr = vet;
  
  	for (int i = 0; i < 5; i++){
	    printf("Digite o %do valor: ", i+1);
	    scanf("%d", &vet[i]);
  	}

  	printf("Numeros pares:");
  	
  	for (int i = 0; i < 5; i++){
    	if(*ptr % 2 == 0){
      		printf(" %d ", *ptr);
    		ptr++;
    	}
 	}
    
	system("pause");
    return 0;
}
