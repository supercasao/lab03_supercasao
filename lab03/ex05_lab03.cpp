#include <stdio.h>
#include <stdlib.h>

int main (){

    int X;

    printf("digite um numero:  ");
    scanf("%d", &X);

    if (X % 2 == 0){
        printf ("%d eh par... \n",X);
    }
    else{
        printf("%d eh impar...\n",X);
    }

    system ("pause");
    return 0;
}