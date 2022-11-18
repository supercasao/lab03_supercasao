#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float ValorProduto, Desconto;
	
	printf("digite o valor do produto:...");
	scanf("%f", &ValorProduto);
	
	Desconto = ValorProduto * 0.82;
	
	printf("o valor do produto com desconto eh: %.2f \n", Desconto);	
	
	system("pause");
	return 0;
}