#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float MetrosCubicos, litros;
	
	printf("digite uma medida em metros cubicos\n");
	scanf("%f", &MetrosCubicos);
	
	litros = MetrosCubicos * 1000;
	
	printf("esta medida em litros eh: %f \n", litros);
	
	system("pause");
	return 0;
}