#include <stdio.h>
#include <stdlib.h>

int main(){
	
  	struct carros {
    	char marca[15], modelo[15];
    	int ano;
    	float preco;
  	};
  	
  	struct carros c[5];

  	float opt;

  	for (int i = 0; i < 5; i++){
	    printf("insira a marca do %do carro: ", i + 1);
	    setbuf(stdin, NULL);
	    gets(c[i].marca);
	    
	    printf("insira o modelo do %do carro: ", i + 1);
	    setbuf(stdin, NULL);
	    gets(c[i].modelo);
	    
	    printf("insira o ano do %do carro: ", i + 1);
	    scanf("%d", &c[i].ano);
	    
	    printf("insira o preco do %do carro: ", i + 1);
	    scanf("%f", &c[i].preco);
  	}

  	do{
    	printf("Procurar carros com valor abaixo de: ");
    	scanf("%f", &opt);
    	
    	for (int i = 0; i < 5; i++){
      		if(c[i].preco < opt){
       			 printf("Marca: %s\nModelo: %s\nAno: %d\nPreco: R$%.2f\n\n", c[i].marca, c[i].modelo, c[i].ano, c[i].preco);
      		}
    	}
  	} while (opt != 0);
  
  	system("pause");
    return 0;
}
