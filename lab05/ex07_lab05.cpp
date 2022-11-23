#include <stdio.h>
#include <stdlib.h>

void TemperaturaFahrenheit(float celsius){
	printf("A temperatura em graus Fahrenheit, eh: %.2f \n", (celsius * 9.0)/5.0 + 32.0);
}

int main(){
    float celsius;
    
    printf("insira os graus celsius. \n");
    scanf("%f", &celsius);
    
	TemperaturaFahrenheit(celsius);
	
    system("pause");
    return 0;
}
