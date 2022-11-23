#include <stdio.h>
#include <stdlib.h>

int exponencial(int num, int num2){
    int resultado = 0, i;
    if(num2 == 0){
        resultado = 1;
        return resultado;
    }else{
        for(i = 1; i <= num2; i++){
            if(i == 1){
                resultado = num;
            }else{
                resultado = resultado * num;
            }
        }
    }
    return resultado;
}

int main(){
    int num ,num2, resultado;
    
    do{
    	printf("Digite dois numeros inteiros positivos: \n");
    	scanf("%d %d",&num,&num2);
    }while(num < 0 || num2 < 0);
    	resultado = exponencial(num,num2);
    	printf("x elevado a y eh: %d\n",resultado);
    	
    system("pause");
    return 0;
}
