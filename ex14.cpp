#include <stdio.h>
#include <stdlib.h>

int main(){
    struct aeroporto{
        int codigo, qChega, qSai;
    };
    
    struct aeroporto a[5];
    
    struct voo{
        int destino, origem;
    };
    
    struct voo v[5];

    int verifA;

    for (int i = 0; i < 5; i++){
        printf("insira o codigo do %do aeroporto: ", i + 1);
        scanf("%d", &a[i].codigo);
        
        printf("insira a quantiade de voos que chegam: ");
        scanf("%d", &a[i].qChega);
        
        printf("insira a quantidade de voos que saem: ");
        scanf("%d", &a[i].qSai);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("======= %d VOO =======\n", i + 1);
        
        printf("Aeroporto de partida: ");
        scanf("%d", &v[i].origem);
        
        printf("Aeroporto de destino: ");
        scanf("%d", &v[i].destino);
        
        verifA = 0;
        
        for (int j = 0; j < 5; j++){
            if (v[i].origem == a[j].codigo){
                verifA++;
            }
            if (v[i].destino == a[j].codigo){
                verifA++;
            }
        }
        
        if (verifA < 5){
            return printf("Codigo de origem ou destino invalidos.");
        }
    }

    printf("====== REGISTRO DE VOOS ======\n");
    
    for (int i = 0; i < 5; i++){
        printf("VOO %d\n Origem: A-%d\n Destino: A-%d\n", i+1, v[i].origem, v[i].destino);
    }
    
    system("pause");
    return 0;
}
