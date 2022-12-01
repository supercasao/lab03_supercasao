#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c[5][5],i ,j, x, k = 0, l = 0, m = 0;
    for(i = 0; i<= 4; i++){
        for(j = 0;j <= 4; j++){
            printf("Digite um valor para linha %d coluna %d: \n",i, j);
            scanf("%d",&c[i][j]);
        }
    }
    printf("Digite um valor qualquer: \n");
    scanf("%d",&x);
    for(i = 0; i<= 4; i++){
        for(j = 0;j <= 4; j++){
            if(c[i][j] == x){
                m = 1;
                k = i;
                l = j;
            }
        }
    }
    if(m == 1){
        printf("Valor de x encontrado na linha %d coluna %d",k,l);
    }
    if(m == 0){
        printf("Valor nao encontrado\n");
    }
    system("pause");
    return 0;
}
