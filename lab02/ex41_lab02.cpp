#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int HorasTrabalhadas;
	float ValorHora, Remuneracao;
	
	printf(" a quantidade de horas trabalhadas e o valor da hora trabalhada: ");
	scanf("%d %f", &HorasTrabalhadas, &ValorHora);
	
	Remuneracao = (HorasTrabalhadas * ValorHora) * 1.1;
	
	printf("a remuneracao total foi: %.2f", Remuneracao);
	
	system("pause");
	return 0;
}