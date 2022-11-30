#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetor[5], contador, maior = 0, menor;
	
	for(contador = 0; contador <= 4; contador++){
        printf("Digite um valor: \n",contador);
        scanf("%d", &vetor[contador]);
    }
    
    for(contador = 0; contador <= 4; contador++){
        if(vetor[contador] > maior){
        	maior = vetor[contador];
		}else{
			menor = vetor[contador];
		}
    }
	printf(" posicao do maior eh: %d \n posicao do menor eh: %d", maior, menor);	
	system("pause");
    return 0;
}
