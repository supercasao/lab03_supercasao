#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetor[50], contador;
	
	for(contador = 0; contador <= 49; contador++){
        vetor[contador] = (contador + 5 * contador) % (contador + 1);
    }
    
    for(contador = 0; contador <= 49; contador++){
	printf("O valor da posicao %d eh %d \n", contador, vetor[contador]);	
	}
	
	system("pause");
    return 0;
}
