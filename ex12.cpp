#include <stdio.h>
#include <stdlib.h>

int main(){
    struct eletrodomestico {
        char nome[15];
        float potencia, tempo;
    };

    struct eletrodomestico eletro[5];
    
    int dias;
    
    float cTot = 0, cRel[5];

    for (int i = 0; i < 5; i++){
        printf("insira o nome do eletrodomestico: ");
        setbuf(stdin, NULL);
        gets(eletro[i].nome);
        
        printf("insira a potencia do eletrodomestico em W: ");
        scanf("%f", &eletro[i].potencia);
        
        printf("insira o tempo de uso diario do eletrodomestico em horas: ");
        scanf("%f", &eletro[i].tempo);
    }

    printf("Digite quantos dias voce quer calcular: ");
    scanf("%d", &dias);
    
    for(int i = 0; i < 5; i++){
        cTot += (eletro[i].potencia * eletro[i].tempo);
    }

    cTot *= dias;

    printf("O consumo total dos eletrodomesticos em %d dias foi: %.2fW\n\n", dias, cTot);

    for (int i = 0; i < 5; i++){
        cRel[i] = (((eletro[i].potencia * eletro[i].tempo) * 100) * dias)/ cTot;
        printf("%s corresponde a %.2f%% do consumo total de eletrodomesticos.\n", eletro[i].nome, cRel[i]);
    }

	system("pause");
    return 0;
}

