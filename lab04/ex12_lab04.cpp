#include <stdio.h>
#include <stdlib.h>

int main(){

	int Numero, Contador = 0, Soma = 0;

	printf("digite um numero: \n");
	scanf("%d", &Numero);
	
	while (Contador <= Numero){
		Contador = Contador + 1;
		
		if ((Numero % Contador == 0) && (Numero != Contador)){
			printf("Divisor: %d \n", Contador);
			Soma = Contador + Soma;
		}
	}
		
	printf("A soma dos divisores eh: %d \n", Soma);
	
	system("pause");
	return 0;
}