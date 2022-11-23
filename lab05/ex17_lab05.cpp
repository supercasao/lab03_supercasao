#include <stdio.h>
#include <stdlib.h>

int soma(int num, int num2){
    int i, j, k, l = 0;
    if(num > num2){
        j = num;
        k = num2;
    }else{
        j = num2;
        k = num;
    }
    for(i = k + 1; i < j; i++){
        l = l + i;
    }
    return l;
}

int main(){
    int num ,num2, resultado;
    
    do{
   		printf("Digite dois numeros inteiros positivos: \n");
    	scanf("%d %d",&num,&num2);
    }while(num < 0 || num2 < 0);
    	resultado = soma(num,num2);
    	printf("Resultado: %d\n",resultado);
    
    system("pause");
    return 0;
}
