#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int A[4][4],i ,j;
    srand(time(NULL));
    for(i = 0; i<= 3; i++){
        for(j = 0;j <= 3; j++){
            do{
            A[i][j] = rand() % 21;
            }while(A[i][j] == 0);
        }
    }
    printf("Matriz: \n");
    for(i = 0; i<= 3; i++){
        for(j = 0;j <= 3; j++){
            if(A[i][j] < 10){
                printf("%d  ",A[i][j]);
            }else{
                printf("%d ",A[i][j]);
            }
        }
        printf("\n");
    }
    printf("Matriz triangular inferior: \n");
    for(i = 0; i<= 3; i++){
        for(j = 0;j <= 3; j++){
            if(i < j){
                A[i][j] = 0; 
            }
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
