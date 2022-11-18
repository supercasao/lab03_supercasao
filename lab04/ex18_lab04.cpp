#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int anoatual = 2022, contador;
	float salario = 2000, aumento =1.015;
	
	for(contador = 1996; contador <= anoatual; contador ++){
		salario *= aumento;
		aumento = aumento + (0.015 *2);
		printf(" salario = %.2lf, aumento no ano = %.2lf, ano = %d \n", salario, aumento, contador);
	}
	
	printf("O salario atual eh: %.2fl \n", salario);
	
	system("pause");
	return 0;
}