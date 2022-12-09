#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char frase[5][20], f[20];
    int i, j, k, l;
    float x, y, z,consumo[5],resultado[5];
    for(i = 0; i <= 4; i++){
        printf("Digite um modelo de carro: \n");
        fgets(f,20,stdin);
        for(j = 0; f[j] != '\0'; j++){
            frase[i][j] = f[j];
        }
        fflush(stdin);
        printf("Digite respectivamente os kilometros rodados e combustivel gasto: \n");
        scanf("%f %f",&x,&y);
        consumo[i] = x / y;
        fflush(stdin);
    }
    k = consumo[0];
    l = 0;
    for(i = 0; i <= 4; i++){
        if(k < consumo[i]){
            k = consumo[i];
            l = i;
        }
        resultado[i] = (1000 / consumo[i]);
    }

    printf("Modelo mais economico: \n");
    for(i = 0; frase[l][i] != '\0'; i++){
        printf("%c",frase[l][i]);
    }
    printf("................................\n");
    for(i = 0; i <= 4; i++){
        for(j = 0; frase[i][j] != '\0'; j++){
            printf("%c",frase[i][j]);
        }
        printf("->%.2fL por 1000km",resultado[i]);
        printf("\n");
    }
    system("pause");
    return 0;
}
