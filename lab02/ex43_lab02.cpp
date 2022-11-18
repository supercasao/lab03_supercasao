#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float Preco, Comissao;
	int FormaPagamento;
	
	printf("digite o preco do produto: ");
	scanf("%f", &Preco);
	printf("digite a forma de pagamento do produto:\n (1) a vista \n (2) 3x sem juros \n");
	scanf("%d", &FormaPagamento);
	
	if (FormaPagamento == 1){
		printf(" o preco do produto eh: %.2f \n a comissao do vendedor eh: %.2f\n", Preco*0.9,Comissao = (Preco*0.9)*0.05);
	}
	else if (FormaPagamento == 2){
			printf(" o preco do produto eh: %.2f \n a comissao do vendedor eh: %.2f\n", Preco, Comissao = Preco*0.05);
	}
	else {
		printf("numero invalido, encerrando programa...\n");
	}
		
		
	system("pause");
	return 0;
}