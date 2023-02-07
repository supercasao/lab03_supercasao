#include <stdio.h>
#include <stdlib.h>

int main(){
  	int *vetor, x, op, val, y;

  	printf("Digite o tamanho da memoria: ");
  	scanf("%d", &x);
  	
  	vetor = (int *)calloc(x, sizeof(int));

  	printf("Opcões:\n1-Inserir valor\n2-Consultar posicao\nR= ");
  	scanf("%d", &op);

  	switch (op){
  	case 1:
    	printf("Digite o valor a ser inserido: ");
    	scanf("%d", &val);
    	
    	printf("Digite a posicao que ira receber o valor (0 - %d): ", x-1);
    	scanf("%d", &y);
    	
    	if (y <= x){
      		vetor[y] = val;
      		printf("A memoria ficou da seguinte forma: \n");
      		
      		for (int i = 0; i < x; i++){
        		printf("Posicao %d: %d\n", i, vetor[i]);
      		}
    	}else{
      		printf("Valor invalido. Fim do programa!");
    	}
    break;
    
  	case 2:
    	printf("Digite a posicao (0 - %d): ", x-1);
    	scanf("%d", &y);
    	
    	if (y <= x){
      		printf("Posicao %d: %d", y, vetor[y]);
    	}else{
      		printf("Valor invalido. Fim do programa!");
    	}
    break;
    
  	default:
    	printf("Valor invalido. Fim do programa!");
    break;
  	}
  	
  	system("pause");
  	return 0;
}
