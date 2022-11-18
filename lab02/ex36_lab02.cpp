#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	const double pi = 3.141592;
	double raio, altura;
	
	printf("digite o valor da altura e o raio do cilindro:...");
	scanf("%lf %lf", &altura, &raio);
	
	printf("o volime do cilindro eh: %.2lf \n", (pi*pow(raio,2))*altura);	
	
	system("pause");
	return 0;
}