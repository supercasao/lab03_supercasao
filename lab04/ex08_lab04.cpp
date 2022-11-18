#include <stdio.h>
#include <stdlib.h>

int main(){

	int Maior, Menor, Numero, Contador;
	
	printf("digite o numero (1/10):\n");
	scanf("%d", &Numero);
	
	Maior = Numero;
	Menor = Numero;
	
	for (Contador = 2; Contador <= 10; Contador++){
		
		printf("digite o numero (%d/10):\n", Contador);
		scanf("%d", &Numero);
		
		if (Numero > Maior)
			Maior = Numero;
		else if(Numero < Menor)
			Menor = Numero;	
	}
	
	printf("O maior eh: %d, e o menor eh: %d \n", Maior, Menor);
	
	system("pause");
	return 0;
}