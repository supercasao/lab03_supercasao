#include <stdio.h>
#include <stdlib.h>

int main(){

	int Contador = 0, Soma = 0;
	
	while (Contador <= 1000){
		Contador = Contador + 1;
		
		if (Contador % 3 == 0){
			printf("multiplo de 3: %d \n", Contador);
			Soma = Contador + Soma;
		}else if (Contador % 5 == 0){
			printf("multiplo de 5: %d \n", Contador);
			Soma = Contador + Soma;
		}
	}
		
	printf("A soma dos multiplos eh: %d \n", Soma);
	
	system("pause");
	return 0;
}