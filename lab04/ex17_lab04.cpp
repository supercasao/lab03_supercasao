#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int contador;
	float chico = 1.50, jose = 1.10;
	
	for(contador = 1; chico >= jose; contador ++){
		chico += 0.02;
		jose += 0.03;
		printf(" chico = %.2f, jose = %.2f, ano = %d \n",chico, jose, contador);
	}
	
	printf("O total de anos eh: %d \n", contador-1);
	
	system("pause");
	return 0;
}