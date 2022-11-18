#include <stdio.h>
#include <stdlib.h>
#include <math.h>>

int main(){
	
	float x, y, z, SomaDosQuadrados;
	
	printf("digite os tres numeros: ");
	scanf("%f \n %f \n %f", &x, &y, &z);
	
	SomaDosQuadrados = pow(x,2) + pow(y,2) + pow(z,2);
	
	printf("a soma dos 3 quadrados eh: %.2f", SomaDosQuadrados);
	
	system("pause");
	return 0;
}