#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float kg, libras;
	
	printf("digite uma medida em libras\n");
	scanf("%f", &libras);
	
	kg = libras * 0.45;
	
	printf("esta medida em kg eh: %f \n", kg);
	
	system("pause");
	return 0;
}