#include <stdio.h>
#include <stdlib.h>

int main (){
	
	float ValorProduto, Comissao;
	
	printf("insira o valor do produto: \n");
	scanf(" %f", &ValorProduto);
	
	if (ValorProduto < 20000.00){
		printf("o valor da comissao eh: %.2f \n", 400.00 + 1.14 * ValorProduto);
	}
	else if (ValorProduto >= 20000.00 && ValorProduto < 40000.00){
		printf("o valor da comissao eh: %.2f \n", 500.00 + 1.14 * ValorProduto);
	}
	else if (ValorProduto >= 40000.00 && ValorProduto < 60000.00){
		printf("o valor da comissao eh: %.2f \n", 550.00 + 1.14 * ValorProduto);
	}
	else if (ValorProduto >= 60000.00 && ValorProduto < 80000.00){
		printf("o valor da comissao eh: %.2f \n", 600.00 + 1.14 * ValorProduto);
	}
	else if (ValorProduto >= 80000.00 && ValorProduto < 100000.00){
		printf("o valor da comissao eh: %.2f \n", 650.00 + 1.14 * ValorProduto);
	}
	else if (ValorProduto >= 100000.00){
		printf("o valor da comissao eh: %.2f \n", 700.00 + 1.16 * ValorProduto);
	}
	else {
		printf("valor invalido:...\n");
	}

	system("pause");
	return 0; 
}