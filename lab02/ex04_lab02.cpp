#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	double x, XQuadrado;
	
	printf("digite um valor real\n");
	scanf("%lf", &x);
	
	XQuadrado = pow(x,2);
	
	printf("o quadrado desse numero eh: %lf \n", XQuadrado);
	
	system("pause");
	return 0;
}