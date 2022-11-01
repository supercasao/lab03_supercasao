#include <stdio.h>
#include <stdlib.h>

int main (){

    float X, Y;

    printf("digite os numeros X e Y: ");
    scanf("%f %f", &X, &Y);

    if (X > Y){
        printf ("X eh maior que Y...\n");
    }
    else if(X == Y){
        printf("X eh igual a Y...\n");
    }
    else{
        printf("X eh menor que Y...\n");
    }

    system ("pause");
    return 0;
}