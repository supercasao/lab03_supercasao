#include <stdio.h>
#include <stdlib.h>

void figura(int a){
    int i,j,k,l = a - 1;
    for(i = 1; i <= a; i++){
        for(j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
    k = a -  1;
    for(i = 1; i <= k; i++){
        for(j = l; j >= 1; j--){
            printf("*");
        }
        l = l - 1;
        printf("\n");
    }
}

int main(){
    int x;
    do{
    	printf("insira a quantidade de linhas desejadas: \n");
    	scanf("%d",&x);
    }while(x < 0);
    	figura(x);
    	
    system("pause");
    return 0;
}

