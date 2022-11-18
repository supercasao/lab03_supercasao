#include <stdio.h>
#include <stdlib.h>

int main()
{
    int contador, contador2, x, y, t = 0, u = 0;
    do{
    printf("insira dois numeros inteiros: \n");
    scanf("%d %d",&x,&y);

    }while(x < 0 || y < 0);

    for(contador = x; contador <= y; contador++){
        t = 0;
        for(contador2 = 1; contador2 <= contador; contador2++){
            if(contador % contador2 == 0){
                t = t + 1;
            }
        }
        if(t == 2){
            u = u + 1;
        }
    }
    printf("o total de umeros primos de %d ate %d eh de: %d\n",x, y, u);
    
    
    system("pause");
    return 0;
}
