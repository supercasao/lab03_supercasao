#include <stdio.h>
#include <stdlib.h>

int main (){

    float X, Y;

    printf("digite as duas notas do aluno: ");
    scanf("%f %f", &X, &Y);

    if (0.0 <= X && X <= 10.0 && 0.0 <= Y && Y <= 10.0){
        printf ("a media das notas eh: %.2f \n", (X+Y)/2);
    }
    else{
        printf("as notas sao invalidas...\n");
    }

    system ("pause");
    return 0;
}