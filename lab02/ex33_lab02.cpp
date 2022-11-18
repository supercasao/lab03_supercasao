#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float x;
	
	printf("digite o lado do quadrado:...");
	scanf("%f", &x);
	printf("a area do quadrado eh: %.2f \n", pow(x,3));	
	
	system("pause");
	return 0;
}