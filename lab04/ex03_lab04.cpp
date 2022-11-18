#include <stdio.h>
#include <stdlib.h>

int main(){

	int Numero = 10;
	
	printf("contagem regressiva!!! \n");
	
	while (Numero >= 0){
		printf(" %d \n", Numero);
		Numero --;
	}

	printf("contagem regressiva!!!");
	
	system("pause");
	return 0;
}