#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	
	int A, B, C, Delta;
	float X1, X2;
 
    printf("f(x) = ax^2 + bx + c \n");
    printf("insira os valores de a, b e c respectivamente:");
	scanf("%d %d %d", &A, &B, &C);
 
    Delta = B * B - 4 * A * C;
    X1 = (-B - sqrt(Delta)) / (2 * A);
    X2 = (-B + sqrt(Delta)) / (2 * A);
 
    if(Delta < 0){
        printf("Delta menor que 0, nao possui raizes reais\n", Delta);
    }
    else{
        if(Delta == 0){
            printf("Delta igual a 0 possui uma raiz real: %.2f \n", X1);
        }
        else{
            printf("Delta maior que 0, possui 2 raizes reais: %.2f e %.2f \n", Delta, X1, X2);
        }
    }
	
	system ("pause");
    return 0;
}