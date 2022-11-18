#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	
	int Numero;
	
	printf("Digite um numero:");
    scanf("%d",&Numero);

    if(Numero > 0){
        printf("o log desse numero eh: %.2f \n", log10(Numero));
	}
	else{
        printf("O numero eh invalido \n");
    }

    system ("pause");
    return 0;
}