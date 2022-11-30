#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetor[6], contador;
	
	for(contador = 0; contador <= 5; contador++){
        printf("Insira o valor desejado para a posicao %d: \n", contador);
        scanf("%d", &vetor[contador]);
    }
    
    for(contador = 0; contador <= 5; contador++){
		if (vetor[contador] == 0){
			printf("valor da posicao %d, eh par: %d \n", contador, vetor[contador]);
		}
		else if(vetor[contador] == 1){
			printf("valor da posicao %d, eh impar: %d \n", contador, vetor[contador]);
		}
		else if(vetor[contador] % 2 == 0){
			printf("valor da posicao %d, eh par: %d \n", contador, vetor[contador]);
		} 
		else{
			printf("valor da posicao %d, eh impar: %d \n", contador, vetor[contador]);
		}
	}
	
	system("pause");
    return 0;
}
