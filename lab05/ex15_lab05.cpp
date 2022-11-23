#include <stdio.h>
#include <stdlib.h>

void triangulo(float lado, float lado2, float lado3){
    if(lado == lado2 && lado == lado3){
        printf("triangulo equilatero!\n");
    }else if(lado != lado2 && lado2 != lado3 && lado != lado3){
        printf("triangulo escaleno!\n");
    }else{
        printf("triangulo isoceles!\n");
    }
}
int verificacao(float lado, float lado2, float lado3){
    if(lado < lado2 + lado3 && lado2 < lado + lado3 && lado3 < lado + lado2){
        printf("Os comprimentos dados formam um triangulo.\n");
        return 1;
    }else{
        printf("Os comprimentos dados nao formam um triangulo.\n");
        return 0;
    }
}

int main()
{
    float lado, lado2, lado3;
    int verifica;
    do{
    	printf("Digite os lados de um triangulo: \n");
    	scanf("%f %f %f",&lado,&lado2,&lado3);
    	if(lado < 0 || lado2 < 0 || lado3 < 0){
        printf("Digite valores maiores do que zero!\n");
    }
    }while(lado < 0 || lado2 < 0 || lado3 < 0);
    verifica = verificacao(lado,lado2,lado3);
    if(verifica != 0){
        triangulo(lado,lado2,lado3);
    }
    system("pause");
    return 0;
}


