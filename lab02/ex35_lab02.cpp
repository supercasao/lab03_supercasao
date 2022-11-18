#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	double cat1, cat2, hipotenusa;
	
	printf("digite o valor dos catetos do triangulo:...");
	scanf("%lf %lf", &cat1, &cat2);
	
	hipotenusa = sqrt(pow(cat1,2) + pow(cat2,2));
	
	printf("a hipotenusa do triangulo eh: %.2lf \n", hipotenusa);	
	
	system("pause");
	return 0;
}