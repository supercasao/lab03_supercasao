#include <stdio.h>
#include <stdlib.h>

int main(){
	int matriz[4][4], contador, contador2, contadormaior;
	
	for(contador = 0; contador<= 3; contador++){
        for(contador2 = 0;contador2 <= 3; contador2++){
            printf("Digite um valor para linha %d, coluna %d: \n",contador,contador2);
            scanf("%d",&matriz[contador][contador2]);
            if(matriz[contador][contador2] > 10){
                contadormaior++;
            }
        }
    }
    printf("A matriz possui %d valores maiores que 10.\n",contadormaior);
    
    system("pause");
    return 0;
}
