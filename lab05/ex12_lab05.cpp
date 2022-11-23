#include <stdio.h>
#include <stdlib.h>

int Soma(int a){
    int b, c = 0;
    if (a < 0){
        printf("Numero invalido\n");
        return 0;  
    }else{
        for(b = 0; a > 0; c = a % 10){
            c = a % 10;
            b = b + c;
            a = a / 10;
        }
    printf("a soma eh: %d \n", b);
	}
}

int main() {
    int x, y;
    
    printf("Digite um numero inteiro positivo: \n");
    scanf("%d", &x);
    
    Soma(x);
    
    system("pause");
    return 0;
}
