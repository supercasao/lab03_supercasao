#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float Fahrenheit, Celsius;
	
	printf("digite uma temperatura em Fahrenheit\n");
	scanf("%f", &Fahrenheit);
	
	Celsius =  5.0*(Fahrenheit- 32.0)/9.0,
	
	printf("esta temperatura na escala Celsius eh: %f \n", Celsius);
	
	system("pause");
	return 0;
}