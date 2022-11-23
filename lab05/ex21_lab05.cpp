#include <stdio.h>
#include <stdlib.h>

void arvore(int galhos){
    int i,j;
    for(i = 1; i <= galhos; i++){
        for(j = 1; j <= i; j++){
            printf("!");
        }
        printf("\n");
    }
}

int main(){
    int galhos;
    
    do{
    	printf("Digiteo numero de galhos: \n");
    	scanf("%d",&galhos);
    }while(galhos < 0);
    	arvore(galhos);
    	
    system("pause");
    return 0;
}

