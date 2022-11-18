#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float MetrosCubicos, litros;
	
	printf("digite uma medida em litros\n");
	scanf("%f", &litros);
	
	MetrosCubicos = litros / 1000;
	
	printf("esta medida em metros cubicos eh: %f \n", MetrosCubicos);
	
	system("pause");
	return 0;
}