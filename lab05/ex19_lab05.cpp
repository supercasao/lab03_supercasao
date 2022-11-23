#include <stdio.h>
#include <stdlib.h>

int fatorial(int num){
    int b = 1, i;
    for(i = 1; i <= num; i++){
        b = b * i;
    }
    return b;
}

int main(){
    int num, resultado;
    
	do{
    	printf("Digite um numeros inteiro positivo: \n");
    	scanf("%d",&num);
    }while(num < 0);
    	resultado = fatorial(num);
    	printf("Fatorial de %d: %d\n",num,resultado);
    	
    system("pause");
    return 0;
}
