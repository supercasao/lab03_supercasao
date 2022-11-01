#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float ValorProduto, ValorProdutoNovo;
	
	printf("Insira o valor do produto:... \n");
	scanf(" %f", &ValorProduto);
	
	if(0 < ValorProduto && ValorProduto < 50){
		printf("O novo valor do produto eh: %.2f \n",ValorProduto = ValorProduto*1.05);
	}
	else if(50 <= ValorProduto && ValorProduto <=100){
		printf("O novo valor do produto eh: %.2f \n",ValorProduto = ValorProduto*1.10);
	}
	else if(100 < ValorProduto){
		printf("O novo valor do produto eh: %.2f \n",ValorProduto = ValorProduto*1.15);
	}
	else{
		printf("Valor invalido... \n");
	}
	
	ValorProdutoNovo = ValorProduto;
	
	if(ValorProdutoNovo < 80){
		printf("Valor eh barato \n");
	}
	else if(80 <= ValorProduto && ValorProduto <=120){
		printf("Valor eh normal \n");
	}
	else if(120 <= ValorProduto && ValorProduto <=200){
		printf("Valor eh caro \n");
	}
	else{
		printf("Valor eh muito caro \n");
	}
	
	system("pause");
	return 0; 
}