#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int A[5][5],i ,j, k, l, c = 0;
    srand(time(NULL));
    for(i = 0; i<= 4; i++){
        for(j = 0;j <= 4; j++){
            A[i][j] = rand() % 100;
            for(k = 0; k <= i; k++){
                for(l = 0; l < j; l++){
                    if(A[i][j] == A[k][l]){
                        A[i][j] = rand() % 100;
                        k = 0;
                        l = 0;
                    }
                }
            }
        }
    }
    printf("Cartela de bingo gerada: \n");
    for(i = 0; i<= 4; i++){
        for(j = 0;j <= 4; j++){
            if(A[i][j] < 10){
                printf("%d  ",A[i][j]);
            }else{
                printf("%d ",A[i][j]);
            }
        }
        printf("\n");
    }
    system("pause");
    return 0;
}
