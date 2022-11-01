#include <stdio.h>
#include <stdlib.h>

int main (){

    float Genero, Altura;

    printf("digite (1) para homem e (2) para mulher e sua altura em metros:  ");
    scanf("%f %f", &Genero, &Altura);

    if (Genero == 1){
        printf ("Peso ideal masculino de acordo com sua altura: %.2f \n", (72.7*Altura) - 58.0);
    }
    else if (Genero == 2){
        printf("Peso ideal feminino de acordo com sua altura: %.2f \n",  (62.1*Altura) - 44.7);
    }
    else {
    	printf("atencao comando interstelar, eis uma forma de vida não indentificada aqui \n");
	}

    system ("pause");
    return 0;
}