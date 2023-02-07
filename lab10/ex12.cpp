#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct mercadoria{
  	int id, quant;
  	float preco;
  	char nome[50];
};

int main(){
  	int n, maiorPreco = 0, maiorQuant = 0;
  	struct mercadoria *prods;

  	printf("Digite a quantidade de mercadoria: ");
  	scanf("%d", &n);

  	prods = (struct mercadoria *)malloc(n * sizeof(struct mercadoria));

  	for (int i = 0; i < n; i++){
    	printf("Digite o nome do %do mercadoria: ", i + 1);
    	scanf("%s", &prods[i].nome);
    	
    	printf("Id do mercadoria: ");
	    scanf("%d", &prods[i].id);
	    
	    printf("Quantidade em estoque: ");
	    scanf("%d", &prods[i].quant);
	    
	    printf("Preco: ");
	    scanf("%f", &prods[i].preco);
	    
    	if (prods[i].preco > prods[maiorPreco].preco){
      		maiorPreco = i;
      	}else if (prods[i].quant > prods[maiorQuant].quant){
      		maiorQuant = i;
      	}
  	}

  	printf("Maior preco: %s - R$%.2f\n", prods[maiorPreco].nome, prods[maiorPreco].preco);
  	
  	printf("Maior quantidade: %s - %d\n", prods[maiorQuant].nome, prods[maiorQuant].quant);
  	
  	system("pause");
  	return 0;
}
