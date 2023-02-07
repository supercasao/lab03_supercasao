#include <stdio.h>
#include <stdlib.h>

struct data {
  	int dia, mes, ano;
};

int main{
	struct data dma[2];
	int totA, totB, dif;
	
	for (int i = 0; i < 2; i++){
	    printf("insira a %da data (dd/mm/aa): ", i+1);
	    scanf("%d/%d/%d", &dma[i].dia, &dma[i].mes, &dma[i].ano);
	}
	
	totA = dma[0].dia + (dma[0].mes * 30) + (dma[0].ano * 365);
	totB = dma[1].dia + (dma[1].mes * 30) + (dma[1].ano * 365);
	  
	dif = totA - totB;
	if(dif < 0) dif *= -1;
	
	printf("A diferenca foi: %d dias", dif);
	
	system("pause");
    return 0;
}
