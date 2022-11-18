#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int DiasTrabalhados;
	float SalarioLiquido;
	
	printf(" a quantidade de dias trabalhador pelo encanador foi: ");
	scanf("%d", &DiasTrabalhados);
	
	SalarioLiquido = (DiasTrabalhados *30)*0.92;
	
	printf("o salario liquido eh: %.2f", SalarioLiquido);
	
	system("pause");
	return 0;
}