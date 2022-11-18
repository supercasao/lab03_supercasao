#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float Distancia, Consumo, GastoPorLitro;
	
	printf("digite a distancia (Km) e quanto o carro gastou de combustivel(L)): \n");
    scanf(" %f %f",&Distancia, &Consumo);
    
    GastoPorLitro = Distancia / Consumo;
    
	if (GastoPorLitro >= 0 && GastoPorLitro < 8 ){
		printf("Venda o carro, o consumo eh de: %.2f \n", GastoPorLitro);
	}
	else if (GastoPorLitro >= 8 && GastoPorLitro < 14 ){
		printf("Carro economico, o consumo eh de: %.2f \n", GastoPorLitro);
	}
	else if (GastoPorLitro >= 14){
		printf("Carro super economico, o consumo eh de: %.2f\n", GastoPorLitro);
	}
	else{
		printf("Valores invalidos. \n");
	}

	system ("pause");
    return 0;
}