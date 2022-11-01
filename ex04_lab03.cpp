#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    float X;

    printf("digite um numero:  ");
    scanf("%f", &X);

    if (X > 0){
        printf ("X eh maior que 0, sua raiz eh: %.2f  e seu valor ao quadrado eh: %.2f... \n", sqrt(X), pow(X,2));
    }
    else{
        printf("X eh menor que 0, eh invalido ...\n");
    }

    system ("pause");
    return 0;
}