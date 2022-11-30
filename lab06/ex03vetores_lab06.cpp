#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetor[6], contador;
	
	for(contador = 0; contador <= 5; contador++){
        printf("Digite um valor: \n",contador);
        scanf("%d", &vetor[contador]);
    }
    
    printf("os valores em ordem inversa sao: \n");
    for(contador = 5; contador >= 0; contador--){
        printf("%d \n",vetor[contador]);
    }
    
    system("pause");
    return 0;
}
