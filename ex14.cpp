#include <stdio.h>
#include <stdlib.h>

void preencheArray(int *arr, int v){
  	for (int i = 0; i < 5; i++){
    	*arr = v;
    	arr++;
  	}
}

int main(){
    int arr[5], valor;

  	printf("Digite o valor que sera preenchido no array: ");
  	scanf("%d", &valor);

  	preencheArray(&arr, valor);
  	
  	printf("Preenchendo...\n");
  	
  	for (int i = 0; i < 5; i++){
    	printf("Indice %d: %d\n", i, arr[i]);
  	}
    
	system("pause");
    return 0;
}
