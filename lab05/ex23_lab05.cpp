#include <stdio.h>
#include <stdlib.h>

void figura(int a){
    int i, j, k = 1, l;
    
    for(l = 0; l < a; l++){
        for(i = a - l; i > 0; i--){
            printf(" ");
        }
        for(j = 1; j <= k; j++){
            printf("*");
        }
        printf("\n");
        k = k + 2;
    }
}

int main(){
    int x;
    
    do{
    	printf("Digite o numero de linhas do triangulo: \n");
    	scanf("%d",&x);
    }while(x < 0);
    	figura(x);
    
    system("pause");
    return 0;
}

