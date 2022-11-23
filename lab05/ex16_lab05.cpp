#include <stdio.h>
#include <stdlib.h>

void Linha(int Nlinhas){
    int i;
    for(i = 1; i <= Nlinhas; i++){
        printf("=");
    }
    printf("\n");
}

int main(){
    int linhas;
    
    printf("Digite o numero de '=' desejado: \n");
    scanf("%d",&linhas);
    
    Linha(linhas);
    
    system("pause");
    return 0;
}


