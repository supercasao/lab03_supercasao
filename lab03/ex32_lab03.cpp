#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int CodProduto, Quantidade;
	
	printf("Insira o codigo do produto e a quantidade desejada, respectivamente:... \n");
	scanf(" %d %d", &CodProduto, &Quantidade);
	
	switch(CodProduto){
		case 100:
			printf("produto selecionado: cachorro quente, quantidade: %d, total a ser pago: %.2f \n", Quantidade, Quantidade*1.20);
		break;
		
		case 101:
			printf("produto selecionado: bauru simples, quantidade: %d, total a ser pago: %.2f \n", Quantidade, Quantidade*1.30);
		break;
		
		case 102:
			printf("produto selecionado: bauru com ovo, quantidade: %d, total a ser pago: %.2f \n", Quantidade, Quantidade*1.50);
		break;
		
		case 103:
			printf("produto selecionado: hamburguer, quantidade: %d, total a ser pago: %.2f \n", Quantidade, Quantidade*1.20);
		break;
		
		case 104:
			printf("produto selecionado: cheeseburguer, quantidade: %d, total a ser pago: %.2f \n", Quantidade, Quantidade*1.70);
		break;
		
		case 105:
			printf("produto selecionado: suco, quantidade: %d, total a ser pago: %.2f \n", Quantidade, Quantidade*2.20);
		break;
		
		case 106:
			printf("produto selecionado: refrigerante, quantidade: %d, total a ser pago: %.2f \n", Quantidade, Quantidade*1.00);
		break;
		
		default :
    	printf ("Valor invalido!\n");
	}

	system("pause");
	return 0; 
}