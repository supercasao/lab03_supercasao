#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char frase[60];
    int contador, x = 0, k;
    
    printf("Escreva uma stirng: ");
    fgets(frase, 60, stdin);
    
    for(contador = 0; frase[contador] != '\0'; contador++){
        x = contador;
    }
    k = x - 1;
    
    for (contador = 0; contador < x; contador++){
        if (frase[k] == ' '){
            k--;
        }
        if (frase[contador] == ' '){
            i++;
        }
        if(frase[contador] != frase[k]){
            printf("Nao eh um palindromo\n");
            return 0;
        }
        k--;
    }
    
    printf("Eh um palindromo\n");
    
    system("pause");
    return 0;
}
