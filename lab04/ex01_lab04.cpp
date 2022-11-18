#include <stdio.h>
#include <stdlib.h>

int main(){

	int Numero = 3, QuantidadeDeMultiplos = 1;
	
	while (QuantidadeDeMultiplos <= 5){
		printf("multiplo de 3 nao nulos: %d \n", Numero);
		Numero += 3;
		QuantidadeDeMultiplos +=1;
	}

	system("pause");
	return 0;
}