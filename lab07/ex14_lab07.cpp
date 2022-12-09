#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char str1[60],str2[60], str3[60];
    int contador, N;
    
    printf("Digite uma string: \n");
    fgets(str1,60,stdin);
    fflush(stdin);
    
    printf("Digite outra string: \n");
    fgets(str2,60,stdin);
    fflush(stdin);
    
    printf("Digite um inteiro positivo N: \n");
    scanf("%d",&N);
    
    for(contador = 0; contador < N; contador++){
        str3[contador] = str2[contador];
    }
    strcat(str1,str3);
    
    for(contador = 0; contador != '\0'; contador++){
        printf("%c",str1[contador]);
    }
    
    printf("\n");
    
    system("pause");
    return 0;
}
