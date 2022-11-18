#include <stdio.h>
#include <stdlib.h>

int main(){

	int Numero, Soma, Contador;
	
	for (Contador = 1; Contador <= 10; Contador++){
		printf("digite o numero (%d/10):\n", Contador);
		scanf("%d", &Numero);
		Soma = Soma + Numero;
	}
	
	printf("a soma de todos numeros eh: %d \n", Soma);
	
	system("pause");
	return 0;
}