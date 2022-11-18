#include <stdio.h>
#include <stdlib.h>

int main (){

    int X, Y;

    printf("digite dois numero X e Y:  ");
    scanf("%d %d", &X, &Y);

    if (X > Y){
        printf ("X eh maior que Y, a diferenca entre eles eh: %d ... \n",X - Y);
    }
    else if(X == X){
    	printf("numeros iguais \n");
	}
    else{
        printf("Y eh maior que X, a diferenca entre eles eh: %d ...\n",Y - X);
    }

    system ("pause");
    return 0;
}