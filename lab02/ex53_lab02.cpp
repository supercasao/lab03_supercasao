#include <stdio.h>
#include <stdlib.h>

int main(){
		
	float Largura, Comprimento, PrecoTelaMetro, PrecoTotal;
	
	printf("digite o preco do metro de tela, comprimento e largura do terreno: \n");
	scanf("%f %f %f", &PrecoTelaMetro, &Comprimento, &Largura);
	
	PrecoTotal = PrecoTelaMetro * (2 * Largura + 2 * Comprimento);
	
	printf(" o preco total das telas eh: %.2f \n", PrecoTotal);
	
   system("pause");
   return 0;
}