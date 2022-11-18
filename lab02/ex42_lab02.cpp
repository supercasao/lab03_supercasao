#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float SalarioBase, SalarioLiquido;
	
	printf("digite o salario base: ");
	scanf("%f", &SalarioBase);
	
	SalarioLiquido = (SalarioBase * 1.05) - (SalarioBase*0.07);
	
	printf("o salario liquido foi: %.2f", SalarioLiquido);
	
	system("pause");
	return 0;
}