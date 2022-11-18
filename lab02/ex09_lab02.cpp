#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float Kelvin, Celsius;
	
	printf("digite uma temperatura em Celsius\n");
	scanf("%f", &Celsius);
	
	Kelvin =   Celsius + 273.15;
	
	printf("esta temperatura na escala Kelvin eh: %f \n", Kelvin);
	
	system("pause");
	return 0;
}