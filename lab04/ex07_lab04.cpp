#include <stdio.h>
#include <stdlib.h>

int main(){

	int Numero, Soma, Contador;
	
	for (Contador = 1; Contador <= 10; Contador++){
		printf("digite o numero (%d/10):\n", Contador);
		scanf("%d", &Numero);
		
			if (Numero >= 0){
			Soma = Soma + Numero;
			}else{
				Soma = Soma + 0;
			}
	}
	
	printf("a media de todos numeros eh: %d \n", Soma/10);
	
	system("pause");
	return 0;
}