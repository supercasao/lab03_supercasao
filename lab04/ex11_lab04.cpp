#include <stdio.h>
#include <stdlib.h>

int main(){

	int Numero, Contador = 0;

	printf("digite um numero: \n");
	scanf("%d", &Numero);
	
	while (Contador <= Numero){
		printf(" %d ", Contador);
		Contador = Contador + 1;
	}
		
	printf("Finalizando programa \n");
	
	system("pause");
	return 0;
}