#include <stdio.h>
#include <stdlib.h>

void extraiMinMax(int *vet, int size, int *min, int *max) {
  	min = *vet;
  	*max = *vet;

  	for (int i = 1; i < size; i++) {
    	if (*(vet + i) < *min){
      		*min = *(vet + i);
    	}else if (*(vet + i) > *max) {
      		*max = *(vet + i);
    	}
  	}
}

int main(){
    int vet[10], min, max;

  	for (int i = 0; i < 10; i++){
    	printf("Digite o %do numero: ", i+1);
    	scanf("%d", &vet[i]);
  	}

  	extraiMinMax(&vet, 10, &min, &max);

  	printf("Min: %d\n", min);
  	
  	printf("Max: %d\n", max);
  	
  	system("pause");
    return 0;
}
