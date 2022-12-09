#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char S[100];
    int contador, x;
    
    printf("insira uma frase: \n");
    fgets(S,100,stdin);
    
    x = strlen(S);
    
    for(contador = 0; contador <= x; contador++){
        if(S[contador] != ' ' && S[contador] != '\0' && S[contador] != '\n'){
            printf("%c",S[contador] - 29);
        }else{
            printf("%c",S[contador]);
        }
    }
    
    printf("\n");
    
    system("pause");
    return 0;
}
