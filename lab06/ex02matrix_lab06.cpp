#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[5][5],contador ,contador2;
    
    for(contador = 0; contador<= 4; contador++){
        for(contador2 = 0;contador2 <= 4; contador2++){
            if(contador == contador2){
                matriz[contador][contador2] = 1;
            }else{
                matriz[contador][contador2] = 0;
            }
        }
    }
    printf("Matriz: \n");
    for(contador = 0; contador<= 4; contador++){
        for(contador2 = 0;contador2 <= 4; contador2++){
            printf("%d ",matriz[contador][contador2] );
        }
        printf("\n");
    }
    
    system("pause");
    return 0;
}
