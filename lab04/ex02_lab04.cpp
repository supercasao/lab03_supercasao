#include <stdio.h>
#include <stdlib.h>

int main(){

	int Numero = 1, QuantidadeDeMultiplos = 1;
	
	printf("\n Usado for... \n");
	
	for(Numero = 1; Numero <=100; Numero +=1){
		printf(" %d ", Numero);
	}
	
	printf("\n Usado While... \n");
	Numero = 1;
	
	while (Numero <= 100){
		printf(" %d ", Numero);
		Numero +=1;
	}
	
	printf("\n Usado Do While... \n");
	Numero = 1;
	
	do{
		printf(" %d ", Numero);
		Numero ++;
	}while(Numero <= 100);

	system("pause");
	return 0;
}