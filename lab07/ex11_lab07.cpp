#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char S[100];
    int contador, x, y, z;
    
    printf("Digite uma string: \n");
    fgets(S,100,stdin);
    fflush(stdin);
    
    do{
    	printf("Digite dois inteiros positivos menor que 100: \n");
    	scanf("%d %d",&x,&y);
    }while(x < 0 || y < 0);
    if(x > y){
        z = x;
        x = y;
        y = z;
    }
    for(contador = x;contador <= y; contador++){
        printf("%c",S[contador]);
    }
    printf("\n");
    system("pause");
    return 0;
}
