#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float Salario, aumento;
	
	printf("digite o valor do salario:...");
	scanf("%f", &Salario);
	
	aumento = Salario * 1.25;
	
	printf("o valor do salario com aumento eh: %.2f \n", aumento);	
	
	system("pause");
	return 0;
}