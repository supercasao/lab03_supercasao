#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float Fahrenheit, Celsius;
	
	printf("digite uma temperatura em Celsius\n");
	scanf("%f", &Celsius);
	
	Fahrenheit = Celsius*(9.0/5.0)+32.0;
	
	printf("esta temperatura na escala Fahrenheit eh: %f \n", Fahrenheit);
	
	system("pause");
	return 0;
}