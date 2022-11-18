#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float Real, CotacaoDolar, ValorEmDolar;
	
	printf("digite o valor em reais e a atual cotacao do dolar: ");
	scanf("%f\n %f", &Real, &CotacaoDolar);
	
	ValorEmDolar = Real / CotacaoDolar;
	
	printf(" a quantidade de reais em dolares eh: %.2f", ValorEmDolar);
	
	system("pause");
	return 0;
}