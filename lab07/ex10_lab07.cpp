#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char mercadoria[40], valor[10];
    float x, y;
    int contador;
    
    printf("Digite o nome de uma mercadoria: \n");
    fgets(mercadoria,40,stdin);
    fflush(stdin);
    
    printf("Digite o preco da mercadoria: \n");
    fgets(valor,10,stdin);
    
    x = atof(valor);
    y = x * 0.90;
    
    printf("Nome: \n");
    
    for(contador = 0; mercadoria[contador] != '\n'; contador++){
        printf("%c",mercadoria[contador]);
    }
    
    printf("\nValor total: %.2f\n",x);
    printf("Valor do desconto: %.2f\n", x * 0.10);
    printf("Valor a ser pago a vista: %.2f\n",y);
    
    system("pause");
    return 0;
}
