#include <stdio.h>
#include <stdlib.h>

void KmH(float distancia, float litros){
    float consumo;
    consumo = distancia/litros;
    if(consumo < 8){
        printf("Venda o carro!\n");
    }else if(consumo >= 8 && consumo < 14){
        printf("Economico!\n");
    }else{
        printf("Super economico!\n");
    }
}

int main(){
    float distancia, litros, consumo;
    
    do{
    	printf("Digite os kilometros percorridos e a quantidade de gasolina consumida: \n");
    	scanf("%f %f",&distancia,&litros);
    	if(distancia < 0 || litros < 0){
        printf("Algum valor digitado eh invalido!\n");
    	}
    }while(distancia < 0 || litros < 0);
    KmH(distancia,litros);
    
    system("pause");
    return 0;
}

