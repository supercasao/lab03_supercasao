#include <stdio.h>
#include <stdlib.h>

int main(){

	int Numero, Contador;

	printf("digite um numero: \n");
	scanf("%d", &Numero);
	
	
	if ((Numero % 2 == 0) || (Numero == 00)){
		for (Contador = 1; Contador <= 50; Contador++){
			Numero = Numero + 2;
		}
	}else{
		Numero = Numero + 1;
		for (Contador = 1; Contador <= 50; Contador++){
			Numero = Numero + 2;
		}
	}
	
	printf("A soma dos proximos 50 numeros pares eh: %d \n", Numero);
	
	system("pause");
	return 0;
}