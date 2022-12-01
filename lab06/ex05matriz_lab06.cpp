#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[10][10], linha, coluna;
    
    for(linha = 0; linha<= 9; linha++){
        for(coluna = 0;coluna <= 9; coluna++){
            if(linha < coluna){
                matriz[linha][coluna] = (2 * linha) + (7 * coluna) - 2; 
            }else if(linha > coluna){
                matriz[linha][coluna] = (4 *(linha * linha * linha)) - (5 * (coluna * coluna)) + 1; 
            }else{
                matriz[linha][coluna] = (3 *(linha * linha)) - 1;
            }
        }
    }
    printf("Matriz: \n");
    for(linha = 0; linha<= 9; linha++){
        for(coluna = 0;coluna <= 9; coluna++){
            if(matriz[linha][coluna] < 0){
                printf("%d   ",matriz[linha][coluna]);
            }else if(matriz[linha][coluna] < 10 && matriz[linha][coluna] > 0){
                printf("%d    ",matriz[linha][coluna]);
            }else if(matriz[linha][coluna] > 10 && matriz[linha][coluna] < 100){
                printf("%d   ",matriz[linha][coluna]);
            }else if(matriz[linha][coluna] > 100 && matriz[linha][coluna] < 1000){
                printf("%d  ",matriz[linha][coluna]);
            }else{
                printf("%d ",matriz[linha][coluna]);
            }
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
