#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador, contador2, contador3 = 0;
    int vetor[10];
    
    for(contador = 0; contador <= 9; contador++){
        do{
            printf("Digite um valor diferente do anterior digitado: \n");
            scanf("%d",&vetor[contador]);
            for(contador2 = 0; contador2 < contador; contador2++){
                if(vetor[contador] == vetor[contador2]){
                    contador3 = 1;
                    printf("Valor digitado eh igual a algum anterior\n");
                }else{
                    contador3 = 0;
                }
            }
        }while(contador3 == 1);
    }

    system("pause");
    return 0;
}
