#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    float X;

    printf("digite um numero:  ");
    scanf("%f", &X);

    if (X > 0){
        printf ("X eh maior que 0 e sua raiz eh: %.2f \n...", sqrt(X));
    }
    else{
        printf("X eh menor que 0, numero invalido...\n");
    }
printf el
    system ("pause");
    return 0;
}