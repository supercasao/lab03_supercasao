#include <stdio.h>
#include <stdlib.h>

int main(){
    int soma, contador;
    int A[6];
    A[0]= 1;
    A[1]= 0;
    A[2]= 5;
    A[3]= -2;
    A[4]= -5;
    A[5]= 7;
    
    soma = A[0] + A[1] + A[5];
    
    A[4] = 100;
    
    printf("%d \n",soma);
    
    for(i = 0; contador <= 5; contador++){
        printf("%d\n", A[contador]);
    }
    
    system("pause");
    return 0;
}
