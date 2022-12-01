#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[4][4],linha ,coluna, c = 0, v = 0, b;
    
    for(linha = 0; linha<= 3; linha++){
        for(coluna = 0;coluna <= 3; coluna++){
            printf("Digite um valor para linha %d coluna %d: \n",linha, coluna);
            scanf("%d",&matriz[linha][coluna]);
        }
    }
    
    b = matriz[0][0];
    printf("matriz: \n");
    
    for(linha = 0; linha<= 3; linha++){
        for(coluna = 0;coluna <= 3; coluna++){
            if(matriz[linha][coluna] < 10){
                printf("%d  ",matriz[linha][coluna]);
            }else{
                printf("%d ",matriz[linha][coluna]);
            }
            if(matriz[linha][coluna] > b){
                b = matriz[linha][coluna];
                c = linha;
                v = coluna;
            }
        }
        printf("\n");
    }
    printf("Localizacao e valor do maior numero digitado: [%d][%d] = %d\n",c,v,b);
    system("pause");
    return 0;
}
