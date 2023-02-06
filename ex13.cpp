#include <stdio.h>
#include <stdlib.h>

int main(){
    struct produtos {
        char nome[15];
        int codigo, quantidade;
        float preco;
    };

    struct produtos prod[5];
    
    int cod, qnt, prodEnc = 0;
    
    for(int i = 0; i < 2; i++){
        printf("insira o nome %do do produto: ", i+1);
        setbuf(stdin, NULL);
        gets(prod[i].nome);
        
        printf("insira o preco do produto: ");
        scanf("%f", &prod[i].preco);
        
        printf("insira o codigo do produto: ");
        scanf("%d", &prod[i].codigo);
        
        printf("insira a quantidade do produto: ");
        scanf("%d", &prod[i].quantidade);
    }

    do{
        printf("\n========= FACA SEU PEDIDO =========\n");
        
        printf("insira o codigo do produto: ");
        scanf("%d", &cod);
        
        printf("insira a quantidade de produtos: ");
        scanf("%d", &qnt);
        
        prodEnc = 0;
        
        for (int i = 0; i < 2; i++){
            if(cod == prod[i].codigo){
                if(qnt <= prod[i].quantidade){
                    printf("Pedido realizado com sucesso! Sera enviado %d %s.\n", qnt, prod[i].nome);
                    prod[i].quantidade -= qnt;
                    
                    printf("Status do produto atualizado:\nNome: %s\nQuantidade:%d\n", prod[i].nome, prod[i].quantidade);
                    prodEnc++;
                }
                prodEnc++;
            }
        }

        if(prodEnc == 0){
            printf("Codigo de produto invalido.");
        }else if (prodEnc == 1){
            printf("Quantidade de produto indisponivel.");
        }   
    } while (cod != 0);
    
    system("pause");
    return 0;
}
