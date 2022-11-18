#include <stdio.h>
#include <stdlib.h>

int main(){

	int Numero, Contador, Vezes;

	printf("digite um numero e quantos numeros voce deseja imprimir apos ele: \n");
	scanf("%d %d", &Numero, &Vezes);
	
	
	if ((Numero % 3 == 0) || (Numero % 1 == 00) && (Numero % 2 !=0)){
		for (Contador = 1; Contador <= Vezes; Contador++){
			printf(" %d ", Numero);
			Numero = Numero + 2;
		}
			
	}else{
		Numero = Numero + 1;
		for (Contador = 1; Contador <= Vezes; Contador++){
			printf(" %d ", Numero);
			Numero = Numero + 2;
		}
	}
	
	printf("Fim do programa... \n");
	
	system("pause");
	return 0;
}