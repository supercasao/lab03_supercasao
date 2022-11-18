#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float Kelvin, Celsius;
	
	printf("digite uma temperatura em kelvin\n");
	scanf("%f", &Kelvin);
	
	Celsius =   Kelvin - 273.15;
	
	printf("esta temperatura na escala Celsius eh: %f \n", Celsius);
	
	system("pause");
	return 0;
}