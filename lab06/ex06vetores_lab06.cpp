#include <stdio.h>
#include <stdlib.h>

int main(){
	int vetor[10], contador, contador2, k;
	
	for(contador = 0; contador <= 9; contador++){
        printf("Insira o valor desejado para a posicao %d: \n", contador);
        scanf("%d", &vetor[contador]);
    }
    
    for(contador = 0; contador <= 9; contador++){
        k = 0;
        if(vetor[contador] == 0){
            printf("%d nao eh um numero primo\n",vetor[contador]);
        }
        if(vetor[contador] == 1){
            printf("%d eh um numero primo\n",vetor[contador]);
        }
        for(contador2 = 2; contador2 <= vetor[contador] / 2; contador2++){
                if(vetor[contador] % contador2 == 0) {
                        k++;
                        break;
                }
        }
        if(k == 0){
        printf("%d eh um numero primo\n",vetor[contador]);
        }else{
        printf("%d nao eh um numero primo\n",vetor[contador]);
        }
    }
	system("pause");
    return 0;
}
