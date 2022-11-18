#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	const double pi = 3.141592;
	float x;
	
	printf("digite o raio do circulo:...");
	scanf("%f", &x);
	printf("a area do circulo eh: %.2f \n", pow(x,2)*pi);	
	
	system("pause");
	return 0;
}